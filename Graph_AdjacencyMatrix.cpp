#include<iostream>
using namespace std;

struct graph
{
    int V,E;
    int **adj;
};

struct graph* create_graph()
{
    int u,v;                       //u for rows and v for columns
    struct graph* g;
    g=new graph();
    cout<<"Enter no. Vertices(nodes) & Edges:"<<endl;
    cin>>g->V>>g->E;

    //dynamically memory allocated to 2d array using pointers
    g->adj=new int *[g->V];
    for(int i=0;i<g->V;i++)
    {
        g->adj[i]=new int[g->V];
    }

    //assigning zero to each block
    for(int u=0;u<g->V;u++)
    {
        for(int v=0; v<g->V; v++)
        {
            g->adj[u][v]=0;
        }
    }

    //assigning 1 to [u][v] which denotes, there in edge between two nodes
    cout<<"Enter pair of node no. to which edge is connected"<<endl;
    for(int i=0;i<g->E;i++)
    {
        cin>>u>>v;
        g->adj[u][v]=1;
        g->adj[v][u]=1;
    }

    //printing 2d array
    cout<<"\nAdjacency Matrix is:"<<endl;
    for(int u=0;u<g->V;u++)
    {
        for(int v=0;v<g->V;v++)
        {
            cout<<g->adj[u][v]<<"  ";
        }
        cout<<endl;
    }

    return g;
};

int main()
{
    struct graph* r=create_graph();
    cout<<r;
    return 0;
}
