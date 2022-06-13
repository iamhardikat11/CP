#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H, W;
    cin >> H >> W;
    pair<int, int> C, D;
    cin >> C.first >> C.second;
    cin >> D.first >> D.second;
    vector<vector<char>> V(H, vector<char>(W));
    for (int i = 0; i < H; i++)
    {
        string a;
        cin >> a;
        for (int j = 0; j < W; j++)
        {
            V[i][j] = a[j];
        }
    }
    
    return 0;
}