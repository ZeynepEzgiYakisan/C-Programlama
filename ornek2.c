#include<stdio.h>

int main()
{
	/*
	kullan�c�dan 1 -100 aras�nda say� isteyelim 
	do�rulu�unu konrol etsin yanl�� girdiyse do�ru girene kadar kontrol etsin 
	2 , 3 , 5 ' e tam b�l�n�p b�l�nmedi�ini kontrol etsin 
	*/
	int sayi = 0;
	do
	{
		printf("1-100 aras�nda sayi giriniz");
		scanf("%d", &sayi);
		
	} 
	while (sayi < 1 || sayi>100);
	
	if (sayi % 2 == 0)
	{
		printf("Sayiniz 2 ile tam b�l�n�yor");
	}
	else if (sayi % 3 == 0)
	{
		printf("Sayiniz 3 ile tam b�l�n�yor");
	}
	else if (sayi % 5 == 0)
	{
		printf("Sayiniz 5 ile tam b�l�n�yor");
	}
	else
	{
		printf("Sayiniz 2,3,5 ile tam b�l�nm�yor");
	}


	return 0;
}