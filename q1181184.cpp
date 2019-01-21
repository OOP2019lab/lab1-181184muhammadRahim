#include<iostream>
using namespace std;
int main()
{
	int N = 0;
	cin >> N;
	N = N * 2;
	int x1 = N;
	bool flag = false;
	for (int i = 1; i <= N-1; i++)
	{
		int r = N - (i * 2);
		for (int x = 1; x <= N; x++)
		{
			if (x == (i + 2) && flag==false)
			{
				for (int b = 0; b < r; b++)
				{
					cout << "*";
				}
				flag = true;
			}
			else
			{
				cout << i;
			}
		}
		cout << endl;
		flag = false;
		
	}
	system("pause");
}