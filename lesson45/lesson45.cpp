
#include <iostream>
#include <string>
using namespace std;

void random_init(int* vector, int size, int a, int b);
string convert(int* vector, int size);

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

	delete[] vector;
	return 0;
}

