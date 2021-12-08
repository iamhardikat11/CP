#include <iostream>
 
using namespace std;
typedef struct
{
    double x,y;
}info;
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    info a,b;
    cin >> a.x >> a.y >> b.x >> b.y;
    printf("%.4lf\n",(sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2))));
    return 0;
}
