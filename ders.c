#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10 /*SIZE ile fonksiyonun kaç kez çalýþacaðýný söyleyeceðiz*/

void atamayapma(int dizi[])
{
	for (int i = 0; i < SIZE; i++)
		/*sýze burada 10 kez olacaðýný söylemek için */
	{
		dizi[i] = 1 + rand() % 100;//1-100 arasýnda rasgele sayýlarla oluþturmak için 
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