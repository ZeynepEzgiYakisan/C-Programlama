#include<stdio.h>

int main()
{
	/*
	kullanýcýdan 1 -100 arasýnda sayý isteyelim 
	doðruluðunu konrol etsin yanlýþ girdiyse doðru girene kadar kontrol etsin 
	2 , 3 , 5 ' e tam bölünüp bölünmediðini kontrol etsin 
	*/
	int sayi = 0;
	do
	{
		printf("1-100 arasýnda sayi giriniz");
		scanf("%d", &sayi);
		
	} 
	while (sayi < 1 || sayi>100);
	
	if (sayi % 2 == 0)
	{
		printf("Sayiniz 2 ile tam bölünüyor");
	}
	else if (sayi % 3 == 0)
	{
		printf("Sayiniz 3 ile tam bölünüyor");
	}
	else if (sayi % 5 == 0)
	{
		printf("Sayiniz 5 ile tam bölünüyor");
	}
	else
	{
		printf("Sayiniz 2,3,5 ile tam bölünmüyor");
	}


	return 0;
}