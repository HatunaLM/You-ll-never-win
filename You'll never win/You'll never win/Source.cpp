#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int a;
	const int SIZE = 10;

	int arr[SIZE];

	bool exit = false;

	for (int i = 1; i < 3;) {
		while (!exit && i < 3) {

			cout << "You need to input number from 0 to 10 3 times maximum. \n\n***It's your " << i << " endeavor, good luck ;)**\n\nInput number from 1 to 10: ";

			cin >> a;

			cout << "\nYour number is " << a << endl << endl;
			if (a < 0 || a >= 10)
				cout << "Error!!! Please input number from 1 to 10!" << endl << endl;
			else {

				for (int i = 0; i < SIZE;)

				{
					arr[i] = 1 + rand() % 10;

					if (a != arr[i]) {

						cout << arr[i] << "\t";
						i++;
					}
					else continue;
				}

				cout << endl << endl;

				switch (a) {
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10: cout << "\nSorry, but you've lost :(\n\nTry again, maybe you'll win" << endl << endl;
					break;
				default:
					cout << "Error!!! Please input number from 1 to 10!" << endl << endl;
				}
				cout << "If your want to play again, press 0 or 1 to exit this game: " << endl;
				cin >> exit;
			}
			i++;
		}
	}

	for (int i = 0; i < 1;) {

		while (!exit && i < 1) {

			cout << "***It's your the last endeavor, good luck ;)**\n\nInput number from 1 to 10: ";

			cin >> a;

			cout << "\nYour number is " << a << endl << endl;
			if (a < 0 || a >= 10)
				cout << "Error!!! You have lost your the last endeavor :(" << endl << endl;
			else {

				for (int i = 0; i < SIZE;)

				{
					arr[i] = 1 + rand() % 10;

					if (a != arr[i]) {

						cout << arr[i] << "\t";
						i++;
					}
					else continue;
				}

				cout << endl << endl;

				switch (a) {
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10: cout << "\nSorry, but you've lost  :(\n\n" << endl << endl;
					break;
				default:
					cout << "Error!!! You have lost the last endeavor :(" << endl << endl;
				}

			}i++;
		}
	}
	cout << "***Game over***";

	return 0;
}