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
    for(int i=1;i<=10000;i++)
    {
        if(i%N==2)
         printf("%d\n",i);
    }
    return 0;
}
