#include <iostream>
#include <cmath>
using namespace std;

int main(){

int numbers[] = {1,2,3,4,5};
int target = 6;
int sum;

for(int i=0; i<5; i++){
    for(int j = i + 1; j<5; j++){
        if(numbers[i] + numbers[j] == target){
            cout << numbers[i] << " + " << numbers[j] << " = " << target << endl;
        }
    }
}




cin.get();
 return 0;   
}