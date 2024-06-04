#include<iostream>
#include<vector>
using namespace std; 
int main(){
    //vector declaration initialization 
    vector<string> nama = {"Andi", "Budi", "Santi", "Wanto", "Denis"}; 

    //accessing elements in vector
    for(int i=0; i<nama.size(); i++){ //mendapatkan ukuran dari vektor
        cout<<nama[i]<<endl; 
    } 
    cout<<"===================="<<endl;

    //adding data to vector
    nama.push_back("Wawan"); 
    for(int i =0; i<nama.size(); i++){ 
        cout<<nama[i]<<endl; 
    } 

    cout<<"===================="<<endl;

    //deleting data from vector (membuang data paling terakhir)
    nama.pop_back(); 
    for(int i =0; i<nama.size(); i++){ 
        cout<<nama[i]<<endl; 
    } 
    cout<<"===================="<<endl;

    nama.erase(nama.begin()); 
    for(int i =0; i<nama.size(); i++){ 
        cout<<nama[i]<<endl; 
    } 

    cout<<"===================="<<endl;
    nama.erase(nama.begin() + 2); //erase() berfungsi untuk menghapus data, begin() untuk mendapatkan data vektor paling awal 
    for(int i =0; i<nama.size(); i++){ 
        cout<<nama[i]<<endl; 
    } 

    //for each loop 
    for(string n : nama){
        cout<< n <<endl; 
    }
    return 0;
}