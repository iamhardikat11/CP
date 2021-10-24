//Link:-https://www.codeabbey.com/index/task_view/fahrenheit-celsius
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n=(5*(n-32)/9);
        cout<<n<<" ";
    }
    return 0;
}
