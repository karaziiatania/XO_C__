#include <iostream>
#include<locale>
#include<cstdlib>

using namespace  std;

void buble(){
    setlocale(LC_ALL,"RUS");
    int ar[1000],i,k,rasmer,d;
    cout<<"размер";
    cin>> rasmer;
    for (i=0;i<rasmer; i++) {
        ar[i]=rand()%1000;
        cout<<ar[i]<<" ";
    }
    for (i=0;i<rasmer; i++) {
        for (k=1;k<rasmer-i; k++){
            if(ar[k-1]>ar[k]){
                d=ar[k];
                ar[k]=ar[k-1];
                ar[k-1]=d;
            }
        }
    }
    cout<< "масив:";
    for(i=0; i<rasmer; i++)cout<<ar[i]<<" ";
}