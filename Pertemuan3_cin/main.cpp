#include <iostream>

using namespace std;

int main()
{

    cout << "--------------------------------------------------------------------- \n\n";
    cout << "\t\tHi my name is Royhan Azhar, Now i want to learn about CIN\n \n" << endl;

    string nama, nim, alamat, pacar;
    int umur;
    float tb;
    char jk;

    cout << "\tMasukan Nama           : ";
    getline
    (cin, nama);

    cout << "\tMasukan NIM            : ";
    cin >> nim;

    cout << "\tTinggi Badan           : ";
    cin >> tb;

    cout << "\tJenis Kelamin          : ";
    cin >> jk;

    cout << "\tMasukan Alamat         : ";
    cin >> alamat;

    cout << "\tPacar cukup hanya      : ";
    cin >> pacar;

    cout << "\tMasukan Umur           : ";
    cin >> umur;
    cout << "\n";

    cout << "\tSelamat Datang " << nama << ", No mengsad" << endl;
    cout << "\tNIM anda adalah " << nim << "." << endl;
    cout << "\tUsia anda sekarang " << umur << " tahun." << endl;
    cout << "\tSaat ini tinggi badan anda " << tb << " cm." << endl;
    cout << "\tAlamat anda " << alamat << "." << endl;
    cout << "\tPacar ku cuma " << pacar << " Lah." << endl;
    cout << "\tJenis Kelamin anda " << jk << ".\n" << endl;

    cout << "---------------------------------------------------------------------";
    return 0;
}
