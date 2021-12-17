#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int t;
    cin >> t;
    while (t--) {
    int x,y;
    cin >> x >> y;
    x = (x%2==0?x+1:x);
    printf("%d\n",(y+x-1)*y);
}
}
