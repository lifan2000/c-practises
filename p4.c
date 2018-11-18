#include<stdio.h>
#include<math.h>
 
int main() 
{
	double x0, x, f, fd;
	for (x0 = 1.5; fabs(f / fd) >= 1e-5; x = x0-f/fd);
	{
		f = 2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6;
		fd = 6 * x0 * x0 - 8 * x0 + 3;
		x0 = x;
	} 
	printf("%f", x);
	return 0;
}
