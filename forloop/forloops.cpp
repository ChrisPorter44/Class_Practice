#include <iostream>
#include <string>

using namespace std;
   

int main() {

    int sum;
    int num;
    sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

        for (int i = 1; i<= num; i++) {
        sum += i;
        
    }
    cout << "Sum = " << sum << endl;
    return 0;
}