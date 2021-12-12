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
        int a;
        cin >> a;
        if(a==0)
            printf("NULL\n");
        else if(a>0)
        {
            if(a%2==0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        else
        {
           if(a%2==0)
               printf("EVEN NEGATIVE\n");
           else
               printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}
