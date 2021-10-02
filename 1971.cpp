#include <iostream>
using namespace std;
class Solution {
 public:
  bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
    // Adjacency list
    list<int>* adjList;
    adjList = new list<int>[n];

    unsigned short edgeLength = edges.size();

    if (edgeLength == 0)  // Empty graph
      return true;
    if (edgeLength == 1) {
      if (start == edges[0][0] && end == edges[0][1])
        return true;
      else if (start == edges[0][1] && end == edges[0][0])
        return true;
      else
        return false;
    }

    // Convert the edge list to the adjacency list
    for (auto edge : edges) {
      adjList[edge[0]].push_back(edge[1]);
      adjList[edge[1]].push_back(edge[0]);
    }

    // Declaring essential variables
    stack<int> adjNodes;
    vector<bool> visitedNodes;
    visitedNodes.resize(n, false);

    // Start the DFS process from here on
    adjNodes.push(start);  // Push the start node to the stack
    // Mark the start node as visited
    visitedNodes[start] = true;
    // The boolean flag for the return statement
    bool flag = false;

    // DFS Iterative approach
    while (!adjNodes.empty()) {
      // Mark at the last inserted element
      int at = adjNodes.top();
      // Check if we reach at the ending node
      if (at == end) {
        // Exit out the loop -- found!
        flag = true;
        break;
      }
      adjNodes.pop();

      // Explore the neighbors
      for (auto adjNode : adjList[at]) {
        if (!visitedNodes[adjNode]) {
          visitedNodes[adjNode] = true;
          adjNodes.push(adjNode);
        }
      }
    }

    return flag;
    // }
  }
};
