//Accept parameter (lambda) of Poisson Distribution, calculate & print first 8 terms
// of poisson distribution
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int x=0,fact=1;
	float a,b,lambda,result;
	printf("Enter value of lambda : ");
	scanf("%f", &lambda);
	result = exp(-1*lambda);
	printf("\nP(x = %d) = %0.2f",x, result);
	a = exp(-1*lambda);
	for(x=1;x<=8;x++)
	{
		fact*=x;
		b = pow(lambda,x);
		result = a*b/fact;
		printf("\nP(x = %d) = %0.2f",x, result);
	}
	return 0;
}
