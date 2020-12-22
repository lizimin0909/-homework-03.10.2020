#include <iostream>
#include <cmath>
struct ans
{
	bool b = 0;
	double md = 0;
};
ans fun(double a, double b) {
	double mid = (a + b) / 2.0;
	double k = 2.0 * mid - 4.0;
	int eps = 1e-6;
	while ((k<-eps || k>eps) && (a - b<-eps || a - b>eps))
	{
		if (k > 0) 
			b = mid;
		else 
			a = mid;
		mid = (a + b) / 2.0;
		k = 2.0 * mid - 4.0;
	}
	ans g;
	if (k >= -eps && k <= eps) g.b = 1, g.md = mid;
	return g;
}
int main()
{
	double a, b;
	std::cout << "input a b:";
	std::cin>> a >> b;
	ans h = fun(a, b);
	if (h.b == 1) 
		std::cout << h.md << std::endl;
	else 
		std::cout << "No solution!" << std::endl;
	return 0;
}