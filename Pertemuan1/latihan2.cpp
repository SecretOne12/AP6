#include<iostream>
#include<iomanip> //library untuk mengatur koma
using namespace std;

int main(){
    system("cls");
    string nama; 
    int nim;
    char kom;
    float ip; 

    cout <<"Hello World"<<endl;
    cout<<"Masukkan nama : ";
    //cin>>nama; memasukkan 1 kata
    getline(cin, nama); //bisa menginput banyak kata.
    

    cout<<"Masukkan NIM : ";
    cin>>nim;

    cout<<"Masukkan KOM : ";
    cin>>kom;

    cout<<"Masukkan IP : ";
    cin>>ip;

    //prinout

    cout<<"NAMA : "<<nama<<endl;
    cout<<"NIM : "<<nim<<endl;
    cout<<"KOM : "<<kom<<endl;

    cout<<fixed<<setprecision(2); //untuk mengatur angka dibelakang koma dan bisa diinput sebelum tipe data float di printout
    cout<<"IP : "<<ip<<endl;
    return 0;
}