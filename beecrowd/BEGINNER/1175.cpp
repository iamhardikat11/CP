#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    for(int i = 0; i < 20;i++) 
       cin >> arr[i];
    for(int i = 19; i>=0;i--) 
       cout << "N[" << (19-i) << "] = " << arr[i] << endl;
    return 0;
}
