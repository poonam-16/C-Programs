//Calculate average marks for 100 students & print highest in all subjects and highest average
#include<stdio.h>
#include<conio.h>
struct stud
{
	char name[20];
	float m1;
	float m2;
	float m3;
	float avg;
}x[100];
main()
{
	int i,n, l1,l2,l3,la;
	float h1 = 0,h2 = 0,h3 = 0,ha = 0;
	printf("Enter number of student\'s : ");
	scanf("%d",&n);
	printf("\n");
	fflush(stdin);
	for(i=1;i<=n;i++)
	{
		printf("Enter student\'s name : ");
		gets(x[i].name);
		printf("\nEnter marks in first subject : ");
		scanf("%f",&x[i].m1);
		printf("\nEnter marks in second subject : ");
		scanf("%f",&x[i].m2);
		printf("\nEnter marks in third subject : ");
		scanf("%f",&x[i].m3);
		printf("\n");
		fflush(stdin);
		x[i].avg = (x[i].m1 + x[i].m2 + x[i].m3)/3;
		if(x[i].m1 >= h1)
		{
			h1 = x[i].m1;
			l1 = i;
		}
		if(x[i].m2 >= h2)
		{
			h2 = x[i].m2;
			l2 = i;
		}
		if(x[i].m3 >= h3)
		{
			h3 = x[i].m3;
			l3 = i;
		}
		if(x[i].avg > ha)
		{
			ha = x[i].avg;
			la = i;
		}
	}
	printf("\tName \t\t  Subject1 \t Subject2 \t Subject3  \tAverage Marks");
	for(i=1;i<=n;i++)
	{
		printf("\n%15s \t%7.2f \t%7.2f \t%7.2f \t%7.2f\n",x[i].name,x[i].m1,x[i].m2,x[i].m3,x[i].avg);
	}
	printf("\n%s scored highest in subject 1 with %0.2f marks",x[l1].name,x[l1].m1);
	printf("\n%s scored highest in subject 2 with %0.2f marks",x[l2].name,x[l2].m2);
	printf("\n%s scored highest in subject 3 with %0.2f marks",x[l3].name,x[l3].m3);
	printf("\nOverall Highest Average Marks is scored by %s with %0.2f marks",x[la].name,x[la].avg);
	return 0;
}
