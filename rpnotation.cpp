#include<iostream>
#include<stack>
#include<string>
#include<math.h>
#include<cstdlib> //for exit() function

using namespace std;

bool isOperator(char ch){
   return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

float performOperation(float operand1, float operand2, char op){
   switch(op){
      case '+': return operand1 + operand2;
      case '-': return operand1 - operand2;
      case '*': return operand1 * operand2;
      case '/': return operand1 / operand2;
      case '^': return pow(operand1, operand2);
      default: exit(EXIT_FAILURE);
   }
}

//function to evaluate a postfix expression
float reversePolishNotation(string expression){
   stack<float> s; //create a stack to store operands

   for(int i = 0; i < expression.length(); i++){
      if(isdigit(expression[i])){
         s.push(expression[i] - '0'); 
      }
      //if the character is an operator
	  //pop the top two operands from the stack and perform the operation
      else if(isOperator(expression[i])){
         float operand2 = s.top();
         s.pop();
         float operand1 = s.top();
         s.pop();
         float result = performOperation(operand1, operand2, expression[i]);
         s.push(result);
      }
      //if the character is neither a digit nor an operator
      else{
         exit(EXIT_FAILURE);
      }
   }
   //the result of the expression is the only remaining element on the stack
   return s.top();
}

int main(){
   //example postfix expression
   string rpnotation = "53+62/*35*+";
   //evaluate the expression and print the result
   cout << "The result is: " << reversePolishNotation(postfix) << endl;
   return 0;
}
