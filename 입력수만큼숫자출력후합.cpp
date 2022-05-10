#include <iostream>

using namespace std;

// new - delete
// new [] - delete []

int main()
{
	int* Data = nullptr;

	char* Data = new char[3];

	Data = new int[3];
	
	Data[0] = 100;
	Data[1] = 200;

	cout << (int)*(Data + 0) << endl;
	cout << (int)Data[0] << endl;
	

		delete Data;
	Data = nullptr;

	
	if (Data)
		
		return 0;

}