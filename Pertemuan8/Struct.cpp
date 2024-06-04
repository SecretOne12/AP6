#include<iostream>
#include<vector>
using namespace std; 

struct Mahasiswa //diawali dengan kapital
{
   string nama, nim; 
   float nilai;
};

// typedef struct 
// {
//     string nama, nim;
// } Siswa;


int main(){
    vector<Mahasiswa> mahasiswa; 
    Mahasiswa mhs;
    int n; 

    cout << "Masukkan jumlah mahasiswa: "; 
    cin >> n; 

    for(int i = 0; i < n; i++) {
        cin.get();
        
        cout<<"Mahasiswa ke-"<<i+1<<endl;
        cout << "Masukkan nama: "; 
        getline(cin, mhs.nama); 

        cout << "Masukkan nim: "; 
        cin >> mhs.nim;  

        cout << "Masukkan nilai: "; 
        cin >> mhs.nilai;  

        mahasiswa.push_back(mhs);   //store the value in mahasiswa variable
    }

    for(int i = 0; i<n; i++){
        cout<<mahasiswa[i].nama<<" NIM "<<mahasiswa[i].nim<<" nilai "<<mahasiswa[i].nilai<<endl;
    }

    return 0;
}