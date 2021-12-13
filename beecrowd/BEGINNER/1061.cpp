#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    string s;
    cin >> s;
    int d1;
    cin >> d1;
    char ch;
    int a[3];
    cin >> a[0] >> ch >> a[1] >> ch >> a[2];
    cin >> s;
    int d2;
    cin >> d2;
    int b[3];
    cin >> b[0] >> ch >> b[1] >> ch >> b[2];
    int d[] = {d2-d1,b[0]-a[0],b[1]-a[1],b[2]-a[2]};
    if(d[3]<0)
    {
        d[3]+=60;
        d[2]--;
    }
    if(d[2]<0)
    {
        d[2]+=60;
        d[1]--;
    }
    if(d[1]<0)
    {
        d[1]+=24;
        d[0]--;
    }
    printf("%d dia(s)\n",d[0]);
    printf("%d hora(s)\n",d[1]);
    printf("%d minuto(s)\n",d[2]);
    printf("%d segundo(s)\n",d[3]);
    return 0;
}
