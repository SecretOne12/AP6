#include<iostream>
using namespace std; 
int main(){
    int i; 

    // for(i = 1; i<=10; i++){
    //     cout<<"Hello World"<<endl;
    // }
    // return 0;

    // for(i = 1; i<=20; i++){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
    // }

    // for(i = 1; i<=4; i++){
    //     for(int j = 1; j <= 4; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // cout<<endl; 

    // for(i = 1; i<=4; i++){
    //     for(int j = 1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    int n, num = 0, sum=0; 

    cout<<"Masukkan suku ke  :";
        cin>>n; 

    for(int i = 1; i<=n; i++){
        if(i % 2 == 0){
            num = num;
        }else{
            num += 5;
        }
        sum+=num;

        cout<< num << " ";
    }

    cout<<endl;
    cout<<"Suku ke-n adalah : "<<num<<endl; 
    cout<<"Jumlah deret adalah : "<<sum;
}