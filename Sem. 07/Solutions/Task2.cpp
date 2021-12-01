#include <iostream>

using namespace std;

int findSingle(int* arr, unsigned size)
{
	int temp = arr[0];
	for (unsigned i = 1; i < size; i++)
		temp = temp ^ arr[i];

	return temp;
}

int main()
{
	int array[] = { 9,18,9,12,18,15,12 };
	unsigned size = sizeof(array) / sizeof(array[0]);
	cout << findSingle(array, size);
}
