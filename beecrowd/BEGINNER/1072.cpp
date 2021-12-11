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
    int c = 0,o = 0;
    while(N--)
    {
        int a;
        cin >> a;
        if(a>=10 && a<=20)
            c++;
        else
            o++;
    }
    printf("%d in\n",c);
    printf("%d out\n",o);
    return 0;
}
