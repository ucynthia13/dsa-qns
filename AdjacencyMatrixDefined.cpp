#include <iostream>
using namespace std;

class AdjacencyMatrix{
	private:
		int n;
		int **adj;
		public:
			AdjacencyMatrix(int n){
				this->n=n;
				adj = new int*[n];
				for(int i=0; i<n; i++){
					adj[i] = new int[n];
					for(int j=0; j<n; j++){
						adj[i][j]=0;
					}
				}
				
			}
			
	void add_edge(int origin, int destination){
		if(origin >n || destination > n || origin <=0 || destination <=0){
			cout << "Invalid Edge\n";
			return;
		}
		else if(origin == destination){
			adj[origin-1][destination-1] = 2;
		}
		else {
			adj[origin-1][destination-1] += 1;
		}
		
	}
	
	void delete_edge(int origin, int destination){
		if(origin>n || destination > n || origin <= 0 || destination <=0){
			cout << "Invalid Edge \n";
			return;
		}
		adj[origin-1][destination-1]=0;
	}
	
	void display(){
		int i,j;
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				cout << adj[i][j] << " ";
			}
			cout << endl;
		}
	}
};


int main(){
	int nodes, max_edges,edges, origin, destination;
	cout << "Enter the number of nodes: ";
	cin >> nodes;
	cout << "Enter the number of edges: ";
	cin >> edges;
	max_edges = nodes * nodes;
//	if(edges > max_edges){
//		cout << "Invalid number of edges: ";
//		return 0;	
//	}
	AdjacencyMatrix am(nodes);

	for(int i=0; i< edges; i++){
		cout << "Edges number " << i+1 << endl;
		cout << "Enter edge (-1) to exit " << endl;
		cout << "Enter origin and destination vertices: " << endl;
		cin>> origin >> destination;
		if(origin == -1 || destination == -1){
			break;
		}
		am.add_edge(origin, destination);
		am.display();
	}
	return 0;
}
