import matplotlib.pyplot as plt
import numpy as np

# Data for the graph
categories = ['DMS', 'STD']
smooth_navigation = [100.0, 96.0] # [72.0, 64.0]
# wait_recoveries = [28.0, 0.0]
collisions = [0.0, 4.0] # [28.0, 36.0]

# Bar width
bar_width = 0.75

# Positions of the bars on the x-axis
r1 = np.arange(len(categories))

# Create the figure and axis
fig, ax = plt.subplots()

# Plotting the bars
ax.bar(r1, smooth_navigation, color='#66c2a5', edgecolor='grey', width=bar_width, label='Успешная навигация')
# ax.bar(r1, wait_recoveries, bottom=smooth_navigation, color='#fc8d62', edgecolor='grey', width=bar_width, label='Поведение ожидания')
ax.bar(r1, collisions, bottom=smooth_navigation, color='#8da0cb', edgecolor='grey', width=bar_width, label='Столкновение')

plt.text(1, smooth_navigation[1] + collisions[1]/2, f'{collisions[1]}%', ha='center', va='center', color='black', fontsize=12)
# Adding the percentages text
for i in range(len(categories)):
    plt.text(i, smooth_navigation[i]/2, f'{smooth_navigation[i]}%', ha='center', va='center', color='black', fontsize=12)
    # plt.text(i, smooth_navigation[i] + wait_recoveries[i]/2, f'{wait_recoveries[i]}%', ha='center', va='center', color='black', fontsize=12)
    # plt.text(i, smooth_navigation[i] + collisions[i]/2, f'{collisions[i]}%', ha='center', va='center', color='black', fontsize=12)

# General layout
ax.set_ylabel('Процент, %')
ax.set_title('Скорость пешеходов 0.5 м/с')
ax.set_xticks(r1)
ax.set_xticklabels(categories)
ax.legend(loc='upper left', bbox_to_anchor=(1,1), ncol=1)

plt.tight_layout()
plt.show()
