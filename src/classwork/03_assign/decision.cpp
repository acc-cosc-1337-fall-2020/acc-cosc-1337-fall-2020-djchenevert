//cpp
#include "decision.h"
using std::cout;
using std::string;
using std::cin;


string get_letter_grade_using_if(int grade)
{
    string letter;

    if(grade >= 90 && grade <= 100)
    {
        letter = "A";
        cout<<"Your letter grade is an "<<letter<<"\n";
    }
        else if(grade >= 80 && grade <= 89)
        {
            letter = "B";
            cout<<"Your letter grade is an "<<letter<<"\n";
        }
        else if(grade >= 70 && grade <= 79)
        {
            letter = "C";
            cout<<"Your letter grade is an "<<letter<<"\n";
        }
        else if(grade >= 60 && grade <= 69)
        {
            letter = "D";
            cout<<"Your letter grade is an "<<letter<<"\n";
        }
        else if(grade >= 00 && grade <= 59)
        {
            letter = "F";
            cout<<"Your letter grade is an "<<letter<<"\n";
        }
        
    return letter;
}

string get_letter_grade_using_switch(int grade)
{
    string letter_grade;

    switch (grade)
    {
    case 90 ... 100:
        letter_grade = "A";
        cout<<"Your letter grade is an "<<letter_grade<<"\n";
        break;
    case 80 ... 89:
        letter_grade = "B";
        cout<<"Your letter grade is an "<<letter_grade<<"\n";
        break;
    case 70 ... 79:
        letter_grade = "C";
        cout<<"Your letter grade is an "<<letter_grade<<"\n";
        break;
    case 60 ... 69:
        letter_grade = "D";
        cout<<"Your letter grade is an "<<letter_grade<<"\n";
        break;
    case 00 ... 59:
        letter_grade = "F";
        cout<<"Your letter grade is an "<<letter_grade<<"\n";
        break;
    }

    return letter_grade;
}
