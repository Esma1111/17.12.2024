#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{//0-100 (dahil) arasýnda 500 adet rastgele float veri üretiniz,
// uygun bir dizi yapýsý üzerinde saklayýnýz, ekrana yazdýrýnýz.
int veri[500];
srand(time(NULL));
for(int i=0; i<500; i++)
{
veri[i]= rand()%(100-0+1)+0;	//diziyi tanýmladýk
cout<<veri[i]<<endl;

}	
	system ("pause");
	return 0;
}
