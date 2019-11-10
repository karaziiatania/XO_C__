#include <iostream>
#include "xo.h"

using namespace std;
void xo()
{
    int ms[3][3];
    int x, y;
    for(int i=0; i<3;i++){
        for( int j=0; j<3;j++){
            ms[i][j]=0;
        }

    }
    game(ms);
    bool iswin=false;
    bool isx=true;
    while( !iswin) {
        cout<<"enter coordinates[x;y]"<<endl;
        cin >> x >> y;
        x--;
        y--;
        if (isx) {
            ms[x][y] = 1;
            isx = false;
        } else {
            ms[x][y]=2;
            isx=true;

        }

     iswin=chek(ms);
        game(ms);
    }

}

bool chek(int ms[3][3]) {
    if ((ms[0][0] == ms[0][1] && ms[0][2] == ms[0][1]) && ms[0][0] != 0) {
        return true;
    }
    if((ms[1][0] == ms[1][1] && ms[1][1] == ms[1][2]) && ms[1][1] != 0){
        return true;
    }
    if((ms[2][0]==ms[2][1]&&ms[2][1]==ms[2][2])&&ms[2][2]!=0){
        return true;
    }
    if((ms[0][1]==ms[0][2]&&ms[0][1]==ms[0][0])&&ms[0][0!=0]){
        return true;
    }
    if((ms[1][0]==ms[1][1]&&ms[1][1]==ms[1][2])&&ms[1][1]!=0){
        return true;
    }
    if((ms[2][0]==ms[2][1]&&ms[2][1]==ms[2][2])&&ms[2][2]!=0){
        return true;
    }
    if((ms[0][0]=ms[1][1]&&ms[1][1]==ms[2][2])&&ms[1][1!=0]){
        return true;
    }
    if((ms[0][2]==ms[1][1]&&ms[1][1]==ms[2][0])&&ms[1][1!=0]){
        return true;
    }
    return false;
}

void game(int ms[3][3]){
    cout<<"-------------"<<endl;
    for(int i=0;i<3;i++){
        cout<<"|";
        for(int j=0;j<3;j++){

            if (ms[i][j]==1){
                cout<<" X"<<" |";
            }
            if (ms[i][j]==2){
                cout<<" O"<<" |";
            }
            if (ms[i][j]==0){
                cout<<"  "<<" |";
            }
        }
    cout<<endl<<"-------------"<<endl;
    }
}
