import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import matplotlib.pyplot as plt
import matplotlib.animation as animation
from collections import deque

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            Twist,
            'cmd_vel',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

        # Initialize data storage for plotting
        self.times = deque(maxlen=100)  # Store last 100 timestamps
        self.linear_speeds = deque(maxlen=100)  # Store last 100 linear speed values
        self.angular_speeds = deque(maxlen=100)  # Store last 100 angular speed values
        self.start_time = self.get_clock().now().seconds_nanoseconds()[0]

    def listener_callback(self, msg):
        current_time = self.get_clock().now().seconds_nanoseconds()[0] - self.start_time
        linear_speed = msg.linear.x
        angular_speed = msg.angular.z

        self.get_logger().info(f'Received linear speed: {linear_speed}, angular speed: {angular_speed} at time: {current_time}')

        self.times.append(current_time)
        self.linear_speeds.append(linear_speed)
        self.angular_speeds.append(angular_speed)

def animate(i, times, linear_speeds, angular_speeds, ax1, ax2):
    ax1.clear()
    ax1.plot(times, linear_speeds, label='Linear Speed (m/s)', color='blue')
    ax1.set_xlabel('Time (s)')
    ax1.set_ylabel('Linear Speed (m/s)')
    ax1.set_title('Real-time Linear Speed from cmd_vel Topic')
    ax1.legend()
    ax1.grid()

    ax2.clear()
    ax2.plot(times, angular_speeds, label='Angular Speed (rad/s)', color='red')
    ax2.set_xlabel('Time (s)')
    ax2.set_ylabel('Angular Speed (rad/s)')
    ax2.set_title('Real-time Angular Speed from cmd_vel Topic')
    ax2.legend()
    ax2.grid()

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    # Create the plot with two subplots
    fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(10, 8))
    ani = animation.FuncAnimation(fig, animate, fargs=(minimal_subscriber.times, minimal_subscriber.linear_speeds, minimal_subscriber.angular_speeds, ax1, ax2), interval=100)

    # Use a separate thread to run the ROS2 spin
    from threading import Thread
    ros_thread = Thread(target=rclpy.spin, args=(minimal_subscriber,), daemon=True)
    ros_thread.start()

    plt.tight_layout()
    plt.show()

    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
