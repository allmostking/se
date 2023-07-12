#include<stdio.h>

main()
{
	int a=50,b=80,c=600,d=1000;
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is max");	
			}
			else
			{
				printf("D is max");
			}
		}
		else
		{
			if(b>c)
			{
				if(b>d)
				{
					printf("B is max");
				}
				else
				{
					printf("D is max");
				}
			}
			else
			{
				if(d>c)
				{
					printf("D is max");
				}
				else
				{
					printf("C is max");
				}
			}
		}
	}
}
