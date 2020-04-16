#include <iostream> //file header input output
using namespace std; //menggunakn namespace std
int tambah (int *);//deklarasi fungsi tambah

int main (){     //fungsi utama yang akan dieksekusi
	
	int x = 3; //deklarasi variable x dengan nilai x
	cout<<x<<endl; //mengeluarkan nilai x
	tambah (&x); //memangil fungsi tambah
	cout<<x; //mengeluarkan nilai x
	return 0 ; //mengembalikan nilai 0
}
int tambah (int *x){    //fungsi tambah 
*x= 3+ *x;					//menjumlahkan pointer x dengan 3
}
