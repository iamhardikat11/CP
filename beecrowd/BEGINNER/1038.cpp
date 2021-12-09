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
        case 1: printf("Total: R$ %.2lf\n",4.00*Y);
                break;
        case 2: printf("Total: R$ %.2lf\n",4.50*Y);
                break;
        case 3: printf("Total: R$ %.2lf\n",5.00*Y);
                break;
        case 4: printf("Total: R$ %.2lf\n",2.00*Y);
                break;
        case 5: printf("Total: R$ %.2lf\n",1.50*Y);
                break;
    }
    return 0;
}
