#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void detectCycles(vector<vector<int>>& graph, vector<bool>& visited, vector<bool>& path, int node, unordered_set<int>& cycleNodes) {
    visited[node] = true;
    path[node] = true;

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            detectCycles(graph, visited, path, neighbor, cycleNodes);
        } else if (path[neighbor]) {
            cycleNodes.insert(neighbor);
        }
    }

    path[node] = false;
}

vector<unordered_set<int>> findCycles(vector<vector<int>>& graph) {
    int numNodes = graph.size();
    vector<bool> visited(numNodes, false);
    vector<bool> path(numNodes, false);
    vector<unordered_set<int>> cycles;

    for (int node = 0; node < numNodes; ++node) {
        if (!visited[node]) {
            unordered_set<int> cycleNodes;
            detectCycles(graph, visited, path, node, cycleNodes);
            if (!cycleNodes.empty()) {
                cycles.push_back(cycleNodes);
            }
        }
    }

    return cycles;
}

int main() {
    // Example usage
    vector<vector<int>> graph = {
        {1, 2},
        {2, 3},
        {3, 1},
        {4, 5},
        {5, 6},
        {6, 4}
    };

    vector<unordered_set<int>> cycles = findCycles(graph);

    if (!cycles.empty()) {
        cout << "The graph has multiple cycles:" << endl;
        for (const auto& cycle : cycles) {
            cout << "Cycle: ";
            for (int node : cycle) {
                cout << node << " ";
            }
            cout << endl;
        }
    } else {
        cout << "The graph does not have multiple cycles." << endl;
    }

    return 0;
}
