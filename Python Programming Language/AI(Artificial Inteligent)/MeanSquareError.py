import numpy as np

# imaginary slope a and intercept b
fake_a_b = [3,76]

# x and y value
data = [[2, 81], [4, 93], [6, 91], [8, 97]]
x = [i[0] for i in data]
y = [i[1] for i in data]

# y=ax+b int a,b function
def predict(x):
    return fake_a_b[0]*x + fake_a_b[1]

# MSE Function
def mse(y, y_hat):
    return ((y - y_hat) ** 2).mean()

# MSE Function int y value
def mse_val(predict_result, y):
    return mse(np.array(predict_result), np.array(y))

# Empty list for predict value
predict_result = []

# preict_result list
for i in range(len(x)):
    predict_result.append(predict(x[i]))
    print("Study Hour = %.f, Real Score = %.f, Predict Score = %.f"
          % (x[i], y[i], predict(x[i])))

# Final MSE
print("Final MSE : " + str(mse_val(predict_result,y)))
