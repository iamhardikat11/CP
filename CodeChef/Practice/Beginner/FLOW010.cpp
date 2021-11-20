#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     char ch;
	     cin >> ch;
	     if((int)ch>=97)
	     {
	          ch = ch-32;
	     }
	     switch(ch)
	     {
	          case 'B' : cout << "BattleShip" <<endl;
	                     break;
	          case 'C' : cout << "Cruiser" <<endl;
	                     break;
	          case 'D' : cout << "Destroyer" <<endl;
	                     break;
	          case 'F' : cout << "Frigate" <<endl;
	                     break;
	          
	     }
	}
	return 0;
}
