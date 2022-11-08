#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int,int> target;
    vector<string> v(N);
    for(int i=0;i<N;i++)
    {
        cin >> v[i];
        target[v[i][0]]++;
    }
    int cnt1 = 0;
    for(int i=0;i<N;i++)
    {
        map<int,int> curr;
        for(int j=0;j<v[i].size();j++)
            curr[v[i][j]]++;
        bool flag = true;
        for(auto it : target)
            curr[it.first] = curr[it.first]-target[it.first];
        int cnt = 0;
        for(auto it : curr) 
        {
            if(it.second>=0)
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }   
        if(flag) cnt1++;
    }
    cout << cnt1 << endl;
    return 0;
}