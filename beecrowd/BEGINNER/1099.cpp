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
    while(N--)
    {
        int X,Y;
        cin >> X >> Y;
        int x = min(X,Y);
        int y = max(X,Y);
        int sum =0;
        for(int i=x%2==0?x+1:x+2;i<y;i+=2)
         sum+=i;
        printf("%d\n",sum);
    }
    return 0;
}
