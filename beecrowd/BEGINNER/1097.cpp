#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int j = 7;
    for(int i=1;i<=9;i+=2)
    {
      for(int k=0;k<=2;k++)
      {
          printf("I=%d J=%d\n",i,j-k);
      }
      j+=2;
    }
    return 0;
}
