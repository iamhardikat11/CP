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
    while(N--)
    {
        int x,y;
        cin >> x >> y;
        if(y==0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n",(double)x/y);
    }
    return 0;
}
