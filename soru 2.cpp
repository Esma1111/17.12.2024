#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{//25-35 (dahil) aras�nda 500 adet rastgele tamsay� veri �retiniz, uygun bir dizi yap�s� �zerinde saklay�n�z, ekrana yazd�r�n�z.

int sayilar[500];

for(int i=0; i<500; i++)
{
	sayilar[i]= rand ()%(35-25+1)+25;
	cout<<sayilar[i]<<endl;
}





system("pause");	
return 0;	
}
