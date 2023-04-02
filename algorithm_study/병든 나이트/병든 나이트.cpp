#include <iostream>
using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int N, M;    // 세로(N), 가로(M)
	cin >> N >> M;
	
	if (N == 1)
		cout << 1 << endl;
	else if (N == 2)
		cout << min((M + 1) / 2, 4) << endl;
	else if (M < 7)
		cout << min(M, 4) << endl;
	else
		cout << M - 7 + 5 << endl;
}
