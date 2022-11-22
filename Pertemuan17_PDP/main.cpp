#include <iostream>

using namespace std;

int main()
{
    // soal no 1

    /*int j = 1;
    for (int i=100; i>=1; i--){
        cout << "i=" << i << "   dan   " << "j=" << j << endl;
        j++;
    }*/
    // soal no 2
    /*for (int i =1; i<=100; i++){
        if(i%2==1){
            continue;
        }
        cout << "nilai genap adalah " << i << endl;
    }*/
    //soal no 3
    /*for(int i = 100; i>=1; i--){
        if(i==54){
            break;
        }
        cout << "bilangan ini "<< i << endl;
    }*/
    //soal no 4
    /*int sum, i, average;
    for(int i=1; i<=20; i++){
        cout<<i<<endl;
        sum=sum+i;
        average=sum/i;
    }
    cout<< "\nJumlah i     = "<< sum << endl;
    cout<< "Rata-Rata    = "<< average << ".00"<<endl;
    */
    // soal no 5
    /*int i;
    for (int i=0; ;i++){
            cout<< "masukkan angka : " ;
            cin>>i;
        if(i==-99){
                cout<<"\nkeluar karena break"<<endl;
            break;
            }
        }
        */
    /*int i, max, min;
    for(int i=0; ;i++){
        cout << "masukkan angka: ";
        cin>>i;

        if ( i > max ) {
            max = i;
        }
        else if ( i < min && i !=-99 ) {
            min = i;
        }
        else if (i==-99){
            cout << "nilai Max = " << max << endl;
            cout << "nilai Min = " << min << endl;
            break;
        }
    }*/

    return 0;
}
