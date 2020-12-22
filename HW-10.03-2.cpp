#include <iostream>
#include <stdarg.h>

double srednee(int x, ...) {
	va_list args;
	va_start(args, x);
	int a = x;
	double total = 0;
	int k = 0;
	while (a != -1.0) {
		total += a;
		++k;
		a = va_arg(args, int);
	}
	va_end(args);
	if (k)
	{
		total /= k;
		return total;
	}
	return 0;
}
int even_count(int N, int x, ...) {
	va_list args;
	va_start(args, x);
	int total = x;
	int k = 0;
	while (N--) {
		if (total % 2 == 0) ++k;
		total = va_arg(args, int);
	}
	va_end(args);
	return k;
}

int main()
{
	std::cout << srednee(4, 5, 1, 3, 0, 6, 3, -1) << std::endl;
	std::cout << even_count(7, 1, 2, 3, 4, 3, 2, 1) << std::endl;
}