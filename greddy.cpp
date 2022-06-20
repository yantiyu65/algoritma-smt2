#include <iostream>
#include <stdio.h>
#include <conio.h>
#define size 99

using namespace std;

void sort(int[], int);

int main(){
	int x[size],i,uang,n,k,hasil[size];
	cout<<"Banyak Koin : ";
	cin>>n;
	cout<<endl<<"masukan jenis koin : "<<endl;
	for(i=1;i<=n;i++){
		cout<<endl;
		cin>>x[i];
	}
 	sort(x,n);
    cout << "Koin yang tersedia : \n";
	for(i=1;i<=n;i++){
		cout<<x[i];
		cout<<endl;
	}
	cout<<endl<<"masukan nilai yang dipecah"<<endl;
	cin>>uang;
	cout<<endl;
	for(i=1; i<=n;i++){
		hasil[i] = uang / x[i];
		uang = uang % x[i];
		k = uang % x[i];
	}
	for(i=1;i<=n;i++){
		cout<<"keping "<<x[i];
		cout<<"-an sebanyak	"<<hasil[i];
		cout<<endl;
	}
	cout<<"sisanya "<<k;
	getch();
	return 0 ;
	
}
void sort(int a[],int siz){
	int pass,hold,j;
	for(pass=1; pass<=siz-1;pass++){
		for(j=0; j<=siz-2;j++){
			if(a[j+1] < a[j+2]){
			hold = a[j+1];
			a[j+1] = a[j + 2];
			a[j + 2] = hold;
			}
		}
	}		
}

