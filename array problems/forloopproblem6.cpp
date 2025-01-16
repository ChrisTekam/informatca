#include <iostream>

using namespace std;

int main() {
    int numbers[] = {5, 10, 15, 20};

    for (int i = 0; i < 4; i++) {
        numbers[i] *= 2;
        cout << "Element " << i << ": " << numbers[i] << endl;
    }
cin.get();
    return 0;
}
