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
    int b[3];
    for(int i=0;i<3;i++)
        cin >> a[i];
    for(int j=0;j<3;j++)
        cin >> b[j];
    double quan = (double)a[0]/b[0];
    int index = 0;
    for(int i=1;i<=2;i++)
    {
        if(((double)a[i]/b[i])<quan)
        {
            quan = ((double)a[i]/b[i]);
            index = i;
        }
    }
    printf("%.6lf %.6lf %.6lf\n",(double)a[0]-b[0]*quan,(double)a[1]-b[1]*quan,(double)a[2]-b[2]*quan);
    return 0;
}
