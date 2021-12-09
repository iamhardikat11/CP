#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X,Y;
    cin >> X >> Y;
    switch(X)
    {
        case 1: cout << "TOTAL : R$ " << 4.00*Y <<endl;
                break;
        case 2: cout << "TOTAL : R$ " << 4.50*Y <<endl;
                break;
        case 3: cout << "TOTAL : R$ " << 5.00*Y <<endl;
                break;
        case 4: cout << "TOTAL : R$ " << 2.00*Y <<endl;
                break;
        case 5: cout << "TOTAL : R$ " << 1.50*Y <<endl;
                break;
    }
    return 0;
}
