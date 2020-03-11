#include <iostream>
#include <string>
#include <stdio.h>
#include "header.h"

using namespace std;

int main()
{
    mahasiswa mhs;
    cout<<"Masukkan nama anda:";
    getline (cin, mhs.nama);
    cout<<"Masukkan jurusan anda:";
    fflush(stdin);
    getline (cin, mhs.jurusan);
    cout<<"Masukkan usia anda:";
    fflush(stdin);
    cin>>mhs.usia;
    cout<<"Masukkan tanggal lahir anda\n";
    cout<<"tanggal :";
    cin>>mhs.tgl_lahir.tanggal;
    cout<<"Bulan :";
    fflush(stdin);
    cin>>mhs.tgl_lahir.bulan;
    cout<<"tahun :";
    cin>>mhs.tgl_lahir.tahun;

    cout<<"Masukkan Nilai :"<<endl;
    cout<<"Kuis           :";
    cin>>mhs.n.kuis;
    cout<<"UTS            :";
    cin>>mhs.n.uts;
    cout<<"UAS            :";
    cin>>mhs.n.uas;
    cout<<"Praktikum      :";
    cin>>mhs.n.praktikum;

    cout    << "\n\n"
            << "=====================================\n";

    cout<< "Nama       : " << mhs.nama              << endl;
    cout<< "Jurusan    : " << mhs.jurusan           << endl;
    cout<< "Usia       : " << mhs.usia              << endl;
    cout<< "Tanggal    : " << mhs.tgl_lahir.tanggal << endl;
    cout<< "Bulan      : " << mhs.tgl_lahir.bulan   << endl;
    cout<< "Tahun      : " << mhs.tgl_lahir.tahun   << endl;
    cout<< "Kuis       : " << mhs.n.kuis            << endl;
    cout<< "UTS        : " << mhs.n.uts             << endl;
    cout<< "UAS        : " << mhs.n.uas             << endl;
    cout<< "Praktikum  : " << mhs.n.praktikum       << endl;
    cout << "========================" << endl;
    grade_mahasiswa(mhs);
    return 0;
}
