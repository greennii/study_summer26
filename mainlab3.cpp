# include "student.h"
#include "student.cpp"
#include <iostream>
int main()
{
    using namespace JeongYoonha2449101;
    using namespace std;

    student s1;
    s1.input();
    s1.print();

    student s2;
    s2.setId(2449101);
    s2.setScore(100);
    s2.print();

    if (s1.getId() == s2.getId()
        && s1.getScore() == s2.getScore()
        && s1.getGrade() == s2.getGrade())
        cout << "same\n";
    
    else 
        cout << "not same\n";

    return 0;


}