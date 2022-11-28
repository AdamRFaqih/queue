#include "q.h"

stackS createArray(){
    stackS p;
    p.top = -1;
    p.bottom = 0;
    return p;
}

void enqued(stackS &p, infotype r){
    if(isFull(p) == true){
        p.top++;
        p.T[p.top] = r;
    }
}

void dequed(stackS &p, infotype &r){
    if(p.bottom > p.top){
        p.top = -1;
        p.bottom = 0;
    }else if(isEmpty(p) == true){
        r.pasien = p.T[p.bottom].pasien;
        r.priority = p.T[p.bottom].priority;
        p.bottom++;
    }
}

bool isEmpty(stackS p){
    bool k;
    k = false;
    if(p.top > -1){
        k = true;
    }
    return k;
}

bool isFull(stackS p){
    bool k;
    k = false;
    if(p.top < idx || p.bottom < p.top){
        k = true;
    }
    return k;
}

void show(stackS p){
    int i = p.bottom;
    while(i <= p.top){
        cout <<" - "<<p.T[i].pasien<<" ";
        cout <<p.T[i].priority<<endl;
        i++;
    }
}

void inputan(stackS &p){
    infotype r;
    char s,q;
    s = 'Y';
    while(p.top == idx||s != 'N'){
        cout << "Masukan nama pasien: ";
        cin >> r.pasien;
        cout << "('p' untuk prioritas) Masukan prioritas: ";
        cin >> q;
        r.priority = q == 'p';
        enqued(p,r);
        cout << "Ingin memasukan data: (Y/N) ";
        cin >> s;
    }
}

void listDokter(stackS &s, stackS&q, stackS &p){
    infotype r;
    while(p.bottom <= p.top){
        if(p.T[p.bottom].priority == true){
            enqued(s,p.T[p.bottom]);
        }else{
            enqued(q,p.T[p.bottom]);
        }
        dequed(p,r);
    }
    cout << "List pasien berhasil diupdate" << endl;
}

void panggil(stackS &s, stackS &q){
    infotype r;
    if(s.bottom <= s.top){
        dequed(s,r);
    }else{
        dequed(q,r);
    }
    cout << r.pasien << " Masuk ke ruangan dokter" << endl;
}

int menu(){
    int pilih;
    cout << "==========Menu==========" << endl;
    cout << "1. Tampilkan daftar pasien" << endl;
    cout << "2. Input data pasien" << endl;
    cout << "3. Update list pasien" << endl;
    cout << "4. Panggil pasien" << endl;
    cout << "0. Shutdown system" << endl;
    cout << "========================" << endl;
    cout << endl;
    cout << "Masukan Nomor: ";
    cin >> pilih;
    cout << "========================" << endl;

    return pilih;
}
