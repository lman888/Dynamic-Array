#include "DynamicArray.h"



DynamicArray::DynamicArray() : m_initialCapacity(10)
{
	//Creates an initial size of 10 for the array and stores it on the Heap
	m_data = new DynamicArray[m_initialCapacity];

	//Pushes the initial size of the array into the arrays capacity
	m_arrayCapacity = m_initialCapacity;

	//Sets the arrays size to 0
	m_arraySize = 0;
}

DynamicArray::DynamicArray(size_t a_InitialCapacity)
{
	//Sets the array size to the users input
	m_data = new DynamicArray[a_InitialCapacity];

	//Pushes the users size of the array into the arrays capacity
	m_initialCapacity = a_InitialCapacity;

	//Array size to 0
	m_arraySize = 0;
}


DynamicArray::~DynamicArray()
{
	//Deletes the data off the heap
	delete[] m_data;
}

void DynamicArray::Push(DynamicArray  a_Value)
{
	//Resize the array when the size reaches the capacity
	if (m_arraySize == m_arrayCapacity)
	{
		//Double the size of the Dynamic Array
		m_arrayCapacity *= 2;

		//Allocates more memory on the Heap
		DynamicArray* m_newData = new DynamicArray[m_arrayCapacity];

		//Copies all the current values across to the new array
		for (size_t i = 0; i < m_arraySize; i++)
		{
			//Pushes all the data from the old array into the new array
			m_newData[i] = m_data[i];
		}

		//Pushes our new data into our old data so it holds the same memory address
		m_data = m_newData;
	}

	//Increments the current size of the array
	m_arraySize++;
}

void DynamicArray::Print()
{
	//Goes throw each elemet of the array and prints it as well as the capacity
	for (size_t i = 0; i < m_arraySize; i++)
	{
		std::cout << m_data[i].m_arraySize  << " | " << m_data[i].m_arrayCapacity << std::endl;
	}
}

size_t DynamicArray::GetSize()
{
	return m_arraySize;
}

size_t DynamicArray::GetCapacity()
{
	return m_arrayCapacity;
}

size_t DynamicArray::Resize()
{
	return size_t();
}