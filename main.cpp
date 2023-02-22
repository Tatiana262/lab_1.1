#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	long long N;
	long K;
	cin >> N >> K;
	long long *a = new long long [K];
	for (int i = 0; i < K; i++)
	{
		cin >> a[i];
	}
	long long min;
	min = N % a[0];
	long tip = 1;
	long long amount = N/a[0];
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
