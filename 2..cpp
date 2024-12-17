#include<iostream>
#include<locale.h>
#include<iomanip>
using namespace std;
int main()
{
	setlocale (LC_ALL,("Turkish"));
int matrisA[3][3],matrisB[3][3],toplam[3][3];
int carpim[3][3];
for(int i=0; i<3; i++)
{
	for(int j=0; j<3; j++)
	{
	cout<<"A matrisi için	"<<i+1 <<". satýr  "<< j+1<<".sutün elemanýný girin:"<<endl;
	cin>>matrisA[i][j];	
		
	}
	
	}	
for(int i=0; i<3; i++)
{
	for(int j=0; j<3; j++)
	{
	cout<<"B matrisi için	"<<i+1 <<". satýr  "<< j+1<<".sutün elemanýný girin:"<<endl;
	cin>>matrisB[i][j];	
		
	}
	}		
cout<<"A matrisi="<<endl;	
for(int i=0; i<3; i++)
{
	for(int j=0; j<3; j++)
	{
	
	cout<<setw(5)<<matrisA[i][j];	
		
	}
	cout<<endl;
	}			
cout<<"B matrisi="<<endl;	
for(int i=0; i<3; i++)
{
	for(int j=0; j<3; j++)
	{
	
	cout<<setw(5)<<matrisB[i][j];	
		
	}
	cout<<endl;
	}		
	cout<<"C=A+B MATRÝSÝ="<<endl;
for(int i=0; i<3; i++)
{
	for(int j=0; j<3; j++)
	{
	toplam[i][j]=matrisA[i][j]+matrisB[i][j];
		
	cout<< setw(5)<<toplam[i][j];	
	}
	cout<<endl;
	}					
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
    carpim[i][j] = 0;
    for (int k = 0; k < 3; k++) {
    carpim[i][j] += matrisA[i][k] * matrisB[k][j];
    }
    }
    }	
 cout << "C = A * B matrisi=" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << carpim[i][j] << " ";
        }
        cout << endl;
    }	
	
	
	
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
