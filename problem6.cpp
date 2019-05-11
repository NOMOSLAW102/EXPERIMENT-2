#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	
	bool hehe = false;
	do
	{
		int n, total = 0;
		cout << "Enter a number: ";
		cin >> n;
		if (n > 0)
		{
			for
				(int i = 1; i <= n; ++i)
			{
				total = total + i;
			}

			cout << "The sum of all whole numbers from 1 to" << " " << n << " " << "is: " << total << endl;

		}
		else
		{
			cout << "Thank you!";
			break;
		}
		
	}
	while (!hehe);

	_getch();
	return 0;

}