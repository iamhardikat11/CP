#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X,Y;
    cin >> X >> Y;
    for(int i = 1;i<=Y;i++)
    {
        for(int j = 1;j<=X;j++)
        {
            if(j!=X) 
            {
                printf("%d ",i);
                i++;
            } 
            else
             printf("%d",i);
            
        }
        printf("\n");
    }
}
