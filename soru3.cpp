#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{//3.	Ortalamasý 25±5 aralýðýnda olan 10-35 (dahil) arasýnda 500 adet rastgele tamsayý veri üretiniz, uygun bir dizi yapýsý üzerinde saklayýnýz, ekrana yazdýrýnýz.

srand(time(NULL));	
float ort;
float toplam=0;		
int veri[500];
do{
	
for (int i=0; i<500; i++)	
{
veri[i]= rand()%(35-10+1)+10;
	
}
for (int i=0; i<500; i++)	
{
toplam+=veri[i];
}

ort= toplam/500;
}
while (ort<30 && ort>20);
{

for (int i=0; i<500; i++)	
cout<<veri[i]<<endl;
		

}






system("pause");
return 0;
}
