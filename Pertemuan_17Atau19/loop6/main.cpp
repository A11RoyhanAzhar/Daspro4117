#include <iostream>

using namespace std;

int main()
{
    int i, max, min;
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

    return 0;
}
