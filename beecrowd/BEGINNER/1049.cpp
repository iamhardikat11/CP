#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    string s;
    cin >> s;
    if(s=="vertebrado")
    {
      cin >> s;
      if(s=="ave")
      {
         cin >> s;
         if(s=="carnivoro")
             printf("aguia\n");
         if(s=="onivoro")
             printf("pomba\n");
      }
      if(s=="mamifero")
      {
         cin >> s;
         if(s=="onivoro")
             printf("homem\n");
         if(s=="herbivoro")
             printf("vaca\n");
      }
    }
    else
    {
       cin >> s;
       if(s=="inseto")
       {
          cin >> s;
          if(s=="hematofago")
              printf("pulga\n");
          if(s=="herbivoro")
              printf("lagarta\n");
       }
       if(s=="anelideo")
       {
          cin >> s;
          if(s=="hematofago")
              printf("sanguessuga\n");
          if(s=="onivoro")
              printf("minhoca\n");
       }
    }
    return 0;
}
