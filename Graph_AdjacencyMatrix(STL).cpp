#include<iostream>
#include<list>
using namespace std;

class Graph
{
    int V;
    list<int>*adj;
public:
    Graph(int v)
    {
        V=v;
        adj=new list<int>[v];
    }

    void addedge(int v,int w)
    {
        adj[v].push_back(w);
    }

    void bfs(int s)
    {
        bool *visited=new bool[V];
        for(int i=0;i<V;i++)
        {
            visited[i]=false;
        }

        visited[s]=true;

        list<int>queue;
        queue.push_back(s);

        list<int>::iterator it;

        while(!queue.empty())
        {
            s=queue.front();
            queue.pop_front();
            cout<<" "<<s;
            for(it=adj[s].begin(); it!=adj[s].end(); it++)
            {
                if(!visited[*it])
                {
                    visited[*it]=true;
                    queue.push_back(*it);
                }

            }
        }
    }
};

int main()
{
    Graph g(4);
    g.addedge(0,1);
    g.addedge(0,3);
    g.addedge(1,2);
    g.addedge(2,3);
    g.bfs(0);
}

