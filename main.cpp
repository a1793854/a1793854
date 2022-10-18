#include <algorithm>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

// CONVERT PREFIX TO INFIX
// Function to check if character is operator
bool isOperator(char a) {

  switch (a) {
  case '+':
    return true;
  case '-':
    return true;
  case '/':
    return true;
  case '*':
    return true;
  default:
    return false;
  }

}
 
// Convert string prefix to infix expressions
string preToInfix(string expression) {

  stack<string> new_str;
  stack<int> value;

  // Expression length
  int length = expression.size();

  // Operator and operand counter
  int operator_count = 0;
  int operand_count = 0;
  int operator_count2 = 0;
  int operand_count2 = 0;

  for (int k = 0; k < length; k++){

    if(isOperator(expression[k]) == true){
      operator_count++;
    }else if(isdigit(expression[k]) == 1){
      operand_count++;
    }

  }

  for (int k = 0; k < length - 2; k++){

    if(isOperator(expression[k]) == true){
      operator_count2++;
    }else if(isdigit(expression[k]) == 1){
      operand_count2++;
    }

  }
  
  // Check if expression is valid 
  // if total number of operands is not one more than the number of operators
  // Any prefix of the expression not including the last two symbols must contain no less operators than operands.
  if((operand_count != operator_count + 1) || (operand_count2 < operator_count2)){

    return "Error";

  }

  // Remove all spaces from string
  expression.erase(remove(expression.begin(), expression.end(), ' '), expression.end());

  // Read reverse
  for (int i = length - 1; i >= 0; i--) {

      // If not operator, convert operand to digit and push operand to value 
      if (isOperator(expression[i]) == false){

        value.push(expression[i] - '0');

      }else { // If operator
      
          // Pop two operands from value
          int operand_1 = value.top();
          value.pop();
          int operand_2 = value.top();
          value.pop();

          // Evaulate depending on operator
          switch (expression[i]) {
          case '+':
              value.push(operand_1 + operand_2);
              break;
          case '-':
              value.push(operand_1 - operand_2);
              break;
          case '*':
              value.push(operand_1 * operand_2);
              break;
          case '/':
              if(operand_2 == 0){
                return "Error";
              }
              value.push(operand_1 / operand_2);
              break;
          }
      }
  }
 
  // Convert the value to string
  string val = to_string(value.top());

  // Read reverse
  for (int j = length - 1; j >= 0; j--) {

    // Check if operator and not the end 
    if (isOperator(expression[j]) && j != 0) {
 
      // Pop two operands from value
      string op1 = new_str.top();   new_str.pop();
      string op2 = new_str.top();   new_str.pop();
 
      // Concatenate operator and operands
      string temp = "(" + op1 + ' ' + expression[j] + ' ' + op2 + ")";
 
      // Push concatenation to stack
      new_str.push(temp);

    }
    
    // If is operator and is the end
    else if (isOperator(expression[j]) && j == 0) { 
 
      // Pop two operands from value
      string op1 = new_str.top();   new_str.pop();
      string op2 = new_str.top();   new_str.pop();
 
      // Concatenate operator, operands, and value
      string temp = op1 + ' ' + expression[j] + ' ' + op2 + " = " + val;
 
      // Push concatenation to stack
      new_str.push(temp);

    }
 
    // If operand
    else {
 
      // Push the operand to stack
      new_str.push(string(1, expression[j]));
    }

  }

  // Return converted stack
  return new_str.top();

}
 
int main() {
  //string pre_exp = "* 3 - 5 + 4 3";
  
  string pre_exp;

  getline(cin, pre_exp);

  cout << preToInfix(pre_exp);

}
