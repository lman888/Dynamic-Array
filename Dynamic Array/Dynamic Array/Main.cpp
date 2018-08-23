#include <iostream>
#include "DynamicArray.h"

int main()
{
	//Creates the array with the initial size of 10
	DynamicArray Array(1);

	Array.Print();

	Array.Push(50);

	Array.Print();

	Array.GetCapacity();

	Array.GetSize();

	return 0;
}