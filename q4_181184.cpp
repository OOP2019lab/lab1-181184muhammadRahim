#include<iostream>
using namespace std;
void ascend(int *ar1,int size)
{
	int max = 0, index = 0, size1 = size;
	for (int a = 0; a < size1; a++)
	{
		for (int i = 0; i < size; i++)
		{
			if (max < ar1[i])
			{
				max = ar1[i];
				index = i;
			}
		}
		swap(ar1[index], ar1[size-1]);
		max = 0;
		size--;
	}
	cout << "sorted array=" << endl;
	for (int i = 0; i < size1; i++)
	{
		cout << ar1[i] << " " << endl;
	}
}
int main()
{
	cout << "how many numbers do you want to enter?" << endl;
	int N = 0;
	cin >> N;
	int *ar1 = new int[N];
	//int ar1[100];
	for (int i = 0; i < N; i++)
	{
		cout << "input number?" << endl;
		cin >> ar1[i];
	}
	for (int i = 0; i < N; i++)
	{
		cout << ar1[i]<<" ";
	}
	cout << endl;
	ascend(ar1, N);
	delete[] ar1;

	system("pause");
}