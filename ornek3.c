#include<stdio.h>
#define SIZE 1
void kucukbul(int dizi[],int *kckptr)
{
	
	*kckptr = &dizi[1];

	for (int i = 1; i < SIZE; i++)
	{
		if (dizi[i] < *kckptr)//* koyduk ��nk�  i�indeki de�eri kontrol edice�iz 
		{
			kckptr = &dizi[i];
			
		}
		
	 
		printf("en k�c�k deger adresi %p , degeri %d\n", kckptr, *kckptr);

	}
}

int main()
{
	int sayi[SIZE] = { 1,5,3,9,12 };

	kucukbul(sayi);
	return 0;
}