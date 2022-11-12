#include <bits/stdc++.h>
using namespace std;
struct Edge {
   int source, dest, weight;
};

struct Node {
    int vertex, weight;
};
 
class Graph
{
public:
    vector<vector<Edge>> adjList;
    Graph(vector<Edge> const &edges, int n)
    {
        adjList.resize(n);
        for (Edge const &edge: edges)
            adjList[edge.source].push_back(edge);
    }
};
void printPath(vector<int> const &prev, int i, int source)
{
    if (i < 0) 
        return;
    printPath(prev, prev[i], source);
    cout << i+1 << " ";
}
 
struct comp
{
    bool operator()(const Node &lhs, const Node &rhs) const {
        return lhs.weight > rhs.weight;
    }
};
 
void findShortestPaths(Graph const &graph, int source, int n)
{
    priority_queue<Node, vector<Node>, comp> min_heap;
    min_heap.push({source, 0});
    vector<int> dist(n, INT_MAX);
    dist[source] = 0;
    vector<bool> done(n, false);
    done[source] = true;
    vector<int> prev(n, -1);
    while (!min_heap.empty())
    {
        Node node = min_heap.top();
        min_heap.pop();
        int u = node.vertex;
        for (auto i: graph.adjList[u])
        {
            int v = i.dest;
            int weight = i.weight;
            if (!done[v] && (dist[u] + weight) < dist[v])
            {
                dist[v] = dist[u] + weight;
                prev[v] = u;
                min_heap.push({v, dist[v]});
            }
        }
        done[u] = true;
    }
    {
        if (n-1 != source && dist[n-1] != INT_MAX)
            printPath(prev, n-1, source);
        else
            cout << -1 << endl;
    }
}
 
int main()
{
    int n,m;
    cin >> n >> m;
    vector<Edge> edges;
    map<pair<int,int>, int> mp;
    while(m--)
    {
        int a,b,w;
        cin >> a >> b >> w;
        a--;
        b--;
        if(mp.find({a,b})!=mp.end())
        {
            mp[{a,b}] = min(mp[{a,b}], w);
            mp[{b,a}] = min(mp[{b,a}], w);
        }
        else
        {
            mp[{a,b}] = w;
            mp[{b,a}] = w;
        }
    }
    for(auto it: mp)
    {
        Edge e;
        e.source = it.first.first;
        e.dest = it.first.second;
        e.weight = it.second;
        edges.push_back(e);
    }
    Graph graph(edges, n);
    findShortestPaths(graph, 0, n);
    return 0;
}