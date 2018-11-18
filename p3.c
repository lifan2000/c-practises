#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,d1,d2,d3,d4;
	int r=1;
	printf("Please input thevalue of x:\n");
	printf("Please input thevalue of y:\n");
	d1=(x+2)*(x+2)+(y-2)*(y-2);
	d2=(x-2)*(x-2)+(y-2)*(y-2);  
	d3=(x+2)*(x+2)+(y+2)*(y+2);
	d4=(x-2)*(x-2)+(y+2)*(y+2);
	scanf("%f%f",&x,&y);
	if (d1<r||d2<r||d3<r||d4<r)
		printf("The longtitude is 14 m.\n");
	else
		printf("The longtitude is 0 m.\n");
	return 0;
}
