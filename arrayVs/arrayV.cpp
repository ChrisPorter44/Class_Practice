#include <iostream>
#include <vector>
#include <array>
#include "arrayVsVector.h"
int main(){
    int array[3]={1,2,3};
    std::cout<<"Array";
    for (int i = 0;i<3,++i)
        std::cout<<array[i]<<" ";
    std::cout<<std::endl;

    //Vector
    std::vector<int>vec={1,2,3};
    vec.pushback(4);//adding element
    std::cout<<"Vector: ";
    for(int i=0;i<vec.size();++i)
        std::cout<<vec[i]<<" ";
    std::cout<<std::endl;

    return 0;

}