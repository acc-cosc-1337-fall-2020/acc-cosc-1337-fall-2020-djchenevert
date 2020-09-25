//Write the include statement for decisions.h here
#include "decision.h"

//Write namespace using statements for cout and cin
using std::cin;	using std::cout;

int main() 
{
	int grade;

	cout<<"Input your numerical grade between 0 and 100: ";
	cin>>grade;

	if(grade >= 00 && grade <= 100)
	{
		get_letter_grade_using_if(grade);

		get_letter_grade_using_switch(grade);

	}
		else
		{
			cout<<"You have entered an invalid number.";
		}

	return 0;
}

