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
    while(x!=0 && y!=0)
    {
        if(x>0 && y>0)
            printf("primeiro\n");
        if(x>0 && y<0)
            printf("quarto\n");
        if(x<0 && y<0)
            printf("terceiro\n");
        if(x<0 && y>0)
            printf("segundo\n");
        cin >> x >> y;
    }
    return 0;
}
