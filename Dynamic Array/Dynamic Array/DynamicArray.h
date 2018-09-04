#pragma once
#include <iostream>
#include <vector>

class DynamicArray
{
public:
	//Creates the Dynamica memory on the heap
	DynamicArray();

	//Frees the allocated memory
	~DynamicArray();

	//Initializes the array
	void InitializeArray(size_t a_InitialCapacity);

	//Resizes the Array
	void Resize();

	void Push(size_t a_value);

	//Removes the top element from the array
	void Pop();

	void RemoveAt(size_t a_value);

	//Prints out the Elements in the Dynamic Array
	void Print();

	//Prints out the current Capacity of the Dynamic Array
	void PrintCapacity();

	//Returns the Size and Capacity of the Dynamic Array
	size_t GetAt(size_t a_index);

	//Returns the variable of m_arrayElements
	size_t GetArraySize() { return m_currentSize; }

private:

	//This is the arrays Data, its initial starting capacity
	//The arrays capacity and the arrays size
	size_t *m_array;
	size_t m_arrayCapacity;
	size_t m_currentSize;
};

