#include<iostream>
using namespace std;

int main(){
    float weight;
    string a;

    cout<<"Masukkan berat badan (Kg) : ";
        cin>>weight;
    

    if(weight < 18.5){
        a = "Berat badan kurang";
    }else if(weight >= 18.5 || weight < 25){
        a = "Berat badan normal";
    }

    cout<<"BMI anda : "<<weight<<endl;
    cout<<"Kategori : "<<a;

    cout<<endl;
    
    system("pause");
    return 0;
}