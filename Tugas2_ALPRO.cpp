#include <iostream>

using namespace std;
bool checkEvenOdd(int num);
int factor(int x){
        if(x <= 1){
            cout << x << endl;
            return x;
        }else{
            cout << x << " x ";
            return x *  factor(x-1);
        }
    }
int main()
{
   cout << "=====NILAI MAKS AND MIN=====" << endl;
   int jumlah, maks, minim, nilai;
   cout << "Jumlah Data: ";
   cin >> jumlah;
   for(int i=1;i<=jumlah;i++){
    cout << "Data Ke-" << i << " = ";
    cin >> nilai;
    if(nilai > maks){
        maks = nilai;
    }
    if(i == 1){
        minim = nilai;
        maks = nilai;
    }
    if(nilai < minim){
        minim = nilai;
    }
   }
   cout << "Nilai Maksimal= " << maks << endl;
   cout << "Nilai Minimal= " << minim << endl;
   cout << endl;
   cout << "=====NILAI MAKS AND MIN ARRAY=====" << endl;
   int z[4];
    for(int i=1;i<=4;i++){
        cout << "Nilai Array Ke " << i << "= ";
        cin >> z[i];
    if(z[i] > maks){
        maks = z[i];
    }
    if(i == 1){
        minim = z[i];
        maks = z[i];
    }
    if(z[i] < minim){
        minim = z[i];
    }
    }
    cout << "Nilai Maksimal Array= " << maks << endl;
    cout << "Nilai Minimal Array= " << minim << endl;
    cout << endl;
    cout << "=====EVEN OR ODD=====" << endl;
    int num;
    bool isEven = true;
    bool isOdd = false;
    cout << "Masukkan Angka: ";
    cin >> num;
    if(num % 2 == 0){
        cout << isEven;
    }else{
        cout << isOdd;
    }
    cout << endl;
    cout << "notes: " << endl;
    cout << "1 = TRUE: EVEN/GENAP" << endl;
    cout << "0 = FALSE: ODD/GANJIL" << endl;
    cout << endl;
    cout << "=====FACTOR=====" << endl;
    int angka;
    cout << "Masukkan Angka: "; cin >> angka;
    cout << angka << "! = " << factor(angka);
    cout << endl;
    return 0;
}
