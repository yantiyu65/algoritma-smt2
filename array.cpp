#include <iostream>
using namespace std;
int main(){
	int n[10];
	for(int i=0;i<10;i++){
		n[i]=10;
	}
	cout << "indeks elemen		Nilai"<<endl;
	for(int i=0;i<10;i++){
		cout<<i<< "			"<<n[i]<<endl;
	}
	return 0;
}
