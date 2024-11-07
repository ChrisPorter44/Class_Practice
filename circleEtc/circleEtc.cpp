#include <iostream>
#include <cmath>

class Shape{
public:
    virtual void read(std::istream& in)=0;
    virtual double area() const;
    virtual void display(std::ostream& out)const=0
};

class Circle : public Shape{
    private:
        double radius;
    public:
        void read(std::istream& in){
            std::cout<<"Enter Radius: ";
            in>>radius;
        }
        double area() const{
            return M_PI * radius * radius
        }
        void display(std::ostream& out)const{
            out<<"Circle with radius "<<radius;
        }
};

class Rectangle : public Shape{
    private:
        double width,height;
    public:
        void read(std::istream in){
            std::cout<<"Enter width and height: ";
            in>>width>>height;
        }
        double area()const{
            return width*height;
        }
        void display(std::ostream out)const{
            out<<"Rectangle with width"<<width<<"and height"<<height;
        }

};

class Triangle : public Shape{
    private:
            double base,height;
    public:
        void read(std::istream in){
            std::cout<<"Enter Base and height: ";
            in>>base>>height;
        
        double area()const{
                return 1/3*base*height
        
        void display(std::ostream out)const{
            out<<"Triangle with a base of "<<base<<" and height"<<height;
        }
        
}

void printArea(Shape* shape ){
    shape->display(std::cout);
    std::cout<<"has an area of:"<<shape->area()<<std::endl;

}

int main(){
    Shape* shape=nullptr;
    int choice;
    std::cout
}