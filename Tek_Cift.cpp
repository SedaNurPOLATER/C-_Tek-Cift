#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int sayi, tekAdet=0, ciftAdet=0, tekToplam=0, ciftToplam=0; //De�i�kenler tan�mland�

	for(int i=1; i<=10; i++)
	{
		cout<<i<<". Sayi : ";
		cin>>sayi;
		
		if(sayi%2==1)
		{
			tekAdet++;
			tekToplam+=sayi;
		}
		else
		{
			ciftAdet++;
			ciftToplam+=sayi;
		}
		
	}
	cout<<endl;
	cout<<"Girilen Tek Sayi Adeti : "<<tekAdet<<endl;
	cout<<"Girilen Tek Sayilarin Toplami : "<<tekToplam<<endl;
	cout<<"Girilen �ift Sayi Adeti : "<<ciftAdet<<endl;
	cout<<"Girilen �ift Sayilarin Toplami : "<<ciftToplam<<endl;
}
