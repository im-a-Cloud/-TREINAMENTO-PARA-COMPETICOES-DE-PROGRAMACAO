#include <bits/stdc++.h>
 using namespace std;

 int main()
 {
 	int val1,val2, val3, val4, val5, val6, val7, val8;
 	vector<int> vetor_num;
 	cin >> val1 >> val2 >> val3 >> val4 >> val5 >> val6 >> val7 >> val8;
 	vetor_num.insert(vetor_num.end(), {val1,val2, val3, val4, val5, val6, val7, val8});
 	for (int i = 0; i < vetor_num.size(); i++)
 	{
 		if (vetor_num[i]!= 0 or vetor_num[i] != 1)
 		{
 			cout << "S" << endl;
 		}
 	}
 	cout << F << endl;
 	return 0;
 }