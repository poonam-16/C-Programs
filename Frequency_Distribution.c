//Frequency Distribution
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i,n,k,w;
	float min = 9999.0,max = -9999.0;
	printf("Enter no. of observations : ");
	scanf("%d",&n);
	float x[n];
	k = 1 + 3.223*log10(n);
	k = k + 1;
	printf("\nEnter values : ");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
		if(x[i]>max)
		{
			max = x[i];
		}
		if(x[i]<min)
		{
			min = x[i];
		}
	}
	w = (max-min)/k;
	w = w + 1;
	int j,f[k], lc[k], uc[k];
	for(i=0;i<k;i++)
	{
		f[i] = 0;
	}
	lc[0] = (int)min;
	uc[0] = lc[0] + w;
	for(i=1;i<=k-1;i++)
	{
		lc[i] = uc[i-1];
		uc[i] = lc[i] + w;
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=k-1;j++)
		{
			if(x[i] >= lc[j] && x[i] < uc[j])
			{
				f[j] = f[j] + 1;
			}
		}
	}
	printf("\nClass Interval  Frequency");
	for(j=0;j<=k-1;j++)
	{
		printf("\n%d - %d\t\t %d",lc[j],uc[j],f[j]);
	}
	return 0;
}
