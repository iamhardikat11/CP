#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int A;
    cin >> A;
    while(A!=0)
    {
        for(int i = 1; i<=A; i++)
         printf("%d ", i);
        printf("\n");
        cin >> A;
    }
    return 0;
}
