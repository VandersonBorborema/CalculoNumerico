#x^3+3x-1 pelo método da bissecção
import math as mt
import math

def f(x):
    return mt.cos((mt.pi*(x+1))/8) + 0.148*x - 0.9062

a = float(input("Limite inferior inicial: "))
b = float(input("Limite superior inicial: "))
erro = 1
x = 1

while(erro > 0.0001):
    
    x0 = x
    x = (a+b)/2
    if(f(a)*f(x)<0):

        b = x 
    else:
        a = x
    if(x!=0):
        erro = abs((x-x0)/x)
    else:
        erro = 0
    print(f'x = {x} and f(x) = {f(x)}\n')
    