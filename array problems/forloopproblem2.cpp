#include <iostream>
#include <cmath>

using namespace std;



int main(){

int sum = 0;
int elements[] = {5, 10, 15, 20, 25};
//                0   1   2   3   4 
int elementsLength = 5;
for(int i = 0; i< elementsLength; i++){
    sum = sum + elements[i];
}

cout << "The sum is:" << sum << endl;

cin.get();
cin.get();

return 0;
}