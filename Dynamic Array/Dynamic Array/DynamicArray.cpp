#include "DynamicArray.h"



DynamicArray::DynamicArray()
{
	//Creates a base Array with a capacity of 10 and a size of 0
	m_arrayCapacity = 10;

	m_arrayElements = 0;

	m_array = new size_t[m_arrayCapacity];
}

DynamicArray::~DynamicArray()
{
	//Deletes the data off the heap
	delete[] m_array;
}

void DynamicArray::InitializeArray(size_t a_InitialCapacity)
{
	//Creates the array with all slots filled in with 0
	for (size_t i = a_InitialCapacity; i < m_arrayCapacity; i++)
	{
		m_array[i] = 0;
	}
}

void DynamicArray::Resize()
{
	//Resize the array when the size reaches the capacity
	if (m_arrayElements == m_arrayCapacity)
	{
		//Double the size of the Dynamic Array
		m_arrayCapacity *= 2;

		//Allocates more memory on the Heap
		size_t* m_tempArray = new size_t[m_arrayCapacity];

		//Copies all the current values across to the new array
		for (size_t i = 0; i < m_arrayElements; i++)
		{
			//Pushes all the data from the old array into the new array
			m_tempArray[i] = m_array[i];
		}

		delete[] m_array;

		//Sets the new Array into the old array so it keeps the same memory address
		m_array = m_tempArray;

		//Initialize our new array with all our elements
		InitializeArray(m_arrayElements);
	}
}

void DynamicArray::Push(size_t a_value)
{
	//If the array size meets or is more then the capacity it will resize
	if (m_arrayElements >= m_arrayCapacity)
	{
		Resize();
	}

	//Increments the size and adds the value to the new spot
	m_array[m_arrayElements++] = a_value;
}

void DynamicArray::Pop()
{
	m_arrayElements--;
}

void DynamicArray::RemoveAt(size_t a_value)
{
	//Iterates through the current elements in the array
	for (size_t i = 0; i < m_arrayElements; i++)
	{
		//Finds the element that the user wants to remove
		if (m_array[i] == a_value)
		{
			//Assigns the next element in the array to the current location
			m_array[i] = m_array[i + 1];

			//Pushes the current element back one and deletes it
			m_array[m_arrayElements - 1] = 0;
			m_arrayElements = m_arrayElements - 1;
		}

	}
}

void DynamicArray::Print()
{
	//Goes throw each elemet of the array and prints it as well as the capacity
	for (size_t i = 0; i < m_arrayElements; i++)
	{
		std::cout << GetAt(i) << std::endl;
	}

	std::cout  << "Array Capacity " << m_arrayCapacity << std::endl;
}

size_t DynamicArray::GetAt(size_t a_index)
{
	//If the user input was less then 0 or more then the amount elements in the array
	if (a_index < 0 || a_index > m_arrayElements)
	{
		std::cout << "Out of Bounds" << std::endl;
	}

	//Returns the Index
	return m_array[a_index];
}