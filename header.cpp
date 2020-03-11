#include "header.h"
void grade_mahasiswa(mahasiswa &mhs){
    float hasil;
    hasil = (mhs.n.kuis*0.2)+
            (mhs.n.uts*0.3)+
            (mhs.n.uas*0.3)+
            (mhs.n.praktikum*0.2);

    if(hasil>80){
        mhs.grade='A';
    } else if((hasil>60)&&(hasil<=80)){
        mhs.grade='B';
    } else if((hasil>50)&&(hasil<=60)){
        mhs.grade='c';
    } else{
        mhs.grade='D';
    }
    cout<<"Grade anda :"<<mhs.grade;
}

