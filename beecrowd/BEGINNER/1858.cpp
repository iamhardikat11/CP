#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int t;
    cin >> t;
    int min = INT_MAX;
    int pos = 1;
    int i = 1;
    while(t-->0)
    {
        int a;
        cin >> a;
        if(a<min)
        {
             min = a;
             pos = i;
        }
        i++;
    }
    printf("%d\n",pos);
}
