#pragma once

namespace JeongYoonha2449101
{
    class student
    {
        int id{};
        int score{};
        char grade{};

        void testId(); //id: 7 digits
        void testScore(); //score:0~100
        void calGrade(); //score-->grade

    public:
        void input();
        void print();
        int getId();
        int getScore();
        int getGrade();
        void setId(int newId);
        void setScore(int newScore);

    };


}