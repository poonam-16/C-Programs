//Print probabilities using binomial distribution with parameters n & p
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i,n,r,nfact=1,rfact=1,dfact=1,nCr;
	float p,result;
	printf("Enter any non zero positive integer n : ");
	scanf("%d",&n);
	printf("Enter any non zero positive number p : ");
	scanf("%f",&p);
	for(i=1;i<=n;i++)
	{
		nfact*=i;
	}
	for(r=0;r<=n;r++)
	{
		rfact = 1;
		for(i=1;i<=r;i++)
		{
			rfact*=i;
		}
		dfact = 1;
		for(i=1;i<=n-r;i++)
		{
			dfact*=i;
		}

		nCr = (nfact)/(rfact*dfact);
		result = nCr*pow(p,r)*pow(1-p,n-r);
		printf("\nProbability when x = %d is %0.4f",r,result);
	}
	return 0;
}
