#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	int A,B;
	cin >> A >> B;
	cout << ((A>=B)?A:B)<<" "<< A+B << endl;
	}
	return 0;
}
