#include<stdio.h>
#define SIZE 1
void kucukbul(int dizi[],int *kckptr)
{
	
	*kckptr = &dizi[1];

	for (int i = 1; i < SIZE; i++)
	{
		if (dizi[i] < *kckptr)//* koyduk çünkü  içindeki deðeri kontrol ediceðiz 
		{
			kckptr = &dizi[i];
			
		}
		
	 
		printf("en kücük deger adresi %p , degeri %d\n", kckptr, *kckptr);

	}
}

int main()
{
	int sayi[SIZE] = { 1,5,3,9,12 };

	kucukbul(sayi);
	return 0;
}