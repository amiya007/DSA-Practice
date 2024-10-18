#include <bits/stdc++.h>
using namespace std;

void getadjList(vector<vector<int>> &edges, unordered_map<int, set<int>> &adjlist)
{
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adjlist[u].insert(v);
        adjlist[v].insert(u);
    }
}

void printGraph(unordered_map<int, set<int>> &adjs)
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

bool cyclicGraphBFS(unordered_map<int, set<int>> &adjlist, unordered_map<int, bool> &visited, int node)
{
    unordered_map<int, int> parents;
    queue<int> q;
    parents[node] = -1;
    visited[node] = 1;
    q.push(node);
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (auto i : adjlist[front])
        {
            if (visited[i] && parents[i] != front)
            {
                return true;
            }
            else if (!visited[i])
            {
                parents[i] = front;
                visited[i] = 1;
                q.push(i);
            }
        }
    }
    return false;
}

bool isCyclicGraph(vector<vector<int>> &edges, int n)
{
    unordered_map<int, set<int>> adjlist;
    unordered_map<int, bool> visited;
    getadjList(edges, adjlist);
    printGraph(adjlist);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bool ans = cyclicGraphBFS(adjlist, visited, i);
            if (ans)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> edges = {{2}, {1, 3}, {2}, {5}, {4, 6, 7}, {5, 8}, {5, 8}, {6, 7, 9}, {8}};
    cout << isCyclicGraph(edges, 2);
    return 0;
}