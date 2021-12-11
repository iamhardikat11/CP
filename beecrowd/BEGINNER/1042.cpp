#include <iostream>
#include <cmath>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a[3];
    for(int & i : a) cin >> i;
    int b[3];
    printf("%d\n",(min(min(a[0],a[1]),min(a[0],a[2]))));
    printf("%d\n",((a[0]>a[1] && a[0]>a[2])?max(a[1],a[2]):((a[0]>a[1]||a[0]>a[2])?a[0]:min(a[1],a[2]))));
    printf("%d\n",(max(max(a[0],a[1]),max(a[0],a[2]))));
    printf("\n");
    for(int i : a)
        printf("%d\n",i);
    return 0;
}
