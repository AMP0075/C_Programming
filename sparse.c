#include<stdio.h>
void add(int a[][3], int b[][3], int c[][3])
	{
	c[0][0]=a[0][0]; c[0][1]=a[0][1];
	int af=1,al=a[0][2],bf=1,bl=b[0][2],l=1,k;
	while(af<=al && bf<=bl)
		{
		if(a[af][0]<b[af][0])
			{
			c[l][0]=a[af][0];
			c[l][1]=a[af][1];
			c[l][2]=a[af][2];
			af++; l++;
			}
		else if(a[af][0]>b[af][0])
			{
			c[l][0]=b[bf][0];
			c[l][1]=b[bf][1];
			c[l][2]=b[bf][2];
			bf++; l++;
			}
		else
			{
			if(a[af][1]<b[bf][1])
				{
				c[l][0]=a[af][0];
				c[l][1]=a[af][1];
				c[l][2]=a[af][2];
				af++; l++;
				}
			else if(a[af][1]>b[af][1])
				{
				c[l][0]=b[bf][0];
				c[l][1]=b[bf][1];
				c[l][2]=b[bf][2];
				bf++; l++;
				}
			else
				{
				k=a[af][2]+b[bf][2];
				if(k!=0)
					{
					c[l][0]=b[bf][0];
					c[l][1]=b[bf][1];
					c[l][2]=k;
					l++;
					}
				bf++; af++;
				}
			}
		}
	c[0][2]=l-1;
	}
void main()
	{
	int a[10][3],b[10][3],c[20][3],i,j;
	printf("enter first sparse matrix in tuple form :\n");
	for(i=0;i<5;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("enter second sparse matrix in tuple form :\n");
	for(i=0;i<6;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	c[0][0]=a[0][0];
	c[0][1]=a[0][1];
	add(a,b,c);
	printf("resultant \n\n");
	for(i=0;i<c[0][2];i++)
		{
		for(j=0;j<3;j++)
			printf("%d ",c[i][j]);
		printf("\n");
		}
	}
