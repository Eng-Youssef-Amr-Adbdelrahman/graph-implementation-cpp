#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int src, dest;
};

class Graph {
public:
    vector<vector<int>> adjList;

    Graph(vector<Edge> const &edges, int n) {
        adjList.resize(n);

        for (const auto &edge : edges) {
            adjList[edge.src].push_back(edge.dest);
        }
    }
};

void printGraph(Graph const &graph, int n) {
    for (int i = 0; i < n; i++) {
        cout << i << " --> ";
        for (int v : graph.adjList[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<Edge> edges = {
        {0, 2}, {0, 3}, {1, 3}, {1, 4}, {2, 5},
        {3, 5}, {4, 5}, {4, 6}
    };

    int n = 7;

    Graph graph(edges, n);

    printGraph(graph, n);

    return 0;
}
