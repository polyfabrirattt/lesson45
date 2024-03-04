
#include <iostream>
#include <string>
using namespace std;
int sum_of_negative_elements(int* vector, int size);
void random_init(int* vector, int size, int a, int b);
string convert(int* vector, int size);
int proizvidenie_of_max_and_min_elements(int* vector, int size);
int index_of_min_elements(int* vector, int size);
int index_of_max_elements(int* vector, int size);

int main()
{
	int size;
	
	do 
	{
		cout << "input size: ";
		cin >> size;
	} while (size <= 0);

	int* vector = new int[size];

	random_init(vector, size, -10, 10);
	cout << convert(vector, size) << endl;
	cout << "sum of negative: " << sum_of_negative_elements(vector, size) << endl;
	cout << "proizvedenie: " << proizvidenie_of_max_and_min_elements(vector, size) << endl;
	delete[] vector;
	return 0;
}

