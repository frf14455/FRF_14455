#include <iostream>

using namespace std;

int main()
{

    cout << "               Owned by:14455               " << endl;
    cout << "============================================" << endl;
    cout << endl;
    cout << "  -PENJUMLAHAN DAN PENGURANGAN 2 BILANGAN-  " << endl;

    int a,b,x,y;
    cout << "Masukkan Angka Pertama: ";
    cin >> a;
    cout << "Masukkan Angka Kedua  : ";
    cin >> b;
    x= a+b;
    y= a-b;
    cout << "Hasil Penjumlahan ===> ";
    cout <<a<<" + "<<b<<" = "<<x<< endl;
    cout << "Hasil Pengurangan ===> ";
    cout <<a<<" - "<<b<<" = "<<y<< endl;

    cout << "============================================" << endl;
    cout << "         =JUMLAH DAN RATA-RATA ARRAY=       " << endl;
    float z[4];
    float j,t,r;
    for(int i=1;i<=4;i++){
        cout << "Masukkan Array Ke " << i << ": ";
        cin >> z[i];
        t= t+z[i];
    }
    j= sizeof(z)/sizeof(z[0]);
    r= t/j;
    cout << "Jumlah Total Isi Array: " << t << endl;
    cout << "Rata-Rata Isi Array: " << r << endl;
    cout << "============================================" << endl;
    cout << "                   SELESAI                  " << endl;

    return 0;
}
