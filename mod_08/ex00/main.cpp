
#include "easyfind.hpp"


int main()
{
	int arr[7] = {0, 23, 4, 56, 7, 8, 9};
	try
	{
		std::vector<int> MyVector(arr, arr + sizeof(arr) / sizeof(arr[0]) );

		easyfind(MyVector, 23);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		std::vector<int> MyVector(arr, arr + sizeof(arr) / sizeof(arr[0]) );

		easyfind(MyVector, 234);
	}
	catch(const char *str)
	{
		std::cout << str << '\n';
	}

	try
	{
		std::list<int> myList;
		myList.push_back(1);
		myList.push_back(2);
		myList.push_back(23);
		myList.push_back(45);
		myList.push_back(67);
		easyfind(myList, 45);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		std::list<int> myList;
		myList.push_back(1);
		myList.push_back(2);
		myList.push_back(23);
		myList.push_back(45);
		myList.push_back(67);
		easyfind(myList, 0);
	}
	catch(const char *str)
	{
		std::cout << str << '\n';
	}

	return 0;
}