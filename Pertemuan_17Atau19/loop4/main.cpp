#include <iostream>

using namespace std;

int main()
{
    int sum, i, average;
    for(int i=1; i<=20; i++){
        cout<<i<<endl;
        sum=sum+i;
        average=sum/i;
    }
    cout<< "\nJumlah i     = "<< sum << endl;
    cout<< "Rata-Rata    = "<< average << ".00"<<endl;

    return 0;
}
