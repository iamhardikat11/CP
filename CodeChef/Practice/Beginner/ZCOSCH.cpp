#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int R;
	cin >> R;
	if(R>=1 && R<=50)
	 cout << "100" <<endl;
	else if (R>=51 && R<=100)
	 cout << "50" <<endl;
     else
      cout << "0" <<endl;
	return 0;
}
