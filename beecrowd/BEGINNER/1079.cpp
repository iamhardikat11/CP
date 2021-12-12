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
        float a,b,c;
        cin >> a >> b >> c;
        printf("%.1f\n",(0.2*a+0.3*b+0.5*c));
    }
    return 0;
}
