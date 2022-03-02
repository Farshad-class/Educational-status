#include <iostream>
using namespace std;
int main()
{
	int number[7];
	string name[7];
	for (int i = 0; i <=6; i++)
	{
		cout << "Please Enter a student name  " << endl;
		cin >> name[i];
		cout << "Please Enter a student number " << endl;
		cin>> number[i];
		if ((number[i] < 0) || (number[i] > 20))
			do
			{
				{
					cout << "Please Enter number between 0-20" << endl;
					cout << "Please Enter number " << endl;
					cin >> number[i];

				}
			} while ((number[i] < 0) || (number[i] > 20));
	}
	cout << "===========" << "Summery" << "===========" << endl;
	cout << "Student name" << " " <<"class number" << endl;
	for (int i = 0; i <=6 ; i++)
	{
		if (number[i] < 10)
		{
			cout << name[i] << "\t" <<""<< "\t" << number[i] << endl;
		}
	}
	return 0;
}