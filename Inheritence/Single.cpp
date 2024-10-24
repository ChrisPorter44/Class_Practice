#include <iostream>

Clase Rectangle{
    protected:
        double width,height
    public:
        Rectangle(double w,double h) : width(w),height(h){}

        double area()const{
            return width * height;
        }
    void displayDimentions()const{
        cout<<"Width"<<width<<"Height"<<height<<endl;
    }

};
class Sqaure: public Rectangle{
    public:
            square(double side): Rectangle(side,side){}
            void display()const{
                cout<<"Side"<<width<<endl<<;
            }
}
int main(){
    Rectangle rect(2.0,3.0)
    cout<<"Rectangle:"<<endl:\
    rect.displayDimentions();
    cout<<"Area:"<<rect.area()<<endl;

    Square sq(4.0);
    cout<<"\nSquare:"<<endl;
    sq.displaySide();
    sq.dispalyDimentions();
    cout<<"Area"<<sq.area()<<endl;

    return 0;
}   