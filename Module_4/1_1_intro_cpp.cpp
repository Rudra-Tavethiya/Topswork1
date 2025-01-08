#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {  // Loop through numbers 1 to 10
        if (i % 2 == 0) {            // Check if the number is even
            cout << i << " is even." << endl;
        } else {                     // Otherwise, it's odd
            cout << i << " is odd." << endl;
        }
    }
    return 0;
}
