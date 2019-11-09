#include <iostream>
#include <stdio.h>
using namespace std;
void calculator(){
    int a,b,c,rez;
    std::cin>>c>>a>>b;
    switch (c) {
        case 1:
            rez=a+b;
            break;
        case 2:
            rez=a*b;
            break;
            case 3:
                rez=a/b;
                break;
        case 4:
            rez=a-b;
            break;
        case 5:
            rez=a%b;
            break;
        default:
            cout<<"ви ідіот!!! дія не сприймається калькулятором";


    }
cout<<rez;
}