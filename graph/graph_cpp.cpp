#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjs;
    void addEdge(int u, int v, bool isDirected)
    {
        adjs[u].push_back(v);
        if (!isDirected)
        {
            adjs[v].push_back(u);
        }
    }
    void printGraph()
    {
        for (auto i : adjs)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

void getAdjsList(unordered_map<int, set<int>> &adjlist, vector<pair<int, int>> &edges)
{
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adjlist[u].insert(v);
        adjlist[v].insert(u);
    }
};

void bfs(unordered_map<int, set<int>> &adjs, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);
        for (auto i : adjs[frontNode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

vector<int> BFSGraph(int nodes, vector<pair<int, int>> edges)
{
    vector<int> ans;
    unordered_map<int, set<int>> adjs;
    unordered_map<int, bool> visited;
    getAdjsList(adjs, edges);
    for (int i = 0; i < nodes; i++)
    {
        bfs(adjs, visited, ans, i);
    }
    return ans;
};

int main()
{
    int m, n;
    cin >> m;
    cin >> n;
    Graph g;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }
    g.printGraph();
    return 0;
}