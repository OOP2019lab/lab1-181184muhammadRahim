#include<iostream>
using namespace std;
void create(int *ptr,int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> *ptr;
	}
}
void ascend(int *ar1, int size)
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
		swap(ar1[index], ar1[size - 1]);
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
	int N = 0;
	cin >> N;
	int *ptr = new int[N];
	create(ptr,N);
	ascend(ptr, N);
	system("pause");
}