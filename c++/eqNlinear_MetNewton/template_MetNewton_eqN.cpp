#include <bits/stdc++.h>

using namespace std;

double f(double x){
    return 4*x-exp(x);
}

double fd(double x){
    return 4 - exp(x);
}

int main(void){
    double x, x1, erro = 1, n;

    cout <<  "Informe o x inicial: ";
    cin >> x1;
    cout << "Informe o erro desejado: ";
    cin >> n;

    while(erro > n){
        
        cout << "x = " << x1 << " f(x) = "<< f(x) << endl;
        x = x1;
        x1 = x - (f(x)/fd(x));

        erro = abs((x1 - x)/x1);
    
    }

}