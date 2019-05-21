#include <iostream>
int ShowPrimeNum(long long n)
{
	int max=0, tmp=0;
	long long x = n;

	for (long long i = 2; i*i <= n;) {
		if (x % i == 0) {
			tmp = i;
			std::cout << tmp<<"   ";
			if (max <= tmp) {
				max = i;
			}
			x /= i;
		}
		else {
			i++;
		}
	}
	return max;
}