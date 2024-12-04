#include <iostream>
#include <cmath>
using namespace std;

int main(){

 double num1, num2, result;
 char bewerking;

 cout << "Please enter the first number." << endl;
 cin >> num1;
 cout << "Please enter the second number." << endl;
 cin >> num2;
 cout << "Please choose an operator: +, -, /, or *" << endl;
 cin >> bewerking;

 if(num2 == 0 && bewerking == '/'){
 cout << "Undefined" << endl;
 } else if(bewerking == '+'){
    result = num1 + num2;
 } else if(bewerking == '-'){
    result = num1 - num2;
 } else if(bewerking == '/'){
    result = num1 / num2;
 } else if(bewerking == '*'){
    result = num1 * num2;
 } else {
    cout << "That's not valid operator." << endl;
 }

 cout << result;

cin.get();
cin.get();

    return 0;
}