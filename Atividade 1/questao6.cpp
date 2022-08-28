#include <iostream>

using namespace std;

int main(){
	int sal1,sal2,sal3, num_ciclos;
	cin >> num_ciclos;
	int sal_ficaram[num_ciclos];
	for (int i = 0; i < num_ciclos; i++)
	{
		cin >> sal1 >> sal2 >> sal3;
		if (sal1 > sal2)
		{
			if (sal2 > sal3)
			{
				sal_ficaram[i] = sal2;
			}
			else if (sal1 > sal3)
			{
				sal_ficaram[i] = sal3
			}
			else
			{
				sal_ficaram[i] = sal1;
			}
		}
		else
		{
			if (sal1 > sal3)
			{
				sal_ficaram[i] = sal1;
			}
			else if (sal2 > sal3)
			{
				sal_ficaram[i] = sal3;
			}
			else
			{
				sal_ficaram[i] = sal2;
			}
		}
	}

	for (int j = 0; j < num_ciclos; j++)
	{
		cout << "Case " << j << ": "<< sal_ficaram[j] << endl;
	}
	return 0;
}