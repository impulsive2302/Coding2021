#include<iostream>
#include<list>
#include<map>

using namespace std;

class Graph
{
public:
    void addEdge( int u, int v )
    {
        adj[u].push_back( v );
    }
    void DFS( int start )
    {
        cout<< start<<" ";
        visited[ start ] = true;
        for( auto itr = adj[start].begin(); itr != adj[start].end(); itr++ )
        {
            if( !visited[ *itr ] )
            DFS( *itr );
        }
    }
private:
    map< int, list<int> > adj;
    map<int, bool> visited;
};
int main()
{
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 9);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(9, 3);

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(0);

    return 0;
}
