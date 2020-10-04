//write includes statements
#include "loops.h"
//write using statements for cin and cout
using std::cout;	using std::cin;
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	cout<<"Enter a number to get the factorial of the number: ";
	cin>> num;
	do{
		factorial(num);
		return 0;
	}
	while(num >0 && num <= 10);
}