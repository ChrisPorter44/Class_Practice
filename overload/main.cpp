#include <iostream>
#include <string>

class Student{
private:
    std::string name;
    int studentID;
    std::string address;

public:
    Student(const std::string& name,int studnetID,const std::string& address)
    :name(name),studentID(studentID),address (address){}
    friend std::ostream& operator<<(std::ostream& os,const Student& student){
        os<<"Name: "<<student.name<<'\n';
        os<<"Student ID"<<student.studentID<<'\n';
        os<<"Address"<<student.address<<'\n';
        return os;
    }
};
int main(){

    Student student("John Doe",12345,"123 USA");
    std::cout<<student;
    return 0;
}