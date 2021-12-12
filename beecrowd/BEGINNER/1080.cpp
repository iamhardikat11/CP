#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int max;
    int position = 1;
    cin >> max;
    int N = 0;
    for(int i=2;i<=100;i++)
    {
        cin >> N;
        if(N>max)
        {
            max = N;
            position = i;
        }
    }
    cout << max << endl << position <<endl;
    return 0;
}
