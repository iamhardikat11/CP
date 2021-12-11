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
    int count = 1;
    for(int i=(X%2==0)?X+1:X;count<=6;i+=2,count++)
    {
        printf("%d\n",i);
    }
    return 0;
}
