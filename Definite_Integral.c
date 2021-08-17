//Solve integral 2 to 3 of (2x+3) dx
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,fa,fb,f,h,sum = 0,sum1 = 0,total;
	int i,n;
	printf("Enter no. of sub-intervals : ");
	scanf("%d",&n);
	printf("\nEnter lower limit : ");
	scanf("%f",&a);
	printf("\nEnter upper limit : ");
	scanf("%f",&b);
	h = (b-a)/n;
	fa = (2*a) + 3;
	fb = (2*b) + 3;
	sum = fa + fb;
	for(i=1;i<n;i++)
	{
		f = 2*(a+(i*h)) + 3;
		sum1 = sum1 + f;
	}
	sum = sum + 2*sum1;
	total = (h/2)*sum;
	printf("\nThe value of integral is: %0.2f",total);
	return 0;
}
