//Enter any number & find range 
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int n,i;
	float x[n],max = -9999.0,min = 9999.0,range;
	printf("Enter number of observations : ");
	scanf("%d",&n);
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
	range = max - min;
	printf("\nMaximum is %0.2f",max);
	printf("\nMinimum is %0.2f",min);
	printf("\nRange of given %d numbers is %0.2f",n,range);
	return 0;
}
