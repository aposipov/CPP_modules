
#include "easyfind.hpp"


int main()
{
	int arr[7] = {0, 23, 4, 56, 7, 8, 9};
	std::cout << "-------- Test --------" << std::endl;
	try
	{
		std::vector<int> myVector(arr, arr + sizeof(arr) / sizeof(arr[0]) );
		int val = 23;
		print_cont(myVector);
		std::cout << "find " << val << std::endl;
		easyfind(myVector, val);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------- Test --------" << std::endl;
	try
	{
		std::vector<int> myVector(arr, arr + sizeof(arr) / sizeof(arr[0]) );
		int val = 234;
		print_cont(myVector);
		std::cout << "find " << val << std::endl;
		easyfind(myVector, val);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------- Test --------" << std::endl;
	try
	{
		std::list<int> myList;
		int val = 45;
		myList.push_back(1);
		myList.push_back(2);
		myList.push_back(23);
		myList.push_back(45);
		myList.push_back(67);
		print_cont(myList);
		std::cout << "find " << val << std::endl;
		easyfind(myList, val);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------- Test --------" << std::endl;
	try
	{
		std::list<int> myList;
		int val = 0;
		myList.push_back(1);
		myList.push_back(2);
		myList.push_back(23);
		myList.push_back(45);
		myList.push_back(67);
		print_cont(myList);
		std::cout << "find " << val << std::endl;
		easyfind(myList, val);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}