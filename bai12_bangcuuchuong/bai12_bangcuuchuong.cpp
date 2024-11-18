#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int so = 0; so < 10; so++)
		{
			cout << so << "x" << i << "=" << so * i << "\t";
		}
		cout << endl;
	}
	return 0;
}