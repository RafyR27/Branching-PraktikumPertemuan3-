#include<iostream>
using namespace std;

int main(){
    int nilai;

    cout<<"Masukan nilai: ";
    cin>>nilai;

    if (nilai>=90 && nilai<=100){
        cout<<"Selamat! Anda mendapatkan nilai A"<<endl;
    } else if (nilai>= 80 && nilai<= 89){
        cout<<"Anda mendapatkan nilai B"<<endl;
    } else if (nilai>= 70 && nilai<= 79){
        cout<<"Anda mendapatkan nilai C"<<endl;
    } else if (nilai>= 60 && nilai<= 69){
        cout<<"Anda mendapatkan nilai D"<<endl;
    } else if (nilai<= 60){
        cout<<"Anda mendapatkan nilai E"<<endl;
    } else {
        cout<<"Nilai anda tidak valid"<<endl;
    }

    return 0;
}
