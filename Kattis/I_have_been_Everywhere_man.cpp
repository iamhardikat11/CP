#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int N;
        cin>>N;
        string arr[N];
        for(int i=0;i<N;i++)
         getline(cin, arr[i]);
        bool visited[N];
        int count = 0;
        for(int i=0;i<N;i++)
        {
            for(int j=i;j<N;j++)
            {
                visited[i]=true;
                if(arr[i]==arr[j])
                 visited[j]=true;
            }
            if(visited[i]!=true)
                {
                    count++;
                }
        }
        cout<<count<<endl;
    }
    
}