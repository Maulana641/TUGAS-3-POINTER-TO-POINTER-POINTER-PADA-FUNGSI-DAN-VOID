#include <iostream>//file header input output
using namespace std; //menggunakn namespace std

int main() {  //fungsi utama yang akan dieksekusi
    void* ptr;    
    int f = 5;     // deklarasi tipe data f dan nilai f
    ptr = &f;     // int* ke void

    cout << &f << endl; //perintah menegeluakan alamat f
    cout << ptr; // perintah mengeluarkan alamat ptr

    return 0; // mengembalikan nilai 0
}
