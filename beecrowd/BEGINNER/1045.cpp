#include <iostream>
#include <cmath>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3);
    double a = arr[2],b = arr[1],c = arr[0];
    if(a>=(b+c))
        printf("NAO FORMA TRIANGULO\n");
    else {
        if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
            printf("TRIANGULO RETANGULO\n");
        if (pow(a, 2) > pow(b, 2) + pow(c, 2))
            printf("TRIANGULO OBTUSANGULO\n");
        if (pow(a, 2) < pow(b, 2) + pow(c, 2))
            printf("TRIANGULO ACUTANGULO\n");
        if (a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        if ((a == b && a != c) || (b == c && a != c) || (c == a && a != b))
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
