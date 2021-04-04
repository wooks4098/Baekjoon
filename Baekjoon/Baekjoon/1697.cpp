#include <iostream>
using namespace std;

int main()
{
	int N, K, Count;
	cin >> N >> K;
	Count = 0;
	do
	{
		if (N * 2 <= K +1)
		{
			N *= 2;
			Count++;
		}
		else if (N > K)
		{
			N--;
			Count++;
		}
		else if (N < K)
		{
			N--;
			Count++;
		}
	} while (N != K);
	cout << Count;

	return 0;
}