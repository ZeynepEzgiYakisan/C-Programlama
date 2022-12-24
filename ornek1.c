#include<stdio.h>

int faktoriyelhesap(faktorsayi)
{
	if (faktorsayi == 1)

	{
		return 1;
	
	}
	else
	{
		return faktorsayi * faktoriyelhesap(faktorsayi - 1);
	}
}

int main()
{
	int sayi = 0;

	printf("Faktöriyelenin hesaplanmasýný istediðiniz sayi giriniz");
	scanf("%d",&sayi);

	printf("Faktöriyel hesabýnýn sonucu %d ", faktoriyelhesap(sayi));
	return 0;

}




