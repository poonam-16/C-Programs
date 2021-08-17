//Accept n - pairs of observation (x,y) and calculate correlation co-efficient
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i=0,n;
	float r,sum = 0,sumx = 0, sumx2 = 0, avgx, varx, sdx,sumy = 0,sumy2 = 0,avgy,vary,sdy,cov;
	printf("Enter no. of observations : ");
	scanf("%d",&n);
	float x[n], y[n];
	printf("\nEnter x observations :");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("\nEnter y observations :");
	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}
	while(i<n)
	{
		sumx = sumx + x[i];
		sumx2 = sumx2 + pow(x[i],2);
		sumy = sumy + y[i];
		sumy2 = sumy2 + pow(y[i],2);
		i = i + 1;
	}
	avgx = sumx/n;
	varx = (sumx2/n) - pow(avgx,2);
	sdx = sqrt(varx);
	
	avgy = sumy/n;
	vary = (sumy2/n) - pow(avgy,2);
	sdy = sqrt(vary);
	for(i=0;i<n;i++)
	{
		sum = sum + (x[i]-avgx)*(y[i]-avgy);
	}
	cov = sum/n;
	r = cov/(sdx*sdy);
	printf("\nMean of x : %0.2f", avgx);
	printf("\nMean of y : %0.2f", avgy);
	printf("\nStandard Deviation of x : %0.2f", sdx);
	printf("\nStandard Deviation of y : %0.2f", sdy);
	printf("\nCovariance between x & y : %0.2f",cov);
	printf("\nCorrelation Co-efficient : %0.5f",r);
	return 0;
}
