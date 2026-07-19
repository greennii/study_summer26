#include "student.h"
#include <iostream>

namespace JeongYoonha2449101

{
        void student::testId() //id: 7 digits
        {
            //1000000 ~ 9999999
            if (id < 1000000 ||  id > 9999999)
            {
                std::cout << "Invalid id\n";
                std::exit(1);

            }  
        }
        void student::testScore() //score:0~100
        {
            if(score < 0 || score > 100)
            {
                std::cout << "Invaild score\n";
                std::exit(1);

            }
        }
        void student::calGrade() //score-->grade
        {
            switch(score/10)
            {
                case 10:
                case 9: grade = 'A'; break;
                case 8: grade = 'B'; break;
                case 7: grade = 'C'; break;
                case 6: grade = 'D'; break;
                default: grade = 'F';
            }
        }
        void student::student::input()
        {
            std::cout << "Enter Id:";
            std::cin >> id; testId();
            std::cout << "Enter Score: ";
            std::cin >> score; testScore();
            calGrade();
        }
        void student::print()
        {
            std::cout << "ID: " << id
                                << ", score:" << score
                                << ", grade: " << grade << std::endl;
        }
        /////////////////////////////////
        int student::getId()
        {
            return id;
        }
        int student::getScore()
        {
            return score;
        }
        int student::getGrade()
        {
            return grade;
        }
        ////////////////////////////////////
        void student::setId(int newId)
        {
            id = newId; testId();
        }
        void student::setScore(int newScore)
        {
            score = newScore; testScore();
            calGrade();
        }

}