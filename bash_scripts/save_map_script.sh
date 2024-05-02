cd /home/denis/diploma_src/dms_ws
source install/setup.bash

ros2 run nav2_map_server map_saver_cli -t map_updated -f /home/denis/diploma_src/collision_maps/map_updated.yaml