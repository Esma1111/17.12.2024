#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{//	6.	0-1(dahil) aras�nda 500 adet rastgele float veri �retiniz,
// uygun bir dizi yap�s� �zerinde saklay�n�z, ekrana yazd�r�n�z.


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
