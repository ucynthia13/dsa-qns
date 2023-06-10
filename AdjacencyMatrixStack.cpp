#include <iostream>
#include <vector>
#include  <stack>

using namespace std;

void dfs(vector <vector<int> > v, int sv, vector<bool> &visited){
	int n = v.size();
	stack<int> st;
	st.push(sv);
	while(!st.empty()){
		int cv = st.top();
		visited[sv] = true;
		st.pop();
		cout << cv << endl;
		for(int i=n-1; i>=0; i-- ){
			if(v[cv][i] && !visited[i]){
				st.push(i);
				visited[i] = true;
			}
		}
	}
}

int main(){
	int n,e;
	cin >> n >> e;
	vector<vector<int> > matrix(n, vector<int>(n,0));
	
	for(int i=1; i<=e; i++){
		int fv, sv;
		cin >> fv >> sv;
		
		matrix[fv][sv] =1;
		matrix[sv][fv] =1;
	}
	vector<bool>visited(n, false);
	cout << "DFS" <<endl;
	dfs(matrix,1,visited);
	
	return 0;
	
}
