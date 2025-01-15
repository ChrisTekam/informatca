#include <iostream>
#include <cmath>

using namespace std;



int main(){

int numbers[]= {3, 7, 15, 10, 22, 65, 2, 4, 76, 41};
int highestNumber = numbers[0];

for(int i = 0; i<10; ++i){
if(numbers[i]>highestNumber){
    highestNumber = numbers[i];
}
}
cout << "Your maximum:" << highestNumber<< endl;

cin.get();
cin.get();

return 0;
}