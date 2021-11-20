#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int quantity,price;
	     cin >> quantity >> price;
	     if(quantity>1000)
	     {
	          printf("%.6lf\n", 0.90*((double)quantity*(double)price));
	     }
	     else
	     {
	          printf("%.6lf\n", (double)(quantity*price));
	     }
	}
	return 0;
}
