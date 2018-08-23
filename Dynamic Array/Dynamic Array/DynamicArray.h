#pragma once
#include <iostream>
#include <vector>

//A Dynamic Array will need a constructor, deconstructor, assignment operator and copy constructor
//Functions for adding removing from the end of the array
//Functions for adding 1 or more elements from the middle of the array
//Functions for removing from the middle of the array
//Functions for removing from the middle of the array
//	i. Both ordered and unordered removal
//Functions for charing changing how much space is allocated for the array
//	i. If less space is allocated than is used, the extra used data is discarded
//A function for clearing the array

//CHALLENGE
//A function for sorting the array
//A function that searches the array for a given element
//A function for concatenenating two dynamic arrays together
//A function for randomly shuffling array
//A function for rotating the array by a given amount
//	i. Rotating an array means to shift elements elements in a direction
//		* Any elements that would fall off the end wrap back around to the start
//		* EG: rotating the array {1,2,3,4,5,6,7,8,9} by 2 would give
//		* {8,9,1,2,3,4,5,6,7} and rotating the array by -4 would give
//		* {5,6,7,8,9,1,2,3,4}


//Creating a Dynamic Array 
//We store 3 values
//- The pointer to the array itself
//	* The array is allocated on the heap
//A number storing how much memory we allocated
//A number storing how many elements are currently in use

class DynamicArray
{
public:
	//Creates the Dynamica memory on the heap
	DynamicArray();

	//Creates the initial size of the array
	DynamicArray(size_t a_InitialCapacity);

	//Frees the allocated memory
	~DynamicArray();

	//Pushes an element to the top of array
	void Push(DynamicArray* a_Value);

	//Prints out the Dynamic Array
	void Print();

	//Returns the Size and Capacity of the Dynamic Array
	size_t GetSize();
	size_t GetCapacity();

private:

	DynamicArray * m_data;

	//This is the arrays Data, its initial starting capacity
	//The arrays capacity and the arrays size
	size_t m_initialCapacity;
	size_t m_arrayCapacity;
	size_t m_arraySize;

	//Resizes the array
	size_t Resize();
};

