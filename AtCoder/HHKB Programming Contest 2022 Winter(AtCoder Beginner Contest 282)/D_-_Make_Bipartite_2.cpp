#include <bits/stdc++.h>
using namespace std;
set<int> sets[2];
bool bipartite(vector<vector<int> >& edges, int V, int i, vector<bool>& visited)
{
	if (V == 0) 
		return true;
	vector<int> pending;
	sets[0].insert(i);
	pending.push_back(i);
	while (pending.size() > 0) {
		int current = pending.back();
		visited[current] = true;
		pending.pop_back();
		int currentSet = sets[0].count(current) > 0 ? 0 : 1;
		for (int i = 0; i < edges[current].size(); i++) {
			int neighbor = edges[current][i];
			if (sets[0].count(neighbor) == 0 && sets[1].count(neighbor) == 0) {
				sets[1 - currentSet].insert(neighbor);
				pending.push_back(neighbor);
			}
			else if (sets[currentSet].count(neighbor)> 0)
				return false;
		}
	}
	return true;
}

bool possibleBipartition(int V, vector<vector<int>>& G)
{
	vector<vector<int>> edges(V + 1);
	for (auto v : G) {
		edges[v[0]].push_back(v[1]);
		edges[v[1]].push_back(v[0]);
	}
	vector<bool> visited(V + 1, false);
	bool res = true;
	for (int i = 1; i <= V; i++) 
		if (!visited[i]) 
			res = res and bipartite(edges, V, i, visited);
	return res;
}
int main()
{
	int V,E;
    cin >> V >> E;
	vector<vector<int>> G;
    for(int i= 0;i< E; i++)
    {
        int x,y;
        cin >> x >> y;
        G.push_back({x,y});
    }
	if (possibleBipartition(V, G)) {
        int k2 = 0;
        for(auto it: sets[0])
        {
            auto x = sets[1].upper_bound(it);
            k2 += distance(sets[1].begin(), x);
        }
        for(auto it: sets[1])
        {
            auto y = sets[0].upper_bound(it);
            k2 += distance(sets[0].begin(), y);
        }
        cout << k2-E << endl;
	}
	else
		cout << 0 << endl;
	return 0;
}
