//Link:-https://open.kattis.com/problems/faktor
#include <iostream>
using namespace std;
int main()
{
    int A,I;
    cin >> A >>I;
    if(A==1)
     cout<<A*I<<endl;
    else
     cout<<A*(I-1)+1<<endl;
}