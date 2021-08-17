/* Accept Binomial Parameters n & p
Calculate & print bino probability distr using recurrence Probability formula
P(x+1) = [(n-x)/(x+1)]*(p/q)*P(x) : x = 0,1,2, ..... (n-1) */
#include<stdio.h>
#include<conio.h>
main()
{
	int n,y, x = 0;
	float p, result;
	printf("Enter any non zero positive integer n : ");
	scanf("%d",&n);
	printf("Enter any non zero positive number p : ");
	scanf("%f",&p);
	result = pow(1-p,n);
	printf("\nP(X = 0) is : %0.2f",result);
	for(x=0;x<=n-1;x++)
	{
		result = (float)(n-x)/(x+1)*(p/(1-p))*result;
		printf("\nP(x + 1) when x = %d is : %0.2f",x,result);
	}
	return 0;
}
