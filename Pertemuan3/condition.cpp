#include<iostream>
using namespace std;

int main(){
    system("clear"); 
    int nilai;

    cout<<"Masukkan nilai : ";
    cin>>nilai;

    // //two conditional
    // if(nilai<65){
    //     cout<<"Tidak lulus"<<endl;
    // }else{
    //     cout<<"Lulus"<<endl;
    // }

    // //multiple conditional 
    // if(nilai<65){
    //     cout<<"Tidak lulus";
    // }else if(nilai>65){
    //     cout<<"Lulus";
    // }else if(nilai==65){
    //     cout<<"Nilai pas";
    // } //use "else if" if there is a statement 

    // //Nested loop 
    // if(nilai < 0 || nilai > 100){
    //     cout<<"Tidak valid";
    // } else if(nilai<65){
    //     cout<<"Tidak lulus";
    // }else if(nilai>65){
    //     cout<<"Lulus";
    // }else if(nilai==65){
    //     cout<<"Nilai pas";
    // }

    // // //Switch 
    // switch(nilai){
    //     case 1:
    //         cout<<"Senin"<<endl; break;
    //     case 2:
    //         cout<<"Selasa"<<endl; break;
    //     case 3:
    //         cout<<"Rabu"<<endl; break;
    //     case 4:
    //         cout<<"Kamis"<<endl; break;
    //     case 5:
    //         cout<<"Jumat"<<endl; break;
    //     case 6:
    //         cout<<"Sabtu"<<endl; break;
    //     case 7:
    //         cout<<"Minggu"<<endl; break;
    //     default: cout<<"Tidak valid"; //same like else

    //}

    // switch(nilai){
    //     case 90 ... 100: //n ... m means range of the value.
    //         cout<<"A"; break;
    //     case 85 ... 89:
    //         cout<<"B+"; break;
    //     case 80 ... 84:
    //         cout<<"B"; break;
    //     case 75 ... 79:
    //         cout<<"C+"; break;
    //     case 70 ... 74:
    //         cout<<"C"; break;
    //     case 65 ... 69:
    //         cout<<"D"; break;
    //     case 0 ... 64:
    //         cout<<"E"; break;
    //     default : cout<<"Tidak valid";
    // }

    //Ternary operator (Short hand if-else)
    string tipe = (nilai > 0) ? "Positif" : "Negatif";
    cout<<tipe<<endl;

    cout<<endl;

    system("pause");
    return 0;
}