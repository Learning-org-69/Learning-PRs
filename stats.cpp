
/*
	Basic statistics of a set of numbers
	Author: Srikar
*/
#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;

// Global array for conviniece. Max elements = 100 as per requirements
float nums[100];

int main()
{
	// Function prototypes
	void bubbleSort(float[], int);
	int readFile(void);

	int num_inputs = readFile();

	float avg = 0, std = 0, median = 0, temp_sum = 0;

	// Finding the average
	for(int i = 0; i < num_inputs; i++)
		avg += nums[i];

	avg /= num_inputs;

	cout<<endl<<"Average = \t\t"<<avg<<endl;

	// Standard deviation
	for(int i = 0; i < num_inputs; i++)
		temp_sum += pow((nums[i] - avg), 2);

	temp_sum /= num_inputs - 1;
	std = sqrt(temp_sum);

	cout<<"Std deviation = \t"<<std<<endl;

	// Median
	// Bubble sorting elements. Time complexity not an issue here
	bubbleSort(nums, num_inputs);

	// Even number of elements
	if(num_inputs % 2 == 0)
		median = (nums[num_inputs / 2 - 1] + nums[num_inputs / 2 ]) / 2;

	else
		median = nums[num_inputs / 2];

	cout<<"Median = \t\t"<<median<<endl;

	return(0);
}

// Function to swap elements
void swap(float *x, float *y)
{
	float temp = *x; 
	*x = *y; 
	*y = temp; 
}

// Function to bubble sort the array
void bubbleSort(float nums[], int num_inputs)
{
	for (int i = 0; i < num_inputs - 1; i++)
		for (int j = 0; j < num_inputs - i - 1; j++) 
			if (nums[j] > nums[j + 1]) 
				swap(&nums[j], &nums[j +1 ]);
}

// Function to read from file and assign values in the array
int readFile()
{
	fstream fio;	// File stream
	string line;	// string to store the line read from file
	fio.open("input.txt", ios::in | ios::out);

	// Execute a loop until EOF (End of File)
	// point read pointer at beginning of file
	fio.seekg(0, ios::beg);

	int num = 0;	// Number of lines, i.e, number of elements
 
	while (fio)
	{
		// Read a Line from File
		getline(fio, line);

		// Converting read string to float
		nums[num++] = stof(line);
	}

	// Close the file
	fio.close();

	return num - 1;	//Since we incremement once post the loop closure
}
