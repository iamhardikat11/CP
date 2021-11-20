#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	     int N;
	     cin>>N;
	     if(N==2010 || N==2015 || N==2016 || N==2017 || N==2019)
	      std::cout << "HOSTED" << std::endl;
	     else
	      std::cout << "NOT HOSTED" << std::endl;
	}
	return 0;
}
