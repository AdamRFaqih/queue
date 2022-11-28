#ifndef Q_H_INCLUDED
#define Q_H_INCLUDED

#include <iostream>
using namespace std;


struct dat{
    string pasien;
    bool priority;
};

const int idx = 100;
typedef dat infotype;
typedef int adr;

struct stackS{
    infotype T[idx];
    adr top;
    adr bottom;
};

stackS createArray();
void enqued(stackS &p, infotype r);
void dequed(stackS &p, infotype &r);
bool isEmpty(stackS p);
bool isFull(stackS p);
void show(stackS p);
void inputan(stackS &p);
void listDokter(stackS &s, stackS&q, stackS &p);
void panggil(stackS &s, stackS &q);
int menu();

#endif // Q_H_INCLUDED
