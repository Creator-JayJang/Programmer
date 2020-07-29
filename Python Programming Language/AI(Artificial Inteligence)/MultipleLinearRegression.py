import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

# List of StudyHour X and Score Y
data = [[2, 0, 81], [4, 4, 93], [6, 2, 91], [8, 3, 97]]
x1 = [i[0] for i in data]
x2 = [i[1] for i in data]
y = [i[2] for i in data]

# Garph
ax = plt.axes(projection = '3d')
ax.set_xlabel('study_hours')
ax.set_ylabel('private_class')
ax.set_zlabel('score')
ax.dist = 11
ax.scatter(x1, x2, y)
plt.show()

# X,Y List value to Numpy array
x1_data = np.array(x1)
x2_data = np.array(x2)
y_data = np.array(y)

# Reset slope a and intercept b
a1 = 0
a2 = 0
b = 0

# Rate of Learning
lr = 0.01

# Set How repeat
epochs = 2001

# Gradient Discent Method
for i in range(epochs):     # Repeat Num of epoch
    y_pred = a1 * x1_data + a2 * x2_data + b    # equ for finding y
    error = y_data - y_pred     # equ for finding error
    a1_diff = -(2/len(x1_data)) * sum(x1_data * (error))    # Differential Function by a1
    a2_diff = -(2/len(x2_data)) * sum(x2_data * (error))  # Differential Function by a2
    b_diff = -(2/len(x1_data)) * sum(y_data - y_pred)      # Differential Function by b
    a1 = a1 - lr * a1_diff      # Update a1 by multiple Rate of Learning
    a2 = a2 - lr * a2_diff      # Update a2 by multiple Rate of Learning
    b = b - lr * b_diff
    if i % 100 == 0:
        print("epoch=%.f, slope1=%.04f, slope2=%.04f, intercept=%.04f" %(i, a1, a2, b))

