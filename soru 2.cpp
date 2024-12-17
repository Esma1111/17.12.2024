#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{//25-35 (dahil) arasýnda 500 adet rastgele tamsayý veri üretiniz, uygun bir dizi yapýsý üzerinde saklayýnýz, ekrana yazdýrýnýz.

int sayilar[500];

for(int i=0; i<500; i++)
{
	sayilar[i]= rand ()%(35-25+1)+25;
	cout<<sayilar[i]<<endl;
}





system("pause");	
return 0;	
}
