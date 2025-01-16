#include <iostream>

using namespace std;

int main() {
    int numbers[] = {19, 22, 7, 8, 18, 67, 93, 3};
    int evenNummers = 0;

    for (int i = 0; i < 8; i++) {
        if (numbers[i] % 2 == 0) {
            evenNummers +=1;
        }
    }

    cout << "Aantal even nummers: " << evenNummers << endl;

cin.get();
    return 0;
}