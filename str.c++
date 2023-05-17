#include <iostream>
using namespace std;

// Overloading Operator
void* operator new(size_t s)
{
	cout << "Allocated Heap!!" << endl;
	return malloc(s);
}

int main()
{
	std::string str1 = "Hello this is Aakash Here!!";
	// 27 char it is greater than 25

	std::string str2 = "CppNuts";
	// 7 char it is smaller than 25
}
