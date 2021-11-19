#include <iostream>
using namespace std;
string solve(int X1, int X2, int X3, int V1, int V2)
{
     if(((float)abs(X3-X1)/(float)V1)<((float)abs(X3-X2)/(float)V2))
      return "Chef";
     else if(((float)abs(X3-X1)/(float)V1)>((float)abs(X3-X2)/(float)V2))
      return "Kefa";
     else
      return "Draw";
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int X1,X2,X3,V1,V2;
	     cin >> X1 >> X2 >> X3 >> V1 >> V2;
	     cout << solve(X1, X2, X3, V1, V2)<<endl;
	}
	return 0;
}
