//Link:-https://open.kattis.com/problems/bijele
#include <iostream>
using namespace std;
int main()
{
    int arr[6];
    for(int i = 0; i < 6; i++) cin>>arr[i];
    cout<<1-arr[0]<<" "<<1-arr[1]<<" "<<2-arr[2]<<" "<<2-arr[3]<<" "<<2-arr[4]<<" "<<8-arr[5]<<endl;
    return 0;
}