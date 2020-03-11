#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct tanggal_lahir{
    int tanggal;
    string bulan;
    int tahun;
};

struct nilai{
    int kuis;
    int uts;
    int uas;
    int praktikum;
};

struct mahasiswa{
    string nama;
    int usia;
    string jurusan;
    char grade;
    tanggal_lahir tgl_lahir;
    nilai n;
};


void grade_mahasiswa(mahasiswa &mhs);


#endif // HEADER_H_INCLUDED
