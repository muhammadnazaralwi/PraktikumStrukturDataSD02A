// input nilai array dari user
#include <iostream>
using namespace std;

int main()
{

	int A[3][4];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "A[" << i << "][" << j << "] = ";
			cin >> A[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
