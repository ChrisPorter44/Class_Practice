#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Animal {
public:
    virtual void speak() const{
        cout<<"The animal makes a sound"<<endl;
    }
};
