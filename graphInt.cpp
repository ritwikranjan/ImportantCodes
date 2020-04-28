#include <bits/stdc++.h>
using namespace std;

class Graph{
    int vertex;
    list<int>* l;
    public:
    Graph(int v){
        vertex = v;
        l = new list<int>[v];
    }

    void addEdge(int a, int b, bool bidir = true){
        l[a].push_back(b);
        if(bidir){
            l[b].push_back(a);
        }
        return;
    }

    void printAdjencyList(){
        for(int i = 0; i < vertex; i++){
            cout<<i<<"-> ";
            for(auto var : l[i])
            {
                cout<<var<<", ";
            }
            cout<<endl;
        }
    }

    
};

int main(){
    Graph g(5);

    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(1,4);
    g.addEdge(2,3);
    g.addEdge(3,4);

    g.printAdjencyList();
}