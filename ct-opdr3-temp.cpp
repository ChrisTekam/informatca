#include <iostream>

using namespace std;


int main(){
    float tempC;
cout << "Input the temperature in Celsius." << endl;
cin >> tempC;
cout << tempC << " degrees Celsius is equal to " << (tempC*9/5 + 32) << " degrees Fahrenheit." << endl;

cin.get();
cin.get();

return 0;
}