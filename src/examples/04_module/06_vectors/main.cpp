#include "vec.h"
#include<vector>
#include<iostream>
using std::vector; using std::cout;

int main() 
{
	vector<int> nums{10, 3, 2};
	cout<<"capacity: "<<nums.capacity()<<"\n";

	nums.push_back(20);


	cout<<"capacity: "<<nums.capacity()<<"\n";

	cout<<nums[3]<<"\n";

	for(std::size_t i =0; i < nums.size(); ++i)
	{
		cout<<nums[i]<<"\n";
	}
	cout<<"\n for ranged\n";

	for (auto n: nums)
	{
		cout<<n<<"\n";
	}

	return 0;
}