#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a,b,c;
    cin >> a >> b >> c;
    printf("%d eh o maior\n",(a>b && a>c ?a:(b>c?b:c)));
    return 0;
}
