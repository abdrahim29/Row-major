#include<iostream>
using namespace std;

int main()
{
    int *array;
    int base_address=5000;

    int size;
    int index;
    const int sizevalue=4;

    cout<<"Enter size of array";
    cin>>size;

    array=new int(size);


    for(int i=0;i<size;i++){
        cout<<"Enter elements";
        cin>>array[i];

    }
    cout<<"enter index of place address you want";
    cin>>index;

    int newaddress= base_address + index*sizevalue;

    cout<<newaddress;


    

    return 0;
}