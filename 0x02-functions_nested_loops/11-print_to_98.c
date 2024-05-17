#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>


void print_to_98(int n)
{
	int i;
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d",i);
			if (i != 98)
			{
				putchar(',');
			    putchar(' ');
			}	
			
		}
		
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d",i);
			if (i != 98)
			{
				putchar(',');
			    putchar(' ');
			}
		}
		
	}
	else
	    printf("%d",n);

	putchar('\n');             
}
