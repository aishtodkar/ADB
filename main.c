

#include"header.h"

void main()
{
	float *l,*b,*r;
	int op;
	printf("Options:\n1.Area of Rect.\n2.Area of circle\n");
	scanf("%d",&op);
	switch(op)
	{
		case RECT:
			printf("Enter the length and breadth of rectangle:\n");
			l=malloc(sizeof(int));
			b=malloc(sizeof(int));
			scanf("%f%f",l,b);
			cal_area_rect(l,b);
				break;
		case CIRCLE:
			printf("Enter the radius of circle:\n");
			r=malloc(sizeof(int));
			scanf("%f",r);
			cal_area_circle(r);
				break;
		default:
			printf("Wrong option\n");
	}
	printf("Result=%.2f\n",res);
}
