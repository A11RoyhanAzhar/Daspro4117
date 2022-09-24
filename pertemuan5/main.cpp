#include <iostream>
#include <stdio.h>

using namespace std;
//pertemuan 5 Royhan azhar
//A11.2022.14629

int jarix;
float phi= 3.14,;
float luas, kel;

main()
{
    cout << "\nmenghitung luas dan kel lingkaran\n" << endl;
    cout << "\n==================================\n" << endl;
    cout << "masukkan jari jari     :" ;
    cin >> jarix;
    luas = phi * jarix * jarix;
    kel = 2 * phi * jarix;
    cout << "\n==================================\n" << endl;

    cout <<"maka luas lingkaran         :   " << luas << endl;
    cout <<"maka keliling lingkaran     :   " << kel << endl;
    cout <<"dengan jari-jari            :   " << jarix << endl;

    return 0;
}
