//Solve integral 2 to 3 of (2x+3) dx using simpsons 1/3 rule
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x)  exp(x) - 7
main()
{
	float a,b,fa,fb,f,h,fe,fo,sum = 0,sum1 = 0,sum2 = 0,total;
	int i,n;
	printf("Enter no. of sub-intervals : ");
	scanf("%d",&n);
	printf("\nEnter lower limit : ");
	scanf("%f",&a);
	printf("\nEnter upper limit : ");
	scanf("%f",&b);
	h = (b-a)/n;
	sum = f(a) + f(b);
	for(i=1;i<n;i=i+2) //odd terms
	{
		sum1 = sum1 + f(a+i*h);
	}
	for(i=2;i<n;i=i+2) //even terms
	{
		sum2 = sum2 + f(a+i*h);
	}
	sum = sum + 4*sum1 + 2*sum2;
	total = (h/3)*sum;
	printf("\nThe value of integral is: %0.2f",total);
	return 0;
}
