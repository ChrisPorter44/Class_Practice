#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

int main(){
    std::ifstream file("data/data.txt");
    if(!file.is_open(){
        std::cerr<<"Error opening file."<<std::endl;
        return 1;
    }
    std::string line;
    int index=0;
    
    while(std::getline(file, line){
        if(line.empty())
            continue;
        std::stringstream ss(line)
        std::string name, university, college;
        int age, id;
        std::string temp;

        std::getline(ss, name, 'n');
        std::getline(ss, temp, 'n');
        age = std::stoi(temp);
        std::getline(ss, university, 'n');
        std::getline(ss, college, 'n');
        std::getline(ss,temp);
        id = std::stoi(temp)

        std::cout<<"Person "<< index+1<<"Information:/n";
        std::cout<<"Name: "<<name<<"/n";
        std::cout<<"Age: "<<age<<"/n";
        std::cout<<"University: "<< university<<"/n";
        std::cout<<"College: "<< college<<"/n";
        std::cout<<"ID: "<<id<<"/n";

        float totalEarned=0, totalPoints =0;
        std::getlinre(file,line);
        while(!line.empty()){
            std::istringstream iss(line);
            std::string task;
            float earned = 0, total = 0;

            std::getline(iss, task, ',');
            std::getline(iss, temp, '/');
            earned = std::stof(temp);
            std::getline(iss, task,);
            total = sstd::stof(temp);
            
            totalEarned += earned;
            totalPoints += total;
            std::cout<<"Task: "<<task<<",Earned Points: "<<earned<<", Total Points: "<< total<<"\n";
                std::getline(file,line);

        }
    }
    
}