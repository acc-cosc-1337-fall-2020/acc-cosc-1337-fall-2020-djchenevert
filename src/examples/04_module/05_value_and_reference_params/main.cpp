#include<iostream>
#include "value_ref.h"

using std::cout;

int main() 
{
	static_example();
	static_example();
	static_example();

	pass_by_val_and_ref(5);
	int num1 = 5, num2 = 10;
	pass_by_val_and_ref(num1, num2);

	return 0;
}