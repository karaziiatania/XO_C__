#include <iostream>
#include<cstdlib>

using namespace std;

void vstavka()
{
    setlocale(LC_ALL, "RUS");
    int ar[1000],i,k,razmer,d;
    cout<<"masuv"<<endl;
    cin>>razmer;
    for (i=0;i<razmer;i++) {
        ar[i]=rand()%1000;
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    for(i=1; i<razmer;i++){
        for(k=i;k>0&& ar[k-1]>ar[k];k--){
            d=ar[k-1];
            ar[k-1]=ar[k];
            ar[k]=d;
        }
    }
    cout<<"new masuv:";
    for(i=0;i<razmer;i++) cout<<ar[i]<<" ";
    cout<<endl;
}
