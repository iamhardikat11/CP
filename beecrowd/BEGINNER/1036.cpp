#include <iostream>
#include <cmath>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double a,b,c;
    cin >> a >> b >> c;
    if(a!=0 && pow(b,2)<4*a*c) {
        printf("R1 = %.5lf\n", (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a));
        printf("R2 = %.5lf\n", (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a));
    }
    else
        cout << "Impossivel calcular\n";
}
