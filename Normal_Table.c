//Print standard normal probability table o to 3.5
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (1/sqrt(2*3.142))*(exp(-0.5*pow(x,2)))

float snv(float a, float b, int n)
{
	int i ;
	float h, sum=0, sum1=0, sum2=0, total;
	h = (b-a)/n;
	sum = f(a) + f(b);
	for(i = 1; i <= n -1 ; i = i + 2 )
	{
		sum1 = sum1 + f(a + i*h);
	}
	for(i = 2; i <= n - 2 ; i = i +2 )
	{
		sum2 = sum2 + f(a + i*h);
	}
	sum = sum + (4*sum1) + (2*sum2);
	total = (h/3)*sum ;
	return(total);
}

main()
{
	int n;
	float j, k, a,b, result;
	printf("z\t");
	for( k = 0.0 ; k <= 0.09 ; k = k + 0.01)
	{
		printf("%4.2f\t",k);
	}
	printf("\n\n");
	for( j = 0.00 ; j <= 3.4 ; j = j + 0.1 )
	{
		printf("%0.1f\t",j);
	for( k = 0.0 ; k <= 0.09 ; k = k + 0.01)
	{
		result = snv(0, j+k , 20) ;
		printf("%0.4f\t",result);
	}
	printf("\n");
	}
	return 0;
}
