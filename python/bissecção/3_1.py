#x^3+3x-1 pelo método da bissecção  
def f(x):
    return x**3+3*x-1

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

    erro = abs((x-x0)/x)
    print(f'x = {x} and f(x) = {f(x)}\n')
    