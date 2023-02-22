#include<iostream>
using namespace std;

int main()
{
	long long N;
	long K;
	cin >> N >> K;
	long long *a = new long long [K];
	for (int i = 0; i < K; i++)
	{
		cin >> a[i];
	}
	int min;
	min = N % a[0];
	int tip = 1;
	int amount = N/a[0];
	for (int i = 1; i < K; i++)
	{
		if (N % a[i] < min)
		{
			min = N % a[i];
			amount = N / a[i];
			tip = i + 1;
		}
	}
	cout << tip << " " << amount;
	delete [] a;
	return 0;
}
