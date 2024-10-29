#include <iostream>
#include <string>
#include <fstream>

int main{
    std::ifstream  file("example file");
    std::string line;

    if(!file){
        std::cerr<<"file didnt open where is it?"<<std::endl;}
        return 1
    while(std::getline(file, line){
            std::cout<<""<<line<<""<<std::endl;

        }

    
    file.close();
    return 0
}