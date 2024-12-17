#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{//	6.	0-1(dahil) arasýnda 500 adet rastgele float veri üretiniz,
// uygun bir dizi yapýsý üzerinde saklayýnýz, ekrana yazdýrýnýz.


float veri[500];
srand(time(NULL));
for(int i=0; i<500; i++)
{
veri[i]= (float)rand()/RAND_MAX;	
cout<<veri[i]<<endl;

}	
	system ("pause");
	return 0;
}
