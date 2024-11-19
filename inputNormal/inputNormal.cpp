#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers;
    int value;

    std::cout<<"Enter integers (Ctrl+D to end) :";

    while (std::cin>>value){
        numbers.push_back(value);
    }
    std::cout<<"You entered: ";
    for(int num : numbers){
        std::cout <<num<<"";
    }
    return 0;
}