#include <iostream>

using namespace std;

int main()
{
	for (int i = 10; i >= 0; i -= 2) cout << i << endl;

	int w = 1;
	while (w < 11)
	{
		cout << "" << w << endl;
		w++;
	}
	cout << endl;

	int x = 1;
	do
	{
		cout << "" << x << endl;
		x++;
	} while (x < 11);

	






	return 0;
}