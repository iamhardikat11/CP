#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin >> N;
	int arr[N];
	int c_e = 0;
	for(int i=0;i<N;i++)
	{
	  cin >> arr[i];
	  if(arr[i]%2==0)
	   c_e++;
	}
	if(c_e>N/2)
	 cout << "READY FOR BATTLE"<<endl;
	else
	 cout << "NOT READY"<<endl;
	return 0;
}
