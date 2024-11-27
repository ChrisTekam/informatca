#include <iostream>

using namespace std;

int main(){

int birthyear;

cout << "Please input your birthyear." << endl;
cin >> birthyear;
cout << "You are " << (2024 - birthyear) << " years old." << endl;

cin.get();
cin.get();

return 0;
}