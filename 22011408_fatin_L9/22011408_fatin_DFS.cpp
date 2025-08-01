#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 5;
string nodeNames = "abcde"; // mapping index to letter

void dfs(int graph[SIZE][SIZE], vector<bool>& visited, int current) {
    visited[current] = true;
    cout << nodeNames[current] << " ";

    for (int i = SIZE - 1; i >= 0; --i) {
        if (graph[current][i] == 1 && !visited[i]) {
            dfs(graph, visited, i);
        }
    }
}

int main() {
    int graph[SIZE][SIZE] = {
        {0, 1, 1, 1, 0},  // a
        {1, 0, 0, 1, 1},  // b
        {1, 0, 0, 1, 0},  // c
        {1, 1, 1, 0, 1},  // d
        {0, 1, 0, 1, 0}   // e
    };

    vector<bool> visited(SIZE, false);
    cout << "DFS traversal starting from node 'a': ";
    dfs(graph, visited, 0); // start from 'a' (index 0)
    cout << endl;

    return 0;
}
