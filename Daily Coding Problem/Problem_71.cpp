
/*This problem was asked by Two Sigma.

Using a function rand7() that returns an integer from 1 to 7 (inclusive) with uniform probability, implement a function rand5() that returns an integer from 1 to 5 (inclusive).
*/
#include <bits/stdc++.h>
using namespace std;
void rand5()
{
  cout << rand()%5 << endl;
}
void rand7()
{
  cout << rand()%7 << endl;
}
int main()
{
 rand5();
 rand7();
}
