// #include <bits/stdc++.h>
#include <iostream>
#include <list>

using namespace std;
class Graph {
  int V; // No. of vertices
  // A list pointer named as adj
  list<int> *adj;
  // A recursive function used by DFS
  void DFSUtil(int v, bool visited[]);

public:
  Graph(int V); // Constructor
  // function to add an edge to graph
  void addEdge(int v, int w);
  // DFS traversal of the vertices reachable from v
  void DFS(int v);
};

Graph::Graph(int V) {
  this->V = V;
  adj = new list<int>[V]; // use of adjacency list
}

void Graph::addEdge(int v, int w) {
  adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFSUtil(int v, bool visited[]) {
  // Mark the current node as visited and
  // print it
  visited[v] = true;
  cout << v << " ";

  // Recur for all the vertices adjacent
  // to this vertex
  list<int>::iterator i;
  for (i = adj[v].begin(); i != adj[v].end(); ++i)
    if (!visited[*i])
      DFSUtil(*i, visited);
}
// DFS traversal of the vertices reachable from v.
// It uses recursive DFSUtil()
void Graph::DFS(int v) {
  // Mark all the vertices as not visited
  bool *visited = new bool[V];
  for (int i = 0; i < V; i++)
    visited[i] = false;

  // Call the recursive helper function
  // to print DFS traversal
  DFSUtil(v, visited);
}

int main() { // Remember to define variables that you need
  int V, E, StartNode;

  // 1. prompt user to key in number of vertices
  cout << "Enter the number of vertices: ";
  cin >> V;
  // 2. Define a graph object
  Graph g(V);
  // 3. Prompt user to key in number of edges
  cout << "Enter the number of edges: ";
  cin >> E;

  // 4. Use for loop to enable user to add in the edge
  for (int i = 0; i < E; i++) {
    int fromvertex, tovertex;
    // a. Prompt user to key in the “from” vertex
    cout << "Enter the " << i + 1 << " edge: \n";
    cout << "Enter the from vertex: ";
    cin >> fromvertex;
    // b. Prompt user to key in the “to” vertex
    cout << "Enter the to vertex: ";
    cin >> tovertex;
    // c. Add the edge into graph
    g.addEdge(fromvertex, tovertex);
  }
  // 6. Pass the starting vertex to DFS function
  cout << "Enter the starting vertex: ";
  cin >> StartNode;
  cout << "Depth First Travesal starting from vertex" << StartNode << "\n";
  g.DFS(StartNode);

  return 0;
}
