#include <iostream>

using namespace std;

int main()
{
	int w;
	cin >> w;
	if (1<= w and w <=100 and w%2==0 and w!=2)
	{
		cout << "YES" <<endl;
	}
	else
	{
		cout <<"NO"<<endl;
	}
	return 0;
}