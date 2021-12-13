#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int x,y;
    cin >> x >> y;
    while(x!=y)
    {
        if(x>y)
            printf("Decrescente\n");
        if(x<y)
            printf("Crescente\n");
        cin >> x >> y;
    }
    return 0;
}
