#include <iostream> //file header input output
using namespace std;//mengunakan namespace std
 
int main () {             //fungsi  utama yang dijalankan program

   int  var; // deklarasi var
   int  *ptr;// deklarasi pointer point
   int  **pptr;// deklarasi pointer point  point 
   
   cout<<"masukkan nilai Variabel  ="; // perintah masukkan nilai variabel
   cin>>var;

   /*  ambil alamat variabel */
   ptr = &var;

   /* ambil alamat ptr menggunakan alamat operator & */
   pptr = &ptr;
   
   cout<<"nilai variabel adalah ="<<var<<endl; // perintah mengeluarkan nilai variabel
   cout<<"nilai pada *ptr adalah ="<<*ptr<<endl; // perintah menegeluarkan nilai *ptr
   cout<<"nilai pada **pptr adalah ="<<**pptr<<endl; // perintah mengeluarkan nilai **pptr
   
   return 0; //mengembalikan nilai 0
}
