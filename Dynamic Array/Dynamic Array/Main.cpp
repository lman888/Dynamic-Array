#include <iostream>
#include "DynamicArray.h"

int main()
{
	//Creates the array with the initial size of 10
	DynamicArray Array;

	Array.Push(10);
	Array.Push(50);
	Array.Push(1);
	Array.Push(51);
	Array.Push(11);
	Array.Push(55);
	Array.Push(12);
	Array.Push(57);
	Array.Push(17);
	Array.Push(580);
	Array.Push(24580);
	Array.Push(2380);
	Array.Push(1180);
	Array.Push(2018);

	Array.Print();

	std::cout << "----------------------------" << std::endl;

	Array.Pop();
	Array.Pop();

	Array.Print();

	std::cout << "----------------------------" << std::endl;

	Array.RemoveAt(4);

	std::cout << "----------------------------" << std::endl;

	Array.Print();

	system("pause");
	return 0;
}