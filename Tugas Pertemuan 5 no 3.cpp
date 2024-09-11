#include<iostream>
using namespace std;

int main(){
    int pilih, p, l, t, a, hasil1, hasil2, hasil3;

    cout<<"Program Menghitung Luas Persegi, Persegi Panjang, dan Segitiga"<<endl;
    cout<<"=============================================================="<<endl<<endl;

    cout<<"1. Menghitung Luas Persegi"<<endl;
    cout<<"2. Menghitung Luas Persegi Panjang"<<endl;
    cout<<"3. Menghitung Luas Segitiga"<<endl<<endl;

    cout<<"Silahkan masukan pilihan (dengan angka): ";
    cin>>pilih;

    switch (pilih){
    case 1:
        cout<<"Panjang sisi: ";
        cin>>p;

        hasil1=p*p;

        cout<<"Luas persegi tersebut adalah "<<hasil1<<endl;
        break;
    case 2:
        cout<<"Panjang: ";
        cin>>p;
        cout<<"Lebar: ";
        cin>>l;

        hasil2=p*l;

        cout<<"Luas persegi panjang tersebut adalah "<<hasil2<<endl;
        break;
    case 3:
        cout<<"Alas: ";
        cin>>a;
        cout<<"Tinggi: ";
        cin>>t;

        hasil3=0.5*a*t;

        cout<<"Luas segitiga tersebut adalah "<<hasil3<<endl;
        break;
    }

    return 0;
}
