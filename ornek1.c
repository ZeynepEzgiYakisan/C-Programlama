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

	printf("Fakt�riyelenin hesaplanmas�n� istedi�iniz sayi giriniz");
	scanf("%d",&sayi);

	printf("Fakt�riyel hesab�n�n sonucu %d ", faktoriyelhesap(sayi));
	return 0;

}




