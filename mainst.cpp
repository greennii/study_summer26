#include <iostream>
#include "declaration.h"

void passVal(int val){val = 20; std::cout << &val << "" <<val << "\n";}
void passRef(int&ref){ref = 20; std::cout << &ref << "" << ref << "\n"; }

int main()
{
    using namespace JeongYoonhA;
    // student Jeong{2449101, 100, 'A'};printStudent(Jeong);
     student Kim{ inputStudent()};printStudent(Kim);


    // int n{10}; std::cout << &n << " " << n <<  "\n";
    // passVal(n); std::cout << &n << " " << n << "\n";
    // passRef(n); std::cout << &n << " " << n << "\n";
    
    // int m{inputInteger()};
    // std::cout << n << "+" << m << "=" << addIntegers(n,m) << '\n';
     return 0;

}
