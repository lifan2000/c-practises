#include <stdio.h>
int main( )
{
		int x,y;
		printf("please input value of x:\n");
		scanf("%f", &x);
		if (x>=10) {
				y=3*x-1;
		} else {
				if (x<1) { 
						y=x;
				} else {
						y=2*x-1;
				}

		}

		printf("x=%f,y=%f\n",x,y);
		return 0;
}
