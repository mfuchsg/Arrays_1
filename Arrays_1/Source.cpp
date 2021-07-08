#include<iostream>
using namespace std;
#define tab "\t";
#define left;
#define right



void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	int number_of_shifts;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

#ifdef left
	cout << "¬ведите на сколдько сдвинуть массив влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}

#endif // left

#ifdef right
	cout << "¬ведите на сколько сдвинуть массив вправо: "; cin >> number_of_shifts;
	cout << endl;

	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
#endif // right
}