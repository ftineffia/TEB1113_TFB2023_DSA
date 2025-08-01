#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 5;
string nodeNames = "abcde"; // index to letter

void dfs(const vector<vector<int>>& graph, vector<bool>& visited, int current) {
    visited[current] = true;
    cout << nodeNames[current] << " ";

    for (int neighbor : graph[current]) {
        if (!visited[neighbor]) {
            dfs(graph, visited, neighbor);
        }
    }
}

int main() {
    vector<vector<int>> graph = {
        {1, 4, 3, 2}, // a: b, e, d, c
        {4, 3},       // b: e, d
        {3},          // c: d
        {4},          // d: e
        {}            // e: none
    };

    vector<bool> visited(SIZE, false);
    cout << "DFS traversal starting from node 'a': ";
    dfs(graph, visited, 0); // start from 'a'
    cout << endl;

    return 0;
}
