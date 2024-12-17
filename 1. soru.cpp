#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<locale.h>


using namespace std;
int main()
{
setlocale (LC_ALL,("Turkish"));
	float ayciro[5][12];
	float yillik_ciro1=0;
	float yillik_ciro2=0;
	float yillik_ciro3=0;
	float yillik_ciro4=0;
	float yillik_ciro5=0;
	float ortciro[5];
	for(int i=0; i<5; i++)
{
	for(int j=0;j<12;j++)	
{
ayciro[i][j]= rand()%(100-5000)+100;//Rastgele ciro atýyoruz
cout<<ayciro[i][j]<<endl;
}
}

for(int i=0;i<12;i++)
{	
yillik_ciro1+= ayciro[0][i];
}

for(int i=0;i<12;i++)
{
		
yillik_ciro2+= ayciro[1][i];	
}

for(int i=0;i<12;i++)
{	
yillik_ciro3+= ayciro[2][i];	
}

for(int i=0;i<12;i++)
{	
yillik_ciro4+= ayciro[3][i];	
}
	
for(int i=0;i<12;i++)
{	
yillik_ciro5+= ayciro[4][i];	
}


ortciro[0]=yillik_ciro1/12;
ortciro[1]=yillik_ciro2/12;
ortciro[2]=yillik_ciro3/12;
ortciro[3]=yillik_ciro4/12;
ortciro[4]=yillik_ciro5/12;


int yil;
cout<<" yýl girin:";
cin>> yil;
switch(yil)
{
case 1:

for(int i=0;i<12;i++)
{
if (ortciro[0]<ayciro[0][i])	
cout<<i+1<<". Ay"<<"	yýl ortalamasýndan yüksek ciroya sahip"<< endl;
}	
break;

case 2:
for(int i=0;i<12;i++)
{
if (ortciro[1]<ayciro[1][i])	
cout<<i+1<<". Ay"<<"	yýl ortalamasýndan yüksek ciroya sahip"<< endl;
}	
break;

case 3:
for(int i=0;i<12;i++)
{
if (ortciro[2]<ayciro[2][i])	
cout<<i+1<<". Ay"<<"	yýl ortalamasýndan yüksek ciroya sahip"<< endl;
}	
break;	

case 4:
for(int i=0;i<12;i++)
{
if (ortciro[3]<ayciro[3][i])	
cout<<i+1<<". Ay" <<"	yýl ortalamasýndan yüksek ciroya sahip"<< endl;
}	
break;
	
case 5:
for(int i=0;i<12;i++)
{
if (ortciro[4]<ayciro[4][i])	
cout<<i+1<<". Ay"<<"	yýl ortalamasýndan yüksek ciroya sahip"<< endl;
}	
break;	
default:
cout<<"tanýmlý olmayan bir yýl girdiniz"<<endl;
}

	
	
	

		








system("PAUSE");
return 0;	
} 

