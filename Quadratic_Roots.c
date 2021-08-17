#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,froot,sroot,dis,img;
	printf("Enter value of a : ");
	scanf("%f", &a);
	printf("\nEnter value of b : ");
	scanf("%f", &b);
	printf("\nEnter value of c : ");
	scanf("%f", &c);
	dis = pow(b,2) - (4*a*c);
	if(dis > 0)
	{
		froot = (-b + sqrt(dis))/(2*a);
		sroot = (-b - sqrt(dis))/(2*a);
		printf("\nRoots of %0.2fx^2 + %0.2fx + %0.2f are %0.2f and %0.2f",a,b,c,froot, sroot);
	}
	else if(dis < 0)
	{
		froot = sroot = -b/(2*a);
		img = sqrt(-dis)/(2*a);
		printf("\nRoots of %0.2fx^2 + %0.2fx + %0.2f are %0.2f + %0.2f i and %0.2f - %0.2f i",a,b,c,froot, img, sroot,img);
	}
	else
	{
		froot = -b/(2*a);
		printf("\nOnly root of %0.2fx^2 + %0.2fx + %0.2f is %0.2f",a,b,c,froot);
	}
	return 0;
}
