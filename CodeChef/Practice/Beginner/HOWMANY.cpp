#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin >> N;
	if(N%10 == N)
	 cout << "1" <<endl;
	else if(N%100 == N)
	 cout << "2" <<endl;
	else if(N%1000 == N)
	 cout << "3" <<endl;
	else
	 cout << "More than 3 digits"<<endl;
	return 0;
}
