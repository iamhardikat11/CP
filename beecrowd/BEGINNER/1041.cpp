#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float x,y;
    cin >> x >> y;
    if(x==0.0 && y==0.0)
     printf("Origem\n");
    else if(x==0.0)
     printf("Eixo Y\n");
    else if(y==0.0)
     printf("Eixo X\n");
    else if(x*y>0.0)
    {
      if(y>0) 
       printf("Q1\n");
      else
       printf("Q3\n");
    }
    else
    {
      if(y>0) 
       printf("Q2\n");
      else
       printf("Q4\n");
    }
    return 0;
}
