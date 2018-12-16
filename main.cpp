#include <iostream>
using namespace std;
int main()
{
    const int gp=30000,gl=10000,pp=5;//gp=gaji pokok,gl=gaji lembur,pp=pajak
    char nama[20];
    int lembur,gaji,jamker,jamlem,tot;
    cout<<"*******PROGRAM MENGHITUNG GAJI KARYAWAN*******\n";
    cout<<"==============================================\n";

    cout<<"\nNama Karyawan      : ";
    cin>>nama;
    cout<<"\nJam Kerja          : ";
    cin>>jamker;
    cout<<"\nJam Lembur         : ";
    cin>>jamlem;
    cout<<"Pajak Yang Ditanggung  : "<<pp<<"\n";
    cout<<"\n========PERINCIAN=======\n";
    gaji=gp*gl;
    lembur=gl*jamlem;
    tot=gaji*pp/100;
    cout<<"Gaji Pokok Per Jam     : "<<gp<<"\n";
    cout<<"Upah Lembur Per Jam    : "<<gl<<"\n";
    cout<<"Total Gaji Yang Didapat: "<<tot<<"\n";
    return 0;

}
