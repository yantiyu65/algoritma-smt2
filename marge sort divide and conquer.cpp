#include <cstdlib>
#include <iostream>
using namespace std;

void awal(){
	cout<<"==========================";
}
void Merge(int *A, int kiri, int tengah, int kanan){
	int B[kiri + kanan];
	int i,kidal1,kidal2;
	kidal1 = kiri;
	kidal2 = tengah + 1;
	i = kiri;
	while(kidal1 <= kiri && kidal2 <= kanan){
		if(A[kidal1] <= A[kidal2]){
			B[i] = A[kidal1];
			kidal1++;
		}else{
			B[i] = A[kidal2];
			kidal2++;
		}
		i++;
	}
	while(kidal1 <= tengah){
		B[i] = A[kidal1];
		kidal1++;
	}
	for(int i=0;i<=kanan;i++){
		A[i] = B[i];
	}
	
}
void MergeSort(int *A, int i, int j)
{
    int k;
    if (i < j)
    {
        k = ((i + j) / 2);
        MergeSort(A, i, k);
        MergeSort(A, k + 1, j);
        Merge(A, i, k, j);
    }
}

int main(int argc, char *argv[]){
	int i,n,j;
	cout <<"program marge sort (divide and conquer)"<<endl;
	awal();
	cout<<"Banyak Data : "<<endl;
	cin>>n;
	i = 1;
	j = n;
	int A[n];
	for(int x=1;x<=n;x++){
		cout<<"data ke-"<<x<<": ";
		cin>>A[x];
	}
	awal();
	cout<<"data sebelum diurutkan"<<endl;
	for(int x=1;x<=j;x++){
		cout<<A[x]<<"	";
	}
	cout<<endl;
	MergeSort(A, i, j);
	awal();
	cout<<"Data Setelah Diurutkan "<<endl;
	for(int x=1;x<=j;x++){
		cout<<A[x]<<"	";
	}
	cout<<endl;
	awal();
	system("pause");
	return 0;
	
}
