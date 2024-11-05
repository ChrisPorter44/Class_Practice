#include <iostream>
#include <cctype>

int main(){
    char ch;

    std::cout<<"Enter characters(Ctrl+D to end input):\n";

    while(true){
        ch = std::cin.peek();
        if(ch == EOF){
            break;
        }

        std::cin>>ch;

        if(!std::isalpha(ch)){
            int non_value_value=static_cast<int>(ch);
            std::cout << "Non alphabetic char '"<<ch<<"' detected(ASCII): "<<non_alpha_value<<")/n'";
            break;
        }
    }
        return 0;

}

for (int i=0,i<.getline,i+++){

}


