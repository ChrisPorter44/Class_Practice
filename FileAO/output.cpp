#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ofstream file ("output.txt")
    if(!file){
        std<<cer<<"Cant open file"<<std::endl;
        return 1;
    }
    file<<"Hello world"<<std::endl;
    file<<"how are you";
    file<<"i am fine";
    file.close();
    return 0;
}
