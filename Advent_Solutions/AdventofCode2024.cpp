
#include "Day_1.h"
#include "Day_2.h"

using namespace std;

int main() 
{
	int selection = 0;
	cout << "Please choose which Day should be run." << endl;
	cin >> selection;


	switch (selection)
	{

		case 1:
		{
			Day_1 obj;
			obj.compute();
		}
		case 2:
		{
			Day_2 obj;
			obj.compute();
			break;
		}
	}
}