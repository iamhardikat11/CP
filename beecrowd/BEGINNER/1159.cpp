#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X;
    cin >> X;
    while(X!=0)
    {
        X = (X%2==0)?X:X+1;
        printf("%d\n",5*(X+4));
        cin >> X;
    }
    return 0;
}
