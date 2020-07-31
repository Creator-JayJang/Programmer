import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

# pima indian diabete dataset
df = pd.read_csv('Data Set/pima-indians-diabetes.csv',
                 names = ["pregnant", "plasma", "pressure", "thickness", "insulin", "BMI", "pedigree", "age", "class"])

# first 5 sentance
print(df.head(5))

# data information
print(df.info())

# Each information
print(df.describe())

# print pragnant and class
print(df[['plasma', 'class']])

# Data Relationship in Graph
colormap = plt.cm.gist_heat
plt.figure(figsize=(12, 12))

# Graph information
sns.heatmap(df.corr(), linewidths=0.1, vmax=0.5, cmap=colormap, linecolor='white', annot=True)
plt.show()

grid = sns.FacetGrid(df, col='class')
grid.map(plt.hist, 'plasma', bins=10)
plt.show()

# Keras Function for Deeplearning
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense

# Needed Library
import numpy
import tensorflow as tf

# Same value at every trial
numpy.random.seed(3)
tf.random.set_seed(3)

# Import Data
dataset = numpy.loadtxt('Data Set/pima-indians-diabetes.csv', delimiter=",")
X = dataset[:, 0:8]
Y = dataset[:, 8]

# Set model
model = Sequential()
model.add(Dense(12, input_dim=8, activation='relu'))
model.add(Dense(8, activation='relu'))
model.add(Dense(1, activation='sigmoid'))

# Compile model
model.compile(loss='binary_crossentropy', optimizer='adam', metrics=['accuracy'])

# Start model
model.fit(X, Y, epochs=200, batch_size=10)

# Output
print("\n Accuracy : %.4f" % (model.evaluate(X, Y)[1]))
