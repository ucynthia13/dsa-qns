#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

typedef pair<int, int> pii; // pair of destination node and weight

void Dijkstra(vector<vector<pii> >& graph, int source, vector<int>& distances) {
    int numNodes = graph.size();
    distances.resize(numNodes, numeric_limits<int>::max());
    
    // resizes the distances vector to have numNodes elements 
	//and initializes each element with the maximum possible value for an integer

    priority_queue<pii, vector<pii>, greater<pii> > pq; //stores pairs of integers
    pq.push(make_pair(0, source)); //pushes a pair to pq - source and its distance
    //distance from source to itself is zero
    distances[source] = 0; //sets distance of source in distances to zero

    while (!pq.empty()) {
        int u = pq.top().second; //node with the smallest distance discovered so far (source)
        pq.pop(); // removes the first element - removing also u

//        for (const auto& neighbor : graph[u]) {
//            int v = neighbor.first;
//            int weight = neighbor.second;

		for (size_t i = 0; i < graph[u].size(); ++i) {
    		int v = graph[u][i].first;
    		int weight = graph[u][i].second;

            if (distances[u] + weight < distances[v]) {
                distances[v] = distances[u] + weight;
                pq.push(make_pair(distances[v], v));
            }
        }
    }
}

int main() {
    int numNodes, numEdges;
    cout << "Enter the number of nodes and edges: ";
    cin >> numNodes >> numEdges;

    vector<vector<pii> > graph(numNodes);

    cout << "Enter the edges and weights:\n";
    for (int i = 0; i < numEdges; ++i) {
        int u, v, weight;
        cin >> u >> v >> weight;
        graph[u].push_back(make_pair(v, weight));
        graph[v].push_back(make_pair(u, weight));
    }

    int source;
    cout << "Enter the source node: ";
    cin >> source;

    vector<int> distances;
    Dijkstra(graph, source, distances);

    cout << "Shortest distances from node " << source << ":\n";
    for (int i = 0; i < numNodes; ++i) {
        cout << "Node " << i << ": " << distances[i] << endl;
    }

    return 0;
}
