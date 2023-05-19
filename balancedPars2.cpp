#include <iostream>
#include <stack>
using namespace std;

bool isAPair(char top, char exprn){
	if(top == '(' && exprn == ')') return true;
	else if(top == '{' && exprn == '}') return true;
	else if(top == '[' && exprn == ']') return true;
	 return false;
}

bool isBalanced(string exp){
	stack<char> s;
	for(int i=0; i< exp.length(); i++){
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
			s.push(exp[i]);
		} else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
			//check if stack is empty
			if(s.empty() || !isAPair(s.top(), exp[i])){
				return false;
			}else{
				s.pop();
			}
		}
	}
	 return s.empty() ? true : false;
}

int main(){
	string expression;
	cout << "Enter an expression: " << endl;
	getline(cin, expression);
	if(isBalanced(expression)){
		cout << "Balanced" << endl;
	}else{
		cout << "Not Balanced" << endl;
	}
	
	return 0;
}
