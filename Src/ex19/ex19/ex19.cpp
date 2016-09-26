
#include <iostream>

using namespace std;

bool prime(int n)
{
	if (n <= 3)
		return true;
	if (n % 2 == 0)
		return false;
	for (int i = 3; i < (n / 2); i += 2)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int gcd(int p, int q)
{
	if (q == 0) return p;
	return gcd(q, p%q);
}

void main()
{
// 	for (int i = 1; i < 21; ++i)
// 	{
// 		if (prime(i))
// 			cout << i << endl;
// 	}
//	cout << gcd(8, 12) << endl;



}
