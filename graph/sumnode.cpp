#include<bits/stdc++.h>

using namespace std;

class Graph{

    int V;
    list<int> *adjList;
    
    public:
    Graph(int v){
        V = v+1;
        adjList = new list<int>[V];
    }

    void addEdge(int u,int v,bool bidir=true){
        adjList[u].push_back(v);
        if(bidir){
            adjList[v].push_back(u);
         }
    }

    void printAdjList(){
        for(int i=0;i<V;i++){
            cout<<i<<"->";
            for(int node:adjList[i]){
                cout<<node<<",";
            }
            cout<<endl;
        }
    }
};

int main(){

    int n,k;
    cin>>n>>k;
    Graph g(n);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v);
    }
    g.printAdjList();
    return 0;
}