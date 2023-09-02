//Implementação padrão do método da bissecção em c++, basta mudar a função de entrada
#include <bits/stdc++.h>

using namespace std;

double f(double x){
    return cos((M_PI*(x+1))/8) + 0.148*x - 0.9062;
}

int main(void){
    double a, b, x = 1, x0, erro = 1, n;

    cout <<  "Informe o limite inferior e superior: ";
    cin >> a >> b;
    cout << "Erro desejado: ";
    cin >> n;

    while(erro > n){
        x0 = x;
        x = (a+b)/2;
        if(f(x)*f(a)<0){
            b = x;
        }else{
            a = x;
        }
        
        erro = abs((x-x0)/x);
        
        cout << "x = " <<x<< " f(x) = "<<f(x)<<endl; 
    }

}