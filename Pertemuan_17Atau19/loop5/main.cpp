#include <iostream>

using namespace std;

int main()
{
    int i;
    for (int i=0; ;i++){
            cout<< "masukkan angka : " ;
            cin>>i;
        if(i==-99){
                cout<<"\nkeluar karena break"<<endl;
            break;
            }
        }

    return 0;
}
