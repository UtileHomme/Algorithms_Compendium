// https://www.geeksforgeeks.org/create-dynamic-2d-array-inside-class-c/

// https://ideone.com/32CZVj

#include <iostream>
#include <string.h>

using namespace std;

class Graph
{
  // no. of vertices in graph
  int V;

  //adj[u][v] would be true if there is an edge from u to v, else false
  bool **adj;

public:

  Graph (int V);

  void addEdge(int u, int v)
  {
    adj[u][v] = true;
  }
  void print();
};

Graph::Graph(int V)
{
  this->V = V;

  // creating a dynamic array of pointers
  adj = new bool *[V];

  for(int i=0;i<V;i++)
  {
    adj[i] = new bool[V];

    //initializing all entries as false to indicate that there are no edges initially
    memset(adj[i],false, V*sizeof(bool));
  }
}

void Graph::print()
{
  for(int u=0;u<V;u++)
  {
    for(int v=0; v<V;v++)
    {
      cout<<adj[u][v]<<" ";
    }
    cout<<endl;
  }
}

int main()
{
  Graph g(4);

  g.addEdge(0,1);
  g.addEdge(0,2);
  g.addEdge(1,2);
  g.addEdge(2,0);
  g.addEdge(2,3);
  g.addEdge(3,3);

  g.print();
  return 0;
}

/*

C++ doesn't allow to create a stack allocated array in a class whose size is not constant

*/
