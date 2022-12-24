#include<stdio.h>

int main()
{
	for (int i =1; i<=100; i++)
	{
		if (i % 2 == 0 && i % 3 == 0 && i % 5== 0)
			printf("%d", i);


	}
	printf("\nSayilari Girin = %d",i);
	return 0;

}
