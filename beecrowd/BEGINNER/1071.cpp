#include <iostream>
#include <cmath>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int x,y;
    cin >> x >> y;
    int X = min(x,y);
    int Y = max(x,y);
    int sum = 0;
    for(int i=(((X+1)%2==0)?X+2:X+1);i<Y;i+=2)
    {
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
