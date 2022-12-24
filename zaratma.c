#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10 /*SIZE ile fonksiyonun kaç kez calisacagini söyleyecegiz*/

void atamayapma(int dizi[])
{
	for (int i = 0; i < SIZE; i++)
		/*size burada 10 kez olacagani söylemek için */
	{
		dizi[i] = 1 + rand() % 100;//1-100 arasinda rasgele sayilarla olusturmak için 
	}
}
void yazdir(int dizi1[])
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d sayisi = %d\n", i + 1, dizi1[i]);
	}

}
int main()
{
	int sayi[SIZE] = { 0 };
	srand(time(NULL));
	atamayapma(sayi);
	yazdir(sayi);
	return 0;
}
