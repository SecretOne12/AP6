#include<iostream>
using namespace std; 

int main(){
    float r,v,l;
    const float phi = 3.14;//menyatakn suatu ketetapan

    cout<<"Masukkan r : ";
    cin>>r; 

    //rumus bola
    l = 4 * phi * r * r;
    v = 4/3 * phi * r * r* r;
    cout<<"Volume bola = "<<v<<endl;
    cout<<"Luas Permukaan = "<<l<<endl;
}