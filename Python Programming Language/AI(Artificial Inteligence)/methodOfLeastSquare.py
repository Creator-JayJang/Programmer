import numpy as np

# x and y value
x = [2, 4, 6, 8]
y = [81, 93, 91, 97]

# Mean x and y
mx = np.mean(x)
my = np.mean(y)

print("Mean of x", mx)
print("Mean of y", my)

# denominator of slope equ
divisor = sum([(mx - i)**2 for i in x])

# numerator of slope equ
def top(x, mx, y, my):
    d = 0
    for i in range(len(x)):
        d += (x[i] - mx) * (y[i] - my)
    return d
dividend = top(x, mx, y, my)

print("Denominator : ", divisor)
print("numerator :", dividend)

# slope and intercept
a = dividend / divisor
b = my - (mx*a)

# define
print(" a =", a)
print(" b =", b)