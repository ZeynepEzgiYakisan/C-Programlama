#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10 /*SIZE ile fonksiyonun ka� kez �al��aca��n� s�yleyece�iz*/

void atamayapma(int dizi[])
{
	for (int i = 0; i < SIZE; i++)
		/*s�ze burada 10 kez olaca��n� s�ylemek i�in */
	{
		dizi[i] = 1 + rand() % 100;//1-100 aras�nda rasgele say�larla olu�turmak i�in 
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