#include <iostream>

typedef char CharType;

int main(){
    CharType ch;

    std::cout<<"Enter a character: ";
    ch = std::cin.get();

    std::<<"You entered: "; 
    std::cout.put(ch);
    std::cout.put('/n');

    return 0;
}