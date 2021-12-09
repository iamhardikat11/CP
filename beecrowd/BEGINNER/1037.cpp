#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float a;
    cin >> a;
    if(a<0 || a>100)
     cout << "Fora de intervalo" <<endl;
    else if(a>=0.0 && a<=25.0)
     cout << "Intervalo [0,25]" <<endl;
    else if(a>25.0 && a<=50.0)
     cout << "Intervalo (25,50]" <<endl;
    else if(a>50.0 && a<=75.0)
     cout << "Intervalo (50,75]" <<endl;
    else 
     cout << "Intervalo (75,100]" <<endl;
    return 0;
}
