#include "q.h"

int main()
{
    stackS p,s,q;
    infotype r;
    int pilihan;
    //data acak
    p = createArray();
    s = createArray();
    q = createArray();

    pilihan = menu();
    while (pilihan != 0){
        switch(pilihan){
    case 1:
        cout << "Daftar Keseluruhan Pasien:" <<endl;
        show(p);
        cout << endl;
        cout << "Daftar Pasien Prioritas:"<<endl;;
        show(s);
        cout << endl;
        cout << "Daftar Pasien Standar:"<<endl;;
        show(q);
        cout << endl;
        break;
    case 2:
        inputan(p);
        break;
    case 3:
        listDokter(s,q,p);
        break;
    case 4:
        panggil(s,q);
        break;
        }
    pilihan = menu();
    }
    cout << "System Shutdown" << endl;

}
