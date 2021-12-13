#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i,j;
    cin >> i >> j;
    while(i>0 && j>0)
    {
        int sum = 0;
        for(int a = min(i,j);a<=max(i,j);a++)
        {
            cout << a << " ";
            sum+=a;
        }
        printf("Sum=%d\n",sum);
        cin >> i >> j;
    }
    return 0;
}
