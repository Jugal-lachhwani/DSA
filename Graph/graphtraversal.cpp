#include<iostream>
#include<queue>
using namespace std;
int graph[6][6] = {{0,1,1,1,0,0},{1,0,0,1,0,0},{1,0,0,1,0,0},{1,1,1,0,1,0},{0,0,0,1,0,1},{0,0,0,0,1,0}};
int visited[6] = {0,0,0,0,0,0};
void DFS(int x)
{
    visited[x] = 1;
    cout << x << " ";
    for(int j = 0; j < 6;j++)
    {
        if(visited[j]==0 && graph[x][j] == 1)
        {
            DFS(j);
        }
    }
}
int v[] = {0,0,0,0,0,0};
void BSF(int x)
{
    queue<int> q;
    q.push(x);
    v[x] = 1;
    cout<<x<<" ";
    while(!q.empty())
    {
        int c = q.front();
        q.pop();
        for(int j=0;j<6;j++)
        {
            if(graph[c][j] == 1 && v[j] == 0)
            {
                q.push(j);
                v[j] = 1;
                cout<<j<<" ";
            }
        }
    }
}
int main()
{
    DFS(0);
    cout<<endl;
    BSF(0);
}
