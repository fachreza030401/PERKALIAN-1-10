#include <iostream>
using namespace std;
int main(){

    int i,n,batas=10,jumlah;

    cout<<"\t\t\t\tPROGRAM MENAMPILKAN BILANGAN PERKALIAN"<<endl;
    cout<<"\t\t\t\t\tby FACHREZA NORRAHMA"<<endl;
    cout<<"\t\t\t\t========================================="<<endl;
    cout<<"Bilangan yang akan dikalikan : ";
    cin>>n;
    cout<<"======================================"<<endl;
    cout<<"Menampilkan Hasil Perkalian :"<<endl;

    for(i=1;i<=batas;i++)
    {jumlah=i*n;
    cout<<i<<"*"<<n<<"="<<jumlah<<endl;
    }
    return 0;
}
