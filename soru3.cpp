#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{//3.	Ortalamas� 25�5 aral���nda olan 10-35 (dahil) aras�nda 500 adet rastgele tamsay� veri �retiniz, uygun bir dizi yap�s� �zerinde saklay�n�z, ekrana yazd�r�n�z.

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
