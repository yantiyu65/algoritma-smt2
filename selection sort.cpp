#include <iostream>
using namespace std;

int main(){
	int n,tukar,A[100];
	cout<<"masukan jumlah data : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Data ke - "<<i+1<<" = ";
		cin>>A[i];
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		tukar = i;
		int temp;
		for(int j=i+1;j<n;j++){
			tukar=j;
		}
		temp = A[tukar];
		A[tukar] = A[i];
		A[i]= temp;
	}
	for(int i=0;i<n;i++){
		cout<<A[i]<<"	";
	}
	cin.get();
	return 0;
}
//
//	int x[100];
//	int banyakA;
//	cout<<"masukan jumlah array : ";
//	cin>>banyakA;
//	for(int i=0;i<banyakA;i++){  // input data user
//		cout<<"Data ke - :"<<i<<"	";
//		cin>>x[i];
//	}
//	cout<<"array awal adalah "<<endl;
//	int y=banyakA-2;
//	int param;
//	for(int i=0;i<banyakA;i++){ // menampilkan data sebelum di sorting
//		cout<<x[i]<<"	";
//	}
//	cout<<endl<<"mulai proses sorting"<<endl;
//	while(y >= 0){
//		int index = 0;
//		while(index <= y){
//			if(x[index] > x[index+1]){
//				param = x[index];
//				x[index] = x[index+1];
//				x[index+1] = param;
//			}
//			index++;
//		}
//		// pengecekan setelah proses sorting
//		for(int i=0;i<banyakA;i++){
//			cout<<x[i]<<"	";
//		}
//		cout<<endl;
//		y--;
//	}
//	// menampilkan data setelah sorting
//	cout<<"hasil sortingan adalah"<<endl;
//	for(int i=0;i<banyakA;i++){
//		cout<<x[i]<<"	";
//	}
//}
