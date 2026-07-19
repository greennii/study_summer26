#pragma once
#include <iostream>

namespace JeongYoonhA  //네임 스페이스 안에서 함수 실행 시키기 위해 필요한 변수들, 실행시켜야할 함수 선언
{
    struct student  //student라는 큰 묶음 안에 들어가는 세부 디테일한 정보 선언(어 ~~student 안에는 이런게 있어~~)
    {
        int id{};
        int score{};
        char grade{};

    };

    char getGrade(int score);     //score 점수를 받으면 알아서 알잘딱 점수에 맞는 학점(grade) 나오게 하는 함수 선언
          
    student inputStudent();        //키보드로 학생 정보를 입력받아서, 학번과 점수가 채워진 '학생 데이터 상자'를 통째로 하나 돌려주는 도구
    
    void printStudent(const student& s);  //학생 데이터 상자(s)를 받아서 화면에 출력하는 도구(출력만 하고 돌려주는 결과물은 없어서 void)

    int inputInteger();  //키보드로 숫자(정수) 하나를 입력받아 다음 계산 작업?으로 값을 전달함
    
    //int addIntegers(int a = 1, int b = 1);  ------->얘는 없어도 될듯


void printStudent(const student& s)  //위에서 선언한 printS에 대한 내용 설명
{
    std::cout << "ID : " << s.id << '\n'; //s에 있는 id 성분 빼서 ID라는 문자 프린트해
    std::cout << "Grade : " << s.grade << '\n';
}

student inputStudent()
{
    student s{};   //id와 grade를 공통으로 지칭하는 단어를 만들어준다 
    
    std::cout << "Enter student ID:";
    std::cin >> s.id;

    std::cout << "Enter student grade (A/B/C/D/F):";
    std::cin >> s.grade;
   
    return s;
}


// int mainst()
// {
//     student Jeong {25449101, 'A'};
//     printStudent(Jeong);

//     student Park { inputStudent()};
//     printStudent(Park);

        
//     return 0;        
// }               //int mainst()는 위의 함수가 잘 만들었는지 단순 테스트해본 것

}