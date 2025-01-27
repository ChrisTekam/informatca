#include <iostream>


using namespace std;


int main(){

int array[] = {1,2,3,4,5};
int size = 5;
int largest = array[0];
int secondLargest = array[0];

for(int i=0; i < size; i++){
    if(array[i] > largest){
      secondLargest = largest;  
      largest = array[i];
} else if(array[i] > secondLargest && array[i] != largest){
    secondLargest = array[i];
}
}
cout << secondLargest;

cin.get();

    return 0;   
}