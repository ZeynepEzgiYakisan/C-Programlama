#include<stdio.h>

int main()
{
	int sayi= 0;
	int fact = 1;

	printf("Faktoriyel istediðiniz sayiyi giriniz:");
	scanf("%d", &sayi);
	
	while (sayi < 1 || sayi>100);

	for (int i = sayi; i >= 1; i--)
	{
		fact = fact * i;
	}
	printf("%d", fact);

	return 0;
}







