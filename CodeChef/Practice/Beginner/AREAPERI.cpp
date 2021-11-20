#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int L,B;
	cin >> L >> B;
	if(L*B>2*(L+B))
	 cout << "Area" << endl << " " << L*B;
	else if(L*B<2*(L+B))
	 cout << "Peri" << endl << " " << 2*(L+B);
	else
	 cout << "Eq" << endl << " " << 2*(L+B); 
	return 0;
}
