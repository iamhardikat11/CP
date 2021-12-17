#include <iostream>
 
using namespace std;
 
int main()
{
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int h1,m1,h2,m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int H = h2-h1; 
    int M = m2-m1;
    if(H==0 && M==0)
     H = 24;
    if(M<0)
    {
       M += 60;
       H --;
    }
    if(H<0)
    {
        H += 24;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    return 0;
}
