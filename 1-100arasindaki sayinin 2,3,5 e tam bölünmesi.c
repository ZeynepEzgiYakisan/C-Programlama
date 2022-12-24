#include<stdio.h>

int main()
{
	/*
	kullanıcıdan 1 -100 arasında sayı isteyelim 
	doğruluğunu konrol etsin yanlış girdiyse doğru girene kadar kontrol etsin 
	2 , 3 , 5 ' e tam bölünüp bölünmediğini kontrol etsin 
	*/
	int sayi = 0;
	do
	{
		printf("1-100 arasında sayi giriniz");
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
