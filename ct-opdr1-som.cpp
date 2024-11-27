#include <iostream>

using namespace std;

int main(){

float number1;
float number2;

cout << "Please enter a number." << endl;
cin >> number1;
cout << "Please enter a second number." << endl;
cin >> number2;
cout << "Your sum is:" << (number1 + number2) << endl;

cin.get();
cin.get();

return 0;
}