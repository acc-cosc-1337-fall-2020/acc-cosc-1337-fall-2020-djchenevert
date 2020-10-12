#include<string>
#include<iostream>
#include "for_ranged.h"


using std::string;	using std::cout;
int main() 
{
	string name = "John Doe";
	string name1();
	string name2(name, 2, 4);
	string name3("constructor copy");
	string name4("i am too long for the buffer", 8);
	string name5(10, 'x');


	cout<<name<<"\n";
	cout<<name1<<"\n";
	cout<<name2<<"\n";
	cout<<name3<<"\n";
	cout<<name4<<"\n";
	cout<<name5<<"\n";

	cout<<name[2]<<"\n";
	name[0] = 'j';
	name[5] = 'd';
	cout<<name<<"\n";
	cout<<"for ranged \n";
	for(std::size_t i =0; i < name.size(); ++i)
	{
		cout<<name[i]<<"\n";
	}

	cout<<"for ranged \n";
	for(char c: name)
	{
		cout<<c<<"\n\n";
	}

 
	return 0;
}