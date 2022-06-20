#include <iostream>
using namespace std;

int main(){
	// pembuatan array hasil inputan user
	int banyakArray;
	int x[100];
	cout<<"masukan banyak array :";
	cin>>banyakArray;
	for(int a=0;a<banyakArray;a++){
		cout<<"masukan array ke  "<<a<<":";
		cin>>x[a];
	}
	// proses pembuatan array
	// menampilkan array sebelum disorting
	cout <<"array awal adalah :	"<<endl;
	int  y=banyakArray-2;
	int param;
	for(int a=0;a<banyakArray;a++){
		cout<<x[a]<<"	";
	}
	cout<<endl<<endl<<"== mulai proses sorting =="<<endl;
	// memulai sorting
while(y >= 0){
		int index = 0;
		while(index <=y ){
			if(x[index] > x[index+1]){
				param = x[index];
				x[index] = x[index+1];
				x[index+1] = param;
			}
			index++;
		}
//		pengecekan hasil di setiap tahapan sort
	for(int m = 0;m<banyakArray;m++){
		cout<<x[m]<<" ";
	}
cout<<endl;
y--;
}
//	processing end
// lopping untuk mengeluarkan hasil sorting
	cout << "hasil sortingnya adalah :"<<endl;
	for(int m=0;m<banyakArray;m++){
		cout<<x[m]<<" ";
	}
}
