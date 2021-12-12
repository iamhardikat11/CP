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
    int a[3] = {0,0,0};
    int amount = 0;
    char ch;
    while(N--)
    {
        cin >> amount;
        cin >> ch;
        switch(ch)
        {
            case 'C':  a[0]+=amount;
                break;
            case 'R':  a[1]+=amount;
                break;
            case 'S':  a[2]+=amount;
                break;
        }
    }
    printf("Total: %d cobaias\n",(a[0]+a[1]+a[2]));
    printf("Total de coelhos: %d\n",a[0]);
    printf("Total de ratos: %d\n",a[1]);
    printf("Total de sapos: %d\n",a[2]);
    printf("Percentual de coelhos: %.2f %c\n",(100.00*(float)a[0]/(a[0]+a[1]+a[2])),'%');
    printf("Percentual de ratos: %.2f %c\n",(100.00*(float)a[1]/(a[0]+a[1]+a[2])),'%');
    printf("Percentual de sapos: %.2f %c\n",(100.00*(float)a[2]/(a[0]+a[1]+a[2])),'%');

    return 0;
}
