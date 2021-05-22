#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int linha, cont = 1, valor_min, valor_max;
    double valor, soma = 0;
    string tipo;
    cin >> linha;
    cin >> tipo;
    while (cont <= 144){
        cin >> valor;
        valor_min = (linha * 12) + 1;
        valor_max = (linha * 12) + 12;
        if (cont >= valor_min){
            if (cont <= valor_max){
                soma = soma + valor;
            }
        }
        cont++;
    }
    cout.precision(1);
    if (tipo[0] == 'S'){
        cout << fixed << soma <<endl;
    }else{
        soma = soma / 12;
        cout << fixed << soma <<endl;
    }
    return 0;
}
