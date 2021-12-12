#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N;
    cin >> N;
    for(int i=2;i<=N;i+=2)
    {
        printf("%d^2 = %d\n",(i),i*i);
    }
    return 0;
}
