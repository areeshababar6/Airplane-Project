#include <iostream>
#include <iomanip>
using namespace std;

void display(char** arr)
{
	cout << "\n \t\t Displaying the seating arrangements \n" << endl;
	cout << "\t\tA \tB \tC \tD \tE \tF" << endl;
	for (int i = 0; i < 13; i++)
	{
		cout  << setw(4) << left << " Row " << setw(3) <<  i + 1 << " \t";
		for (int j = 0; j < 6; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}
int main()
{
	char** arr;
	arr = new char*[13];
	for (int i = 0; i < 13; i++)
		arr[i] = new char[6];

	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 6; j++)
			arr[i][j] = '*';
	}

	char Ttype, cols;
	int r, c, temp = 1;
	bool correct = false;
	do 
	{
		do 
		{
			cout << " Enter your ticket type: " << endl;
			cout << " Enter F for First, B for Business, E for economy" << endl;
			cin >> Ttype;
			Ttype = toupper(Ttype);

			if (Ttype == 'F' || Ttype == 'B' || Ttype == 'E')
				correct = true;
			else
				correct = false;
		} while (!correct);
		
		display(arr);

		cout << "\n Enter your desired row: ";
		cin >> r;
		cout << "\n Enter your desired column: ";
		cin >> cols;
		r--;
		if (Ttype == 'F' && r >= 0 && r <= 1)
		{

		}
	} while (temp);


	

	for (int i = 0; i < 13; i++)
		delete[] arr[i];
	delete[] arr;


	return 0;
}