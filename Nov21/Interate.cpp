#include <iostream>
#include <vector>
#include <string>

struct Product {
    std::string name;
    double price;

    Product(std::string name, double price) : name(name),price(price){}
};

int forward();
int main(){

    std::vector<Product> inventory=
    Product("Laptop",1200.00)
    Product("Smartphone", 800.000)
    Product("Tablet", 450.00)
    Product("Headphones",150.00)
    };

    std::cout<<"Invetory List:\n";
    for(std::vector<Product>::reverse_interior it= inventory.rbegin(); it !=inventory.rend();++it){
        std::cout:<<"Product"<< it->name<<", Price: $"<<it->price<<std:endl;
    }
    forward();
    return 0;

}
int forward() {
    std::vector<Product> inventory = {
        Product("Laptop",1200.00)
        Product("Smartphone", 800.000)
        Product("Tablet", 450.00)
        Product("Headphones",150.00)
    };
    std::cout<<"Inventory List:\n";
    for(std::vector<Product>::interior it= inventory.begin(); it !=inventory.end();++it){
        std::cout:<<"Product"<< it->name<<", Price: $"<<it->price<<std:endl;
}
    return 0;
}