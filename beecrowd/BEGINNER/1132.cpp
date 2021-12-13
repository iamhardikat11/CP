#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int x,y;
    cin >> x >> y;
    int sum = 0;
    for(int i=min(x,y);i<=max(x,y);i++)
    {
      if(i%13!=0)
       sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
