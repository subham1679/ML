import numpy as np  

def gradient_desc(x,y):
    m_curr=b_curr = 0
    iterations = 800
    learning = 0.001
    n = len(x)
    for i in range(iterations):
        y_pred = m_curr*x +b_curr
        md = -(2/n) *sum(x*(y - y_pred))
        bd = -(2/n) * sum(y-y_pred)
        m_curr = m_curr - (learning * md)
        b_curr = b_curr -(learning * bd)
        print(f"m is {m_curr}, b is {b_curr}, iteration is {i}")

x = np.array([1,2,3,4,5])
y = np.array([5,7,9,11,13])

gradient_desc(x,y)
# print(sum(x))