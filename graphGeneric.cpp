#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    unordered_map<T, list<T>> adj;
    void DFSHelper(T node, map<T,bool> &visited){
        visited[node] = true;
        cout<<node<<" - ";
        for(auto var : adj[node])

        {
            if(!visited[var]){
                DFSHelper(var,visited);
            }
        }
    }
    void topSortHelperDfs(T node, map<T,bool> &visited, list<T> &ordering){
        visited[node] = true;
        for(auto var : adj[node])
        {
            if(!visited[var]){
                topSortHelperDfs(var,visited,ordering);
            }
        }
        ordering.push_front(node);

    } 
    bool cycleHelper(T node, unordered_map<T,bool> &visited, unordered_map<T,bool> &path_stack){
        //Visiting the node
        visited[node] = true;
        path_stack[node] = true;

        for(auto var: adj[node]){
            if(path_stack[var]){
                return true;
            }
            if(!visited[var]){
                bool cycleMila = cycleHelper(var,visited,path_stack);
                if(cycleMila){
                    return true;
                }
            }
        }

        //Leaving the Stack
        path_stack[node] = false;
        return false;
    }
public:
    void addEdge(T a, T b, bool bidir = true){
        adj[a].push_back(b);
        if(bidir){
            adj[b].push_back(a);
        }
    }
    void printAdjencyList(){
        for(auto i: adj){
            cout<<i.first<<"-> ";
            for(auto var : i.second)
            {
                cout<<var<<", ";
            }
            cout<<endl;
        }
    }
    void BFSTraversal(T source){
        map<T,bool> visited;
        visited[source] = true;
        queue<T> traversal;
        traversal.push(source);
        while (!traversal.empty())
        {
            for(auto var : adj[traversal.front()])
            {
                if(!visited[var]){
                    traversal.push(var);
                    visited[var] = true;
                }
            }
            cout<<traversal.front()<<", ";
            traversal.pop();   
        }
        cout<<endl;

    }
    T BFSTraversalShortestPath(T source, T dest){
        map<T,int> visited;
        map<T,T> parent;
        for(auto i: adj){
            visited[i.first] = INT_MAX;
        }
        visited[source] = 0;
        parent[source] = source;
        queue<T> traversal;
        traversal.push(source);
        while (!traversal.empty())
        {
            for(auto var : adj[traversal.front()])
            {
                if(visited[var]==INT_MAX){
                    traversal.push(var);
                    parent[var] = traversal.front();
                    visited[var] = visited[parent[var]] + 1;
                }
            }
            traversal.pop(); 
        }

        T temp = dest;

        while (temp!=source)
        {
            cout<<temp<<" - ";
            temp = parent[temp];
        }
        cout<<source<<endl;

        return visited[dest];

    }
    void DFSTraversal(T source){
        map<T,bool> visited;
        DFSHelper(source,visited);
        cout<<endl;
        for(auto i: adj){
            if(!visited[i.first]){
                DFSHelper(i.first,visited);
            }
        }
    }
    void topSortDfs(){
        map<T,bool> visited;
        list<T> ordering;
        for(auto i: adj){
            if(!visited[i.first]){
                topSortHelperDfs(i.first,visited,ordering);
            }
        }

        for(auto var : ordering)
        {
            cout<<var<<" -> ";
        }
    }
    void BFSTopologicalSort(){
        map<T,int> inDegree;
        for(auto var : adj){
            inDegree[var.first] = 0;
            for(auto i: adj[var.first]){
                inDegree[i] = 0;
            } 
        }
        for(auto var : adj){
            for(auto i: adj[var.first]){
                inDegree[i]++;
            } 
        }
        queue<T> storage;
        for(auto var : adj){
            if(inDegree[var.first]==0){
                storage.push(var.first);
            }
        }

        while(!storage.empty()){
            T node = storage.front();
            if(inDegree[node]==0){
                for(auto i: adj[node]){
                    inDegree[i]--;
                    if(inDegree[i]==0){
                        storage.push(i);
                    } 
                }
                cout<<node<<" - ";
                storage.pop(); 
            }
        }
    }
    bool isTree(){
        queue<T> q;
        unordered_map<T,bool> visited;
        unordered_map<T,T> parent;
        auto src = adj.begin();
        for(auto node : adj){
            T x = node.first;
            for(auto var : adj[x]){
                visited[var] = false;
            }
        }
        T srcNode = (*src).first;
        q.push(srcNode);
        visited[srcNode] = true;
        while(!q.empty()){
            T node = q.front();
            q.pop();
            for(auto var : adj[node]){
                if(!visited[var]){
                    visited[var] = true;
                    parent[var] = node;
                    q.push(var);
                }else{
                    if(parent[node]!=var){
                        return false;
                    }
                }
            }
        }
        return true;
    }
    bool isCyclePresent(){
        unordered_map<T,bool> visited;
        unordered_map<T,bool> path_stack;
        auto src = adj.begin();
        T srcNode = (*src).first;
        return cycleHelper(srcNode, visited, path_stack);
    }

};

int main() {
/*
    Graph<string> g;

    g.addEdge("Putin","Trump",false);
    g.addEdge("Putin","Modi",false);
    g.addEdge("Putin","Pope",false);
    g.addEdge("Modi","Trump");
    g.addEdge("Modi","Yogi");
    g.addEdge("Yogi","Prabhu",false);
    g.addEdge("Prabhu","Modi",false);
    g.addEdge("Charles","Meghan"); 

    //g.printAdjencyList();

    //g.BFSTraversal("Putin");
    //g.BFSTraversalShortestPath("Putin");
    //g.DFSTraversal("Putin");

    //UnDirected Graph;
*/

    Graph<int> g;
    g.addEdge(1,2,false);
    g.addEdge(1,3,false);
    g.addEdge(2,4,false);
    g.addEdge(3,4,false);
    g.addEdge(4,5,false);
    g.addEdge(5,3,false);
    g.printAdjencyList();
    cout<<g.isCyclePresent()<<endl;


    //Snake and Ladder Problem;
    //Constructing the board;
/*
    int board[50] = {0};
    board[2] = 13;
    board[5] = 7;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = -10;
    board[32] = -2;
    board[34] = -22;

    Graph<int> boardGraph;
    for(int i = 0; i <=36; i++){
        for(int dice = 1; dice<=6; dice++){
            int j = i + dice + board[i+dice];
            if(j<=37){
                boardGraph.addEdge(i,j,false);
            }
        }
    }

    boardGraph.BFSTraversalShortestPath(0,36);
*/

    return 0;
}