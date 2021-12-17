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
    int N;
    cin >> N;
    while(N<=0)
     cin >> N;
    printf("%d\n",((2*A+N-1)*N)/2);
}
