#include<iostream>
using namespace std;

int main(){
int nilai;
    system("clear");
    cout<<"Masukkan nilai :";
    cin>>nilai;

    // if(nilai % 2 == 0){
    //     cout<<"Nilai Genap"<<endl;
    // }else if(nilai % 2 == 1){
    //     cout<<"Nilai Ganjil"<<endl;
    // }

    //using ternary
    string tipe = (nilai % 2 == 0) ? "Nilai Genap" : "Nilai Ganjil";
    cout<<tipe<<endl;

    system("pause");
    
    return 0;
}