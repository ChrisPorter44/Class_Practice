#include <iostream>

#include <string>

using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 0; i <= 10; i++) {
        cout << "i is " << i << endl;
        cin >> number;
    }

    return 0;
}