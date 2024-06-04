#include<iostream>
using namespace std; 
int main(){
    system("cls");
//     a : 
//         cout<<"Hello World"<<endl;
//         goto d;
//     b : 
//         cout<<"Universitas Sumatera Utara"<<endl;
//         return 0; //terminate 
//     c : 
//         cout<<"Fasilkom-TI"<<endl;
//         goto b;
//     d : 
//         cout<<"Ilmu Komputer"<<endl;
//         goto c;

//     return 0;
    int angka = 1; 
    loop :
        cout<<angka<<" ";
        angka++; 
    if(angka <= 10){
        goto loop; 
    }
}