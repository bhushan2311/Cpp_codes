#include<iostream>
using namespace std;

struct Graph
{
    int V;
    int E;
    int **Adj;
};

struct Graph * creategraph()
{
    int u,v;
    struct Graph *G;   //=(struct Graph*)malloc(sizeof(struct Graph));
    G=new Graph();
    cout<<"Enter no. of Vertices and Edges"<<endl;
    cin>>G->V>>G->E;

    //G->Adj=(int**)malloc(sizeof(int)*(G->V * G->V));
    G->Adj=new int*[G->V];
    for(int i=0;i<G->V;i++)
    {
        G->Adj[i]=new int[G->V];
    }
    for(int u=0;u<G->V;u++)
        for(int v=0;v<G->V;v++)
        G->Adj[u][v]=0;

    cout<<"\nEnter pair of node no. to which edge is connected"<<endl;
    for(int i=0;i<G->E;i++)
    {
        cin>>u;cin>>v;
        G->Adj[u][v]=1;
        G->Adj[v][u]=1;
    }

    cout<<"Adjacency Matrix is"<<endl;
    for(int u=0;u<G->V;u++)
    {
        for(int v=0;v<G->V;v++)
        {
            cout<<G->Adj[u][v]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

int main()
{
    creategraph();
    return 0;
}
