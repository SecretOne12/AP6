#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    system("cls");
    int a, b;
    
//Assignment operator --> inisialisasi value
a = 5;
b = 7;
//notes : shift + upper pointer, shift + slice --> to make comment faster
// // //Arithmetic operator + -  %(modulo)
// int tambah = a + b;
// int kurang = a - b;
// int kali = a * b;
// float bagi = a / b;
// int mod = a % b; 

// cout<<"a + b = "<<tambah<<endl;
// cout<<"a - b = "<<kurang<<endl;
// cout<<"a * b = "<<kali<<endl;
// cout<<"a / b = "<<bagi<<endl;
// cout<<"a % b = "<<mod<<endl;

// //relational operator
cout << (a == b) << endl; //harus pakai tanda dalam kurung
cout << (a < b) << endl;
cout << (a <= b) << endl;
cout << (a > b) << endl;
cout << (a >= b) << endl;
cout << (a != b) << endl;

// //logical operator
cout << (true && true) << endl;
cout << (true && false) << endl;
cout << (false && true) << endl;
cout << (false && false) << endl;

cout << (true || true) << endl;
cout << (true || false) << endl;
cout << (false || true) << endl;
cout << (false || false) << endl;

cout << (!true) << endl;
cout << (!false) << endl;

//Bitwise Operator
cout << (4 & 7) << endl;
cout << (4 | 7) << endl;
cout << (~4) << endl;
cout << (4 >> 7) << endl;
cout << (4 << 7) << endl;

//post increment 
cout<< a++ <<endl;
cout<< a <<endl; 
//pre decrement
cout<< a <<endl;
cout<< ++a <<endl; 

//post decrement 
cout<< a-- <<endl;
cout<< a <<endl; 
//pre decrement 
cout<< --a <<endl;
cout<< a <<endl; 

a++; //a = a + 1;
a--; //a = a - 1;

//shortand
a = a+2;
a += 2;
a -= 2;
a *= 2;
a /= 2;
    return 0;
}