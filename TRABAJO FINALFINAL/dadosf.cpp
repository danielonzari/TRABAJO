#include <iostream>
#include<stdlib.h>
#include "rlutil.h"
#include <wingdi.h>
using namespace std;
using namespace rlutil;

void dado(int posx, int posy)
{
locate(((7/2)/2),7/2);

   for(int x=0;x<=7/2;x++){

        for(int y=0;y<=7;y++){

             cout<<(char)219;


        }
cout<<"\n";



}


}
void forma_1(int i){
for (i=1;i<81;i++ ){
        locate(i,1);
        cout<<(char)178;

    for (i=1;i<24;i++ ){
        locate(1,i);
        cout<<(char)178;
    }
    for (i=1;i<24;i++ ){
        locate(80,i);
        cout<<(char)178;
    }
    for (i=1;i<81;i++ ){
        locate(i,24);
        cout<<(char)178;
    }



}
}
