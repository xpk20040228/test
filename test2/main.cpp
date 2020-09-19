#include <iostream>

using namespace std;

int main()
{
    int int_NumOfLang= -1;
    std::cout<<"Hello reader.\n"
    <<"Wellcome to C++.\n";

    std::cout<<"How many languages have you used?";
    std::cin>>int_NumOfLang;

    if(int_NumOfLang<1)
    {
        std::cout<<"None?"<<"Are your serious?\n";12
    }
    else
    {
        std::cout<<"Enjoy the book.\n";
    }
    return 0;
}
