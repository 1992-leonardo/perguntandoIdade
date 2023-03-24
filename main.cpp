#include <iostream>

int main(){
    int idade;
    std::cout << "Digite sua idade: " << std::endl;
    std::cin >> idade;
    std::cout << "Sua idade eh: " << idade << std::endl;

    if(idade < 65 && idade > 18)
    {
        std::cout << "Voce eh maior de idade. " << std::endl;        
    } 
    else if(idade > 12 && idade < 17 )
    {
        std::cout << "Voce eh menor de idade. " << std::endl;
    }
    else if(idade < 11 && idade > 0 ){
        std::cout << "Voce ainda eh uma crianca" << std::endl;
    }
    else {
        std::cout << "Voce ja eh idoso. " << std::endl;
    }
     return false;
}