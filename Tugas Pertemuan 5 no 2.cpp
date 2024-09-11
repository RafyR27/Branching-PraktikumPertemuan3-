#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Masukan bilangan ke - 1: ";
    cin>>a;
    cout<<"Masukan bilangan ke - 2: ";
    cin>>b;
    cout<<"Masukan bilangan ke - 3: ";
    cin>>c;

    if(a>b && a>c){
        cout<<"Angka terbesar adalah "<< a <<endl;
    } else if(b>a && b>c){
        cout<<"Angka terbesar adalah "<< b <<endl;
    } else if(c>a && c>b){
        cout<<"Angka terbesar adalah "<< c <<endl;
    }

    return 0;
}
