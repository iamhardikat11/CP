#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int count = 0;
    cin >> count;
    int a = 0;
    int b = 1;
    printf("%d ",a);
    if(count>1)
    {
       printf("%d ",b);
       count -=2;
       while(count)
       {
           int c = a+b;
           a = b;
           b = c;
           c = a+b;
           if(count==1)
            printf("%d",b);
           else
            printf("%d ",b);
           count -= 1;
       }
    }
    printf("\n");
    return 0;
}
