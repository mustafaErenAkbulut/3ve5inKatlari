#include <stdio.h>
#include <stdlib.h>

/* 3 ve 5 'in katlarını bulan fonksiyon. */

int ucbes(int top) 
{
	int j;
	
	for(j=1;j<1000;j++)
	{	
		if(j%3==0 || j%5==0)
		{
			top=top+j;
		}
		
	}
	return top;
}

/* 1000'in altındaki 3 veya 5 'in tüm katlarının toplamını bulacak program. */

int main()
{
	int ata;
	printf("******************************************************************************************");
	printf("\n\n");
	printf("\n1000'in altindaki 3 veya 5 'in tum katlarinin toplamini bulmak icin lutfen 0 ve Enter a basiniz... ");
	scanf("%d" ,&ata); // Normalde 0 'ı kendimiz de atayabilirdik ben kullanıcının yapmasını istedim.
	
	
	
	printf("\n1000'in altindaki 3 veya 5 'in tum katlarinin toplami = %d dir.", ucbes(ata)); // Fonksiyonumuzdan sonucu yazdırdık.
	printf("\n\n");
	printf("\n******************************************************************************************\n\n");
	
	printf("Cikmak icin herhangi bi tusa basiniz\n\n"); // Türkçe açıkladım.
	
	system("pause"); // Program hemen kapanmasın diye koydum.
	return 0;
}
