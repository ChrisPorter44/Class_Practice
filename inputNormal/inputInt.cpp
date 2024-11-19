#include <iostream>
#include <vector>
#include <iterators>

int main(){
    std::vector<int> numbers;
    std::cout<<"Enter Integers (Ctrl+D to End): ";

    std::istream_iterator<int> start(std::cin),end;
    numbers.assign(start,end);
    
    std::cout<<"You entered: ";
    for(int num : numbers){
        std::cout<<num<<" ";
    }
    return 0
}