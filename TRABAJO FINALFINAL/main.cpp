#include <iostream>
#include<stdlib.h>
#include "rlutil.h"
#include <wingdi.h>
#include "funciones.h"
#include "funciones2.h"
#include <conio.h>
#include <windows.h>
#include <string.h>

using namespace std;
using namespace rlutil;

//HOLA

void dados(int x,int recu){
switch (x)
{
    case 1://dado1
        recuadro(22+recu,6,8,4,cROJO,cGRIS_CLARO);
        gotoxy(26+recu,8);
        cout<<(char)4;

            break;
        case 2://dado 2
        recuadro(22+recu,6,8,4,cROJO,cGRIS_CLARO);
        gotoxy(24+recu,8);
        cout<<(char)4;
        gotoxy(28+recu,8);
        cout<<(char)4;

            break;
            case 3://dado 3
        recuadro(22+recu,6,8,4,cROJO,cGRIS_CLARO);
        gotoxy(24+recu,7);
        cout<<(char)4;
        gotoxy(26+recu,8);
        cout<<(char)4;
        gotoxy(28+recu,9);
        cout<<(char)4;

            break;
            case 4://dado 4
        recuadro(22+recu,6,8,4,cROJO,cGRIS_CLARO);
        gotoxy(24+recu,7);
        cout<<(char)4;
        gotoxy(28+recu,7);
        cout<<(char)4;
        gotoxy(28+recu,9);
        cout<<(char)4;
        gotoxy(24+recu,9);
        cout<<(char)4;

            break;
             case 5://dado 5
        recuadro(22+recu,6,8,4,cROJO,cGRIS_CLARO);
        gotoxy(24+recu,7);
        cout<<(char)4;
        gotoxy(28+recu,7);
        cout<<(char)4;
         gotoxy(26+recu,8);
        cout<<(char)4;
        gotoxy(28+recu,9);
        cout<<(char)4;
        gotoxy(24+recu,9);
        cout<<(char)4;

            break;
    case 6://dado 6
        recuadro(22+recu,6,8,4,cROJO,cGRIS_CLARO);
        gotoxy(24+recu,7);
        cout<<(char)4;
        gotoxy(28+recu,7);
        cout<<(char)4;
         gotoxy(24+recu,8);
        cout<<(char)4;
        gotoxy(28+recu,9);
        cout<<(char)4;
        gotoxy(28+recu,8);
        cout<<(char)4;
        gotoxy(24+recu,9);
        cout<<(char)4;

            break;



default:
    break;
}



}
void comentariojugador1(){
                                        locate(7,19);
                                        cout<<"Vas a apostar cierta cantidad de dinero y jugaras a la suerte ";
                                        locate(7,20);
                                        cout<<"mas bien ganando mucho dinero o perdiendolo todo en un instante";

}
void comentariosimulador(){
                                        locate(7,20);
                                        cout<<"En este modo podras indicar el valor de los 3 dados para evaluar ";
                                        locate(7,21);
                                        cout<<"el funcionamiento y determinar la salida de valores (dinero)";


}

void interfaz1(){
recuadro(1,1,79,29,cNEGRO,cGRIS_CLARO);
recuadro(1,1,79,3,cNEGRO,cGRIS_CLARO);
}
void diferentes_resultados (int dados[2],int puntuacion,char jugador[99],int& apuesta, int& apuesta2, int&seguirjugandoo,int& saldoinical){
    if( (dados[0]==1) && (dados[1]==1) && (dados[2]==1) ){
            locate(35,13);
        cout<<"Realizaste triple 1";
        locate(22,14);
        puntuacion=-2;

    }
    else if((dados[0]==1 || dados[1]==1 || dados[2]==1) && (dados[0]==2 || dados[1]==2 || dados[2]==2) && (dados[0]==3 || dados[1]==3 || dados[2]==3)){

            locate(25,13);
    cout<<"Usted saco 1,2,3, perdio instantaneamente";
    puntuacion=-2;

            }
    else if ((dados[0]==dados[1]) && (dados[1]==dados[2]))
    {locate(17,13);
    cout<<"Felicidades usted saco numeros iguales gano instantaneamente";
        puntuacion=100000;
    }
    else if((dados[0]==4 || dados[1]==4 || dados[2]==4) && (dados[0]==5 || dados[1]==5 || dados[2]==5) && (dados[0]==6 || dados[1]==6 || dados[2]==6)){
    locate(20,13);
    cout<<"Felicidades usted saco un 4,5,6 gano instantaneamente";
    puntuacion=100;
    }
    else if (dados[0]==dados[1])
    {   if(dados[2]==1){ puntuacion=0;
    }
        else puntuacion = dados[2];
        locate(24,13);
        cout << "La puntuacion de "<<jugador<<" es de: " << puntuacion << endl;
    }
    else{
        if (dados[0]==dados[2])
        {if(dados[1]==1){ puntuacion=0;
    }
        else puntuacion = dados[1];
            locate(24,13);
           cout << "La puntuacion de "<<jugador<<" es de: " << puntuacion << endl;
        }
        else{
            if (dados[1]==dados[2]){
            if(dados[0]==1){ puntuacion=0;
    }
        else
                puntuacion = dados[0];
                locate(24,13);
                cout << "La puntuacion de "<<jugador<<" es de: " << puntuacion << endl;
            }
        else { puntuacion=3;

                        locate(28,14);
            cout<<"No realizaste ninguna puntuacion ";
            locate(30,15);
            cout<<"Buena suerte para la proxima";
        }


        }


    }
    if(puntuacion==-2){apuesta2=apuesta*-3;}
    else if (puntuacion==100000){apuesta2=apuesta*4;}
    else if (puntuacion==100){apuesta2=apuesta*3;}
    else if(puntuacion<4){apuesta2=apuesta;}
     else if(puntuacion==3){apuesta2=apuesta;
    }
    else if(puntuacion!=100 && puntuacion>=4 && puntuacion!=100000 && puntuacion!=3){
        apuesta2=apuesta*2;
    }
    locate(25,25);
    cout<<"PRESIONE CUALQUIER TECLA PARA SALIR"<<endl;
    locate(26,8); //aca
    getch();
    system ("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    recuadro(22,14,43,2,cBLANCO,cNEGRO);
    system("COLOR 7F");
    setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(23,5);
    cout << " ---------------------------------------- "<< endl;
    if (puntuacion>=4) {
        locate(35,4);
        cout << "  G A N A S T E    " << endl;
        locate(30,10);
    cout<<"USTED RECIBIO UN TOTAL DE "<<apuesta2<<"$";
    saldoinical=saldoinical+apuesta2;


    }
    else{
        locate(35,4);
         cout << "  P E R D I S T E  " << endl;
        if (puntuacion==3){saldoinical=saldoinical-apuesta2;}
        else {saldoinical=saldoinical+apuesta2;}
         locate(30,10);
    cout<<"USTED PERDIO UN TOTAL DE "<<apuesta2<<"$";

    locate(35,11);
    cout<<"LA PROXIMA SERA";

    }


       if(saldoinical==0){

             locate(34,15);
            cout<<"Ya no posees dinero";
            seguirjugandoo=0;
       }
        else if(saldoinical<0){
            locate(25,15);
            cout<<"Perdiste mas de la cuenta, nos debes: "<<saldoinical*-1;
            seguirjugandoo=0;
        }
        else if(saldoinical>0){
         locate(25,15);
         cout<<"[1]JUGAR OTRA RONDA , 0[SALIR]: ";
         cin>>seguirjugandoo;
        }
         locate(20,15);



    locate(26,8);
    cout<<"PRESIONE CUALQUIER TECLA PARA SALIR"<<endl;
    getch();
     if(saldoinical<0){
            system("cls");
             recuadro(19,9,49,2,cBLANCO,cNEGRO);
             system("COLOR 7F");
            setColor(GREEN);
            locate(20,10);
            cout<<"NO, ENSERIO MI CVU ES 000220345065454, PAGAME";
            getch();}



}

void segunda_tirada (int otratiradaa, int conservaar, char jugador[100], int cambiardados1,int cambiardados2,int dados[2],int i){
 locate(21,14);
    cout<<"Desea realizar una segunda tirada? 1(si) 2(no)"<<endl;
    locate(43,15);
    cin>>otratiradaa;
        if (otratiradaa==1){
    locate(29,17);
    cout<<"Desea cambiar algun dado?";locate(12,18);cout<<"1(cambiar los 3),2(si, cambiar 1 dado),3(cambiar 2 dados)"<<endl;
    locate(43,19);
    cin>>conservaar;
if(conservaar==1){
        setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;
    cambiardados1=0;
    cambiardados2=0;
    cargarAleatorio(dados,3,6);
    for (i=0;i<=2;i++){
            locate(40,i+7);
    cout<<"dado "<<i+1<<": "<<dados[i]<<endl;// ACA TERMINE
    }
}
        if(conservaar==2){
        locate(21,19);
     cout<<"Que dado desea cambiar? (1,2,3)";
     locate(43,20);
     cin>>cambiardados1;
     system("cls");
        }

        else if(conservaar==3){
        locate(21,19);
    cout<<"Ingrese el primer dado a cambiar (1,2,3)";
    locate(43,20);
    cin>>cambiardados1;
    locate(21,20);
    cout<<"Ingrese el segundo dado a cambiar(1,2,3) ";
    locate(43,21);
    cin>>cambiardados2;
        }

    if((cambiardados1==1 && cambiardados2==2)|| (cambiardados2==1 && cambiardados1==2)) {
     srand(time(NULL));
    dados[0]=(rand()%6)+1;
    srand(time(NULL));
    dados[1]=(rand()%6)+1;
    }
    else if((cambiardados1==2 && cambiardados2==3) || (cambiardados1==3 && cambiardados2==2)){
    srand(time(NULL));
    dados[1]=(rand()%6)+1;
    srand(time(NULL));
    dados[2]=(rand()%6)+1;
    }
    else if ((cambiardados1==1 && cambiardados2==3) || (cambiardados2==1 && cambiardados1==3)){
         srand(time(NULL));
    dados[0]=(rand()%6)+1;
     srand(time(NULL));
    dados[2]=(rand()%6)+1;
    }
    else if(cambiardados1==1){
    srand(time(NULL));
    dados[0]=(rand()%6)+1;

    }
    else if(cambiardados1==2){
    srand(time(NULL));
    dados[1]=(rand()%6)+1;
    }
    else if(cambiardados1==3){
    srand(time(NULL));
    dados[2]=(rand()%6)+1;
    }
        }}
void segunda_tirada_2_jugadores(int dados[2],int& tripleuno,int& puntuacion,int& variableuno,char jugador[100]){
    locate(37,4);
    cout<<"turno de: "<< jugador<< endl;


if( (dados[0]==1) && (dados[1]==1) && (dados[2]==1) ){
            locate(25,13);
        cout<<"Realizaste triple 1";
        locate(22,14);
        cout<<"Si tu contrincante saco algo diferente, perdiste";
        tripleuno=1;
    }

    else if ((dados[0]==dados[1]) && (dados[1]==dados[2]))
    {
            locate(22,13);
    cout<<"Felicidades usted saco numeros iguales";locate(25,14);cout<<"Si su contrincante no lo supera, gana";
        puntuacion=100000;
    }
    else if((dados[0]==1 || dados[1]==1 || dados[2]==1) && (dados[0]==2 || dados[1]==2 || dados[2]==2) && (dados[0]==3 || dados[1]==3 || dados[2]==3)){

            locate(25,13);
    cout<<"Usted saco 1,2,3, perdio instantaneamente";locate(47,14);cout<<"Si su contrincante no lo iguala, pierde";
    puntuacion=-0;

            }
    else if((dados[0]==4 || dados[1]==4 || dados[2]==4) && (dados[0]==5 || dados[1]==5 || dados[2]==5) && (dados[0]==6 || dados[1]==6 || dados[2]==6)){
    locate(9,13);
    cout<<"Felicidades usted saco un 4,5,6, tiene muchas probabiblidades de ganar";locate(22,14);cout<<" si su oponente no lo iguala, deberia pagarle el doble";
    variableuno=1;
    }


    else if (dados[0]==dados[1])
    {
        puntuacion = dados[2];
        locate(24,13);
        cout << "La puntuacion de "<<jugador<<" es de: " << puntuacion << endl;
    }
    else{
        if (dados[0]==dados[2])
        {
            puntuacion = dados[1];
            locate(24,13);
           cout << "La puntuacion de "<<jugador<<" es de: " << puntuacion << endl;
        }
        else{
            if (dados[1]==dados[2]){
                puntuacion = dados[0];
                locate(24,13);
                cout << "La puntuacion de "<<jugador<<" es de: " << puntuacion << endl;
            }
        else {

                        locate(28,14);
            cout<<"No realizaste ninguna puntuacion ";
            locate(23,15);
            cout<<"Reza que tu oponente no saque ninguna puntuacion";
        }


        }

    }
}
void instrucciones(){
recuadro(1,1,79,29,cBLANCO,cNEGRO);
                                 recuadro(1,1,79,3,cBLANCO,cNEGRO);
                                 locate(35,2);
                                 system("COLOR 7F");
                                 setColor(GREEN);
                                 cout<<" REGLAS";
                                 locate(2,6);
cout<<(char)254<<"Cada jugador tiene hasta un maximo de 2 tiradas para conseguir una puntuacion"<<endl;
    locate(2,8);
cout<<(char)254<<"Se deben lanzar los tres dados al mismo tiempo en el recipiente."<<endl;
locate(2,10);


    locate(22,22);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    getch();
    cls();

                                 recuadro(1,1,79,29,cBLANCO,cNEGRO);
                                 recuadro(1,1,79,3,cBLANCO,cNEGRO);
                                 locate(35,2);
                                 system("COLOR 7F");
                                 setColor(GREEN);
                                 cout<<"OBJETIVO";

    locate(2,6);
    cout<<(char)254<<"El objetivo del juego es conseguir que dos dados marquen el mismo numero"<<endl;locate(4,7);cout<<"El dado restante marcara la puntuacion del jugador."<<endl;
    locate(2,9);
    cout<<(char)254<<"Una vez realizadas las tiradas se compara la puntuacion de ambos jugadores"<<endl;locate(3,10);cout<<"y el que tenga la puntuacion mas alta gana la partida.";
    locate(22,22);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    getch();
    locate(2,12);
    cout<<(char)254<<"Si ambos jugadores acaban con la misma puntuacion o no hacen ninguna "<<endl;
    locate(2,13);
    cout<<"puntuacion en todas sus tiradas es un empate y ninguno de los dos gana"<<endl;
    locate(2,16);
    cout<<(char)254<<"Ademas el dinero tiene que ser apostado de nuevo para otra partida.";

    locate(22,22);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    getch();
cls();



                                 recuadro(1,1,79,29,cBLANCO,cNEGRO);
                                 recuadro(1,1,79,3,cBLANCO,cNEGRO);
                                 locate(33,2);
                                 system("COLOR 7F");
                                 setColor(GREEN);
                                 cout<<"REGLAS ESPECIALES";



locate(2,6);
    cout<<(char)254<<"Si un jugador obtiene los tres dados del mismo numero(triple 2,3,4,5 o 6)"<<endl;locate(4,7);cout<< "obtendra cuatro veces la cantidad de dinero apostada originalmente.";
    locate(22,22);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    getch();
    locate(2,10);


    cout<<(char)254<<"Sin embargo, si un jugador obtiene un 1 en los tres dados, pierde."<<endl;
    locate(2,11);
    cout<< "automaticamente y debera pagar el triple de la cantidad de dinero apostada"<<endl;locate(2,12);cout<< "a su oponente. Estas dos reglas especiales se llaman Tormenta."<<endl;
      locate(22,22);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    locate(2,14);

    cout<<(char)254<<"Por otra parte, si un jugador obtiene un 4-5-6" <<endl;
      locate(22,22);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    locate(2,15);
    cout<<"y su rival debera pagarle el doble de lo apostado."<<endl;

        getch();
    locate(2,17);
    cout<<(char)254<<"Por el contrario, si un jugador obtiene un 1-2-3 perdera automaticamente"<<endl;locate(2,18);cout<< "y debera pagar el doble de la apuesta a su oponente.";
getch();
cls();}

void dados(int dado[2], int& recu){

 for(int d=0;d<=2;d++){

        switch (dado[d])
        {
        case 1://dado1
         dados(1,recu);
        recu+=15;
            break;
        case 2://dado 2
       dados(2,recu);
        recu+=15;
            break;
            case 3://dado 3
      dados(3,recu);
        recu+=15;
            break;
            case 4://dado 4
        dados(4,recu);
        recu+=15;
            break;
             case 5://dado 5
        dados(5,recu);
        recu+=15;
            break;
    case 6://dado 6
      dados(6,recu);
        recu+=15;
            break;

        default:
            break;
        }



    }
setColor(cVERDE);
recu=0;
}
void ingresardados(int dado[2]){
    for(int j=0;j<3;j++){
    locate(23,8+j+1);
    cout<<"INGRESE EL DADO "<<j+1<<" ;";
    cin>>dado[j];


    }
}
void turnode(int contador , int dado[2],char jugador1[100],int recu){
interfaz1();

    recuadro(20,3,43,2,cBLANCO,cNEGRO);
     recuadro(20,5,43,7,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
                                        locate(36,2);
                                           cout<<" 2 JUGADORES ";
                                        locate(1,1);
    cout<<"Ronda: "<<contador;
    locate(23,6);
    cargarAleatorio(dado,3,6);

    locate(37,4);
    cout<<"turno de: "<< jugador1<< endl;
   dados(dado,recu);




}
void comentariopuntaje(int dados[2],int puntuacion ,char jugador[99]){

    if( (dados[0]==1) && (dados[1]==1) && (dados[2]==1) ){
          locate(37,26);
        cout<<"                 ";
            locate(9,27);
            cout<<"                                                                    ";
            locate(26,28);
            cout<<"                                      ";



           ///////////////////////
             locate(38,26);
        cout<<"TRIPLE 1";
            locate(28,27);
            cout<<"PERDERIAS INSTANTANEAMENTE";
            locate(26,28);
            cout<<"PAGANDO EL TRIPLE DE LO APOSTADO";
        locate(22,14);
        puntuacion=-2;

    }
    else if((dados[0]==1 || dados[1]==1 || dados[2]==1) && (dados[0]==2 || dados[1]==2 || dados[2]==2) && (dados[0]==3 || dados[1]==3 || dados[2]==3)){
    locate(30,26);
        cout<<"                                          ";
            locate(9,27);
           cout<<"                                                                    ";
            locate(26,28);
            cout<<"                                        ";


    /////////////////////////////

            locate(37,26);
            cout<<"SACO 1,2,3";
            locate(28,27);
            cout<<"PERDERIAS INSTANTANEAMENTE";
             locate(26,28);
            cout<<"PAGANDO EL DOBLE DE LO APOSTADO";
    puntuacion=0;

            }
    else if ((dados[0]==dados[1]) && (dados[1]==dados[2]))
    {    locate(30,26);
        cout<<"                                          ";
          locate(9,27);
           cout<<"                                                                    ";
            locate(26,28);
            cout<<"                                         ";

        //////////////////////////////////////////////////////////////
         locate(32,26);
            cout<<"SACO NUMEROS IGUALES";
                locate(9,27);
        cout<<"GANARIAS INSTANTANEAMENTE/SI EL OTRO JUGADOR SACA DE MENOR JERARQUIA";
        locate(26,28);
            cout<<"GANANDO EL CUADRUPLE DE LO APOSTADO";




        puntuacion=100000;
    }
    else if((dados[0]==4 || dados[1]==4 || dados[2]==4) && (dados[0]==5 || dados[1]==5 || dados[2]==5) && (dados[0]==6 || dados[1]==6 || dados[2]==6)){
         locate(30,26);
        cout<<"                                          ";
          locate(9,27);
           cout<<"                                                                    ";
            locate(26,28);
            cout<<"                                         ";

        //////////////////////////////////////////////////////////////

   locate(37,26);
    cout<<"SACO 4,5,6";
      locate(28,27);
            cout<<"GANARIAS INSTANTANEAMENTE";
            locate(26,28);
            cout<<"GANANDO EL TRIPLE DE LO APOSTADO";


    puntuacion=100;
    }
    else if (dados[0]==dados[1])
    {   if(dados[2]==1){ puntuacion=0;
    }
        else puntuacion = dados[2];
           locate(30,26);
        cout<<"                                          ";
          locate(9,27);
           cout<<"                                                                    ";
            locate(26,28);
            cout<<"                                         ";

        //////////////////////////////////////////////////////////////



        locate(28,27);
         cout << "TU PUNTUACION SERIA DE: " << puntuacion << endl;
    }
    else{
        if (dados[0]==dados[2])
        {if(dados[1]==1){ puntuacion=0;
    }
        else puntuacion = dados[1];
           locate(30,26);
        cout<<"                                          ";
          locate(9,27);
           cout<<"                                                                    ";
            locate(26,28);
            cout<<"                                         ";

        //////////////////////////////////////////////////////////////
            locate(28,27);
           cout << "TU PUNTUACION SERIA DE: " << puntuacion << endl;
        }
        else{
            if (dados[1]==dados[2]){
            if(dados[0]==1){ puntuacion=0;
    }
        else
                puntuacion = dados[0];
                   locate(30,26);
        cout<<"                                          ";
          locate(9,27);
           cout<<"                                                                    ";
            locate(26,28);
            cout<<"                                         ";

        //////////////////////////////////////////////////////////////
                locate(28,27);
                cout << "TU PUNTUACION SERIA DE: " << puntuacion << endl;
            }
        else {
                  locate(30,26);
        cout<<"                                          ";
          locate(9,27);
           cout<<"                                                                    ";
            locate(26,28);
            cout<<"                                         ";

        //////////////////////////////////////////////////////////////

            locate(26,27);
            cout<<"NO REALIZASTE NINGUNA PUNTUACION";

        }


        }


    }





}
void cambiardados(int dado[2],int otratirada,int conservar,int cambiardado1,int cambiardado2,char jugador1[100],int recu,int puntuacion){
int y=0,x=0;
int key=0;
bool ms=true;
bool mnn=true;




    gotoxy(23,15);
cout<<"DESEA CAMBIAR DE DADOS ?";
gotoxy(24,17);
cout<<"SI";
gotoxy(24,19);
cout<<"NO";

 do
     {
      comentariopuntaje(dado,puntuacion,jugador1);
      gotoxy(23,17+y);
      cout<<(char)219;
      key=getkey();
      switch (key)
      {
      case 15://abajo
           gotoxy(23,17+y);
          cout<<" ";
           y+=2;
           if(y>2){
            y=0;
           }
          break;
      case 14://arriba
          gotoxy(23,17+y);
          cout<<" ";
           y-=2;
           if(y<0){
            y=2;
           }
          break;
      case 1://enter
              switch (y)
            {
                case 0 ://SI
                    gotoxy(23,17);
                    cout<<" ";
                    gotoxy(24,19);
                    cout<<"  ";
                    gotoxy(25,18);
                    cout<<"ASIGNE UN VALOR A LOS DADOS ";
                    gotoxy(26,19);
                    cout<<"1 "<<"="<<dado[0];
                     gotoxy(26,20);
                    cout<<"2 "<<"="<<dado[1];
                     gotoxy(26,21);
                    cout<<"3 "<<"="<<dado[2];
                    gotoxy(39,23);
                    cout<<"LISTO";

                    do
                    {
                    comentariopuntaje(dado,puntuacion,jugador1);
                     gotoxy(25+x,19+y);
                     cout<<(char)219;
                     key=getkey();
                     switch (key)



                     {   case 1:
                         switch (y)
                         {
                             case 0 ://dado 1
                                 gotoxy(29,19);
                                 cout<<" ";
                                 gotoxy(33,19);
                                 cout<<"<==INGRESE NUEVO VALOR";
                                 gotoxy(29,19);
                                 cin>>dado[0];
                                 dados(dado,recu);
                                  gotoxy(33,19);
                                  cout<<"                        ";

                             break;
                             case 1 ://dado 2
                                  gotoxy(29,20);
                                 cout<<" ";
                                 gotoxy(33,20);
                                 cout<<"<==INGRESE NUEVO VALOR";
                                 gotoxy(29,20);
                                 cin>>dado[1];
                                 dados(dado,recu);
                                 gotoxy(33,20);
                                 cout<<"                         ";



                             break;
                             case 2 ://dado 3
                                 gotoxy(29,21);
                                 cout<<" ";
                                 gotoxy(33,21);
                                 cout<<"<==INGRESE NUEVO VALOR";
                                 gotoxy(29,21);
                                 cin>>dado[2];
                                 dados(dado,recu);
                                 gotoxy(33,21);
                                  cout<<"                         ";
                             break;

                       case 4 ://LISTO
                           mnn=false;
                           ms=false;
                        cls();
                        break;

                         }

                         break;
                         case 15://abajo
                         gotoxy(25,19+y);
                         cout<<" ";
                         y+=1;
                         if(y>4){
                                gotoxy(37,23);
                              cout<<"  ";
                            x=0;
                            y=0;


                         }
                         if(y>2){
                            y=4;
                            x+=13;
                         }

                      break;
                       case 14://arriba
                       gotoxy(25,19+y);
                       cout<<" ";
                       y-=1;
                        if(y<0){
                            x+=13;
                            y=4;

                         } if(y==3){
                              gotoxy(37,23);
                              cout<<"  ";
                            y=2;
                            x=0;
                         }
                        break;





                     }







                    } while (ms==true);

                    break;

                    case 2 ://NO
                        cls();
                mnn=false;
                break;

            }
        break;



      }


     } while (mnn==true);







}
void cambiardadosj1(int dado[2],int otratirada,int conservar,int cambiardado1,int cambiardado2,char jugador1[100],int recu,int puntuacion){
int y=0,x=0;
int key=0;
bool ms=true;
bool mnn=true;
int DADO2=0;
int dado1=0,dado2=0,dado3=0;




    gotoxy(23,15);
cout<<"DESEA REALIZAR OTRA TIRADA ?";
gotoxy(24,17);
cout<<"SI";
gotoxy(24,19);
cout<<"NO";

 do
     {
      comentariopuntaje(dado,puntuacion,jugador1);
      gotoxy(23,17+y);
      cout<<(char)219;
      key=getkey();
      switch (key)
      {
      case 15://abajo
           gotoxy(23,17+y);
          cout<<" ";
           y+=2;
           if(y>2){
            y=0;
           }
          break;
      case 14://arriba
          gotoxy(23,17+y);
          cout<<" ";
           y-=2;
           if(y<0){
            y=2;
           }
          break;
      case 1://enter
              switch (y)
            {
                case 0 ://SI
                    gotoxy(23,17);
                    cout<<" ";
                    gotoxy(24,19);
                    cout<<"  ";
                    gotoxy(25,18);
                    cout<<"ELIJA LA CANTIDAD DE DADOS";
                    gotoxy(26,19);
                    cout<<"1 DADO ";
                     gotoxy(26,20);
                    cout<<"2 DADOS";
                     gotoxy(26,21);
                    cout<<"3 DADOS ";


                    do
                    {
                    comentariopuntaje(dado,puntuacion,jugador1);
                     gotoxy(25+x,19+y);
                     cout<<(char)219;
                     key=getkey();
                     switch (key)



                     {   case 1:
                         switch (y)
                         {















                             case 0 ://CAMBIAR 1 DADO
                                    gotoxy(26,20);
                                    cout<<"       ";
                                    gotoxy(26,21);
                                    cout<<"       ";
                                 gotoxy(33,20);
                                 cout<<"ELIJA QUE DADO DESEA CAMBIAR ";
                                 gotoxy(33,21);
                                 cout<<"DADO 1="<<dado[0];
                                 gotoxy(33,22);
                                 cout<<"DADO 2="<<dado[1];
                                 gotoxy(33,23);
                                 cout<<"DADO 3="<<dado[2];
                                  do
                                  {
                                        gotoxy(32,21+y);
                                        cout<<(char)219;
                                        key=getkey();



                                        switch (key)

                                        {
                                        case 1://enter
                                             switch (y)
                                             {
                                                 case 0://dado1
                                                     gotoxy(40,21);
                                                     cout<<" ";
                                                 dado[0]=(rand()%6)+1;
                                                 comentariopuntaje(dado,puntuacion,jugador1);
                                                      gotoxy(40,21);
                                                     cout<<dado[0];
                                                      dados(dado,recu);
                                                      gotoxy(19,13);
                                                      mnn=false;
                                                      ms=false;
                                                      setColor(RED);
                                                      cout<<"PRESIONE CUALQUIER TECLA PARA PASAR A LA TABLA"<<endl;
                                                      setColor(GREEN);
                                                      getch();


                                                 break;
                                                 case 1://dado 2
                                                     gotoxy(40,22);
                                                     cout<<" ";



                                                 dado[1]=(rand()%6)+1;
                                                 comentariopuntaje(dado,puntuacion,jugador1);
                                                        gotoxy(40,22);
                                                     cout<<dado[1];
                                                      dados(dado,recu);
                                                      gotoxy(19,13);
                                                      mnn=false;
                                                      ms=false;
                                                       setColor(RED);
                                                      cout<<"PRESIONE CUALQUIER TECLA PARA PASAR A LA TABLA"<<endl;
                                                      setColor(GREEN);
                                                      getch();



                                                 break;
                                                 case 2://dado 3
                                                     gotoxy(40,23);
                                                     cout<<" ";
                                                 dado[2]=(rand()%6)+1;
                                                 comentariopuntaje(dado,puntuacion,jugador1);
                                                 gotoxy(40,23);
                                                     cout<<dado[2];
                                                      dados(dado,recu);
                                                     gotoxy(19,13);
                                                      mnn=false;
                                                      ms=false;
                                                       setColor(RED);
                                                      cout<<"PRESIONE CUALQUIER TECLA PARA PASAR A LA TABLA"<<endl;
                                                      setColor(GREEN);
                                                      getch();




                                                 break;


                                             }



                                            break;
                                        case 15://abajo
                                            gotoxy(32,21+y);
                                            cout<<" ";
                                            y+=1;
                                              if(y>2){
                                                    y=0;
                                                }
                                            break;
                                         case 14://arriba
                                            gotoxy(32,21+y);
                                            cout<<" ";
                                            y-=1;
                                             if(y<0){
                                              y=2;
                                                }

                                            break;

                                        }


                                  } while (mnn==true);


                                 dados(dado,recu);
                                  gotoxy(33,19);
                                  cout<<"                        ";

                             break;
                             case 1 ://2 DADOS

                                 gotoxy(25,20);
                                    cout<<" ";
                                    gotoxy(26,21);
                                    cout<<"       ";
                                 gotoxy(33,20);
                                 cout<<"ELIJA QUE DADO DESEA CAMBIAR ";
                                 gotoxy(33,21);
                                 cout<<"DADO 1="<<dado[0];
                                 gotoxy(33,22);
                                 cout<<"DADO 2="<<dado[1];
                                 gotoxy(33,23);
                                 cout<<"DADO 3="<<dado[2];
                                  do
                                  {
                                        gotoxy(32,21+y);
                                        cout<<(char)219;
                                        key=getkey();



                                        switch (key)

                                        {
                                        case 1://enter
                                             switch (y)
                                             {
                                                 case 0://dado1
                                                     if(dado1==0){
                                                     gotoxy(40,21);
                                                     cout<<" ";
                                                 dado[0]=(rand()%6)+1;
                                                 comentariopuntaje(dado,puntuacion,jugador1);
                                                 dado1+=1;
                                                 DADO2+=1;
                                                      gotoxy(40,21);
                                                     cout<<dado[0];
                                                      dados(dado,recu);
                                                     gotoxy(41,21);
                                                      cout<<"               ";
                                                      gotoxy(41,22);
                                                      cout<<"               ";
                                                      gotoxy(41,23);
                                                      cout<<"               ";
                                                      }else{
                                                          gotoxy(41,21);
                                                      cout<<"ELIGE OTRO DADO";
                                                      }

                                                      if(DADO2==2){
                                                            gotoxy(19,13);
                                                         mnn=false;
                                                      ms=false;
                                                      setColor(RED);
                                                      cout<<"PRESIONE CUALQUIER TECLA PARA PASAR A LA TABLA"<<endl;
                                                      setColor(GREEN);
                                                      getch();
                                                      }



                                                 break;
                                                 case 1://dado 2
                                                     if(dado2==0){
                                                     gotoxy(40,22);
                                                     cout<<" ";



                                                 dado[1]=(rand()%6)+1;
                                                 comentariopuntaje(dado,puntuacion,jugador1);
                                                 dado2+=1;
                                                 DADO2+=1;
                                                        gotoxy(40,22);
                                                     cout<<dado[1];
                                                      dados(dado,recu);
                                                      gotoxy(41,21);
                                                      cout<<"               ";
                                                      gotoxy(41,22);
                                                      cout<<"               ";
                                                      gotoxy(41,23);
                                                      cout<<"               ";
                                                      }
                                                      else{
                                                          gotoxy(41,22);
                                                      cout<<"ELIGE OTRO DADO";
                                                      }


                                                       if(DADO2==2){
                                                            gotoxy(19,13);
                                                         mnn=false;
                                                      ms=false;
                                                       setColor(RED);
                                                      cout<<"PRESIONE CUALQUIER TECLA PARA PASAR A LA TABLA"<<endl;
                                                      setColor(GREEN);
                                                      getch();
                                                      }



                                                 break;
                                                 case 2://dado 3
                                                     if(dado3==0){
                                                     gotoxy(40,23);
                                                     cout<<" ";
                                                 dado[2]=(rand()%6)+1;
                                                 comentariopuntaje(dado,puntuacion,jugador1);
                                                 dado3+=1;
                                                 DADO2+=1;
                                                 gotoxy(40,23);
                                                     cout<<dado[2];
                                                      dados(dado,recu);
                                                      gotoxy(41,21);
                                                      cout<<"               ";
                                                      gotoxy(41,22);
                                                      cout<<"               ";
                                                      gotoxy(41,23);
                                                      cout<<"               ";
                                                      }
                                                      else{
                                                          gotoxy(41,23);
                                                      cout<<"ELIGE OTRO DADO";
                                                      }

                                                       if(DADO2==2){
                                                            gotoxy(19,13);
                                                         mnn=false;
                                                      ms=false;
                                                       setColor(RED);
                                                      cout<<"PRESIONE CUALQUIER TECLA PARA PASAR A LA TABLA"<<endl;
                                                      setColor(GREEN);
                                                      getch();
                                                      }





                                                 break;


                                             }



                                            break;
                                        case 15://abajo
                                            gotoxy(32,21+y);
                                            cout<<" ";
                                            y+=1;
                                              if(y>2){
                                                    y=0;
                                                }
                                            break;
                                         case 14://arriba
                                            gotoxy(32,21+y);
                                            cout<<" ";
                                            y-=1;
                                             if(y<0){
                                              y=2;
                                                }

                                            break;

                                        }


                                  } while (DADO2!=2);




                             break;
                             case 2 ://dado 3

                                 gotoxy(26,20);
                                    cout<<"       ";
                                    gotoxy(25,21);
                                    cout<<"        ";
                                 gotoxy(33,20);
                                 cout<<"HA REALIZADO OTRA TIRADA ";
                                 cargarAleatorio(dado,3,6);
                                 gotoxy(33,21);
                                 cout<<"DADO 1="<<dado[0];
                                 gotoxy(33,22);
                                 cout<<"DADO 2="<<dado[1];
                                 gotoxy(33,23);
                                 cout<<"DADO 3="<<dado[2];
                                 dados(dado,recu);
                                 comentariopuntaje(dado,puntuacion,jugador1);
                                  mnn=false;
                                                      ms=false;
                                                    gotoxy(19,13);
                                                      setColor(RED);
                                                      cout<<"PRESIONE CUALQUIER TECLA PARA PASAR A LA TABLA"<<endl;
                                                      setColor(GREEN);
                                                      getch();




                         }

                         break;
                         case 15://abajo
                         gotoxy(25,19+y);
                         cout<<" ";
                         y+=1;

                         if(y>2){
                            y=0;

                         }

                      break;
                       case 14://arriba
                       gotoxy(25,19+y);
                       cout<<" ";
                       y-=1;
                        if(y<0){

                            y=2;

                         }
                        break;





                     }







                    } while (ms==true);

                    break;

                    case 2 ://NO
                        cls();
                mnn=false;
                break;

            }
        break;



      }


     } while (mnn==true);







}

void apostarmas(int apuesta,int saldoinicial,int& corte){
if(apuesta>saldoinicial){
                                        locate(21,14);
                                        setColor(RED);
                                        cout<<"NO PUEDES APOSTAR MAS DE "<<saldoinicial<<"$";
                                        setColor(GREEN);
                                        locate(39,12);
                                        cout<<"        ";

                                        }else{
                                        corte=0;
                                            }


}
////MENU/////
//SIMULADOR//
void simulador(char jugador1[99],int& corte,int& saldoinicial,int& apuesta){
    locate(30,20);

                                         system("cls");
                                        interfaz1();
                                        recuadro(20,5,43,2,cBLANCO,cNEGRO);
                                         recuadro(20,8,43,5,cBLANCO,cNEGRO);


                                        system("COLOR 7F");
                                        setColor(GREEN);
                                            locate(36,6);
    cout<<"TU TURNO;"<<jugador1;
    locate(36,2);
    cout<<" SIMULADOR ";
    corte=1;
    while (corte!=0){
        locate(22,9);
    cout<<"SALDO ACTUAL : "<<saldoinicial<<"$";
    locate(22,12);
    cout<<"INGRESE APUESTA :";
    cin>>apuesta;
    apostarmas(apuesta,saldoinicial,corte);
    }


         interfaz1();
    recuadro(20,5,43,2,cBLANCO,cNEGRO);
    recuadro(20,8,43,5,cBLANCO,cNEGRO);
    recuadro(20,15,43,2,cBLANCO,cNEGRO);


                                        system("COLOR 7F");
                                        setColor(GREEN);
                                            locate(36,6);
    cout<<"TU TURNO;"<<jugador1;
    locate(35,2);
    cout<<" SIMULADOR ";

    locate(32,16);

    cout<<"Saldo actual: "<<saldoinicial<<"$";




}
void cartel(){
recuadro(19,14,44,10,cBLANCO,cNEGRO);
     recuadro(19,2,44,10,cBLANCO,cNEGRO);
    system("COLOR 7F");
    setColor(GREEN);
    locate(21,3);
    cout<< " ---------------------------------------- " <<endl;
    locate(35,4);
    cout<<"TUS DADOS SON: "<<endl;
    locate(21,5);
    cout<< " ---------------------------------------- " <<endl;

}
void cartel2(char jugador1[99]){
  recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");
    setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;
    system("cls");
     recuadro(19,2,44,10,cBLANCO,cNEGRO);
    system("COLOR 7F");
    setColor(GREEN);
    locate(21,3);
    cout<< " ---------------------------------------- " <<endl;
    locate(35,4);
    cout<<"TUS DADOS SON: "<<endl;
    locate(21,5);
    cout<< " ---------------------------------------- " <<endl;



}
//UN JUGADOR//
void menu_unico_jugador (char jugador[100],const char *texto,int y,int& apuesta,int& saldoiniciall,int& saldoactual, int&seguirjugandoo){
                                 system("cls");
                                        seguirjugandoo=5;
                                        interfaz1();
                                         recuadro(20,12,45,4,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        recuadro(20,6,45,4,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
                                        system("COLOR 7F");
                                        recuadro(6,18,69,6,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
                                         locate(35,2);
                                        cout<<texto;
                                        switch (y)
                                        {
                                        case 1:
                                          comentariosimulador();
                                            break;
                                        case 2:
                                          comentariojugador1();
                                            break;
                                        default:
                                            break;
                                        }

                                        locate(27,8);

                                        cout<<"Nombre del jugador : ";
                                        cin>>jugador;
                                        locate(27,14);
                                        cout<<"Ingrese saldo inicial: ";
                                        cin>>saldoiniciall;








                                        locate(38,26);
                                        cout<<"PERFECTO"<<endl;
                                        locate(22,27);
                                        cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;

                                        getch();




}
void cartelturno(){
}
//2 JUGADORES//
void interfaz_2_jugadores(int& contador){interfaz1();

    recuadro(20,3,43,2,cBLANCO,cNEGRO);
     recuadro(20,5,43,7,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
                                        locate(36,2);
                                           cout<<" 2 JUGADORES ";
                                        locate(1,1);
    cout<<"Ronda: "<<contador;}
void puntaje (int puntuacionj1,int puntuacionj2,int ganador,int apuesta,int apuesta2,int triple1,int triple1j2,int variable1,int variable2,int empate,char jugador1[99],char jugador2[99]){
 if(puntuacionj1==100000 || puntuacionj2==100000){
        ganador=apuesta*4;


    }
    if ((triple1==1) && (triple1j2==1))
    {
        puntuacionj1=-1;
        puntuacionj2=-1;

    }
    else if(triple1==1){
        puntuacionj1=-1;
    }
    else if(triple1j2==1){
    puntuacionj2=-1;
    }
    if ((variable1==1) || (variable2==1)){
    ganador=apuesta*3;
    }
    else {ganador=apuesta*2;
    }


    system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
    locate(23,3);
    cout << " --------------------------------------- "<< endl;
    if (puntuacionj1==puntuacionj2) {
            locate(23,3);
    cout << " --------------------------------------- "<< endl;
            locate(40,4);
        cout << " EMPATE " << endl;
        locate(23,5);
    cout << " --------------------------------------- "<< endl;
        empate=0;
        locate(22,15);


    }
    else{
        if (puntuacionj1>puntuacionj2){
                locate(25,4);
            cout << " GANO EL JUGADOR "<<jugador1<<" FELICIDADES " << endl;
            locate(32,6);
            cout<<"RECIBIO UN TOTAL DE: "<<ganador;locate(37,7);cout<<"Pagate el asado";
            apuesta2=0;
    }
        else{
                locate(25,4);
            cout << " GANO EL JUGADOR "<<jugador2<<" FELICIDADES " << endl;
            locate(32,6);
            cout<<"RECIBIO UN TOTAL DE: "<<ganador;
            locate(37,7);cout<<"Pagate el asado";
            apuesta2=0;
        }
    }


}

int main()
{
system("mode con: cols=80 lines=30");
 hidecursor();
 int recu=0,corte=1;
 int i,PrimerVariable,jugadores,p,x,nombre=0,nota,saldoinicial,saldoactual,seguirjugando=5;
    int dado[2],dadoj2[2], puntuacionj1=0,puntuacionj2=0,otratirada,conservar,cambiardado1,cambiardado2,tam, salir=1,apuesta,apuesta2=0,ganador,variable1,variable2,empate=0,contador=0,triple1=0,triple1j2=0;
    char jugador1[100],jugador2[100],jugador3[100];

    bool mn=true;
    int key,y=0;


    do{
    SetConsoleTitle("Hola");
    recuadro(20,4,41,4);
    recuadro(26,10,29,10);
    system("COLOR 7F");

    setBackgroundColor(rlutil::GREY);
    setColor(rlutil:: GREEN);

locate(35,6);
    cout<<"CHINCHIRORIN"<<endl;
    locate(34,12);
    cout<<"  NUEVO JUEGO "<<endl;
        locate(34,15);
    cout<<" INSTRUCCIONES"<<endl;
 locate(34,15);

    cout<<" INSTRUCCIONES"<<endl;
     locate(34,18);

    cout<<"     SALIR    "<<endl;

do{

mn=true;

locate(33,12+y);
        cout<<(char)219;


    key=getkey();

    switch (key)
    {
        case 15://abajo
        locate(33,12+y);
        cout<<"  ";
        y+=3;
        if(y>6){
            y=0;
        }

        break;
        case 14://arriba

         locate(33,12+y);
        cout<<"  ";
        y-=3;
        if(y<0){
        y=6;
        }
        break;
        case 1://enter
                switch(y){
                    //SALIR
                case 6:
                    system("cls");
                    recuadro(20,9,45,4);
                    recuadro(20,14,45,2);
                     system("COLOR 7F");
                     setBackgroundColor(rlutil::GREY);
                    setColor(rlutil:: GREEN);

                    gotoxy(23,10);
                cout<<"GRACIAS POR JUGAR/CORREGIR NUESTRO JUEGO";
                gotoxy(25,15);
                cout<<"INSERTE NOTA DE EVALUACION: ";
                cin>>nota;

                    cls();
                    return 0;
                    break;
                    case 0://NUEVO JUEGO

                        cls();

                         recuadro(20,4,41,3,cBLANCO,cNEGRO);
                         recuadro(26,10,29,10,cBLANCO,cNEGRO);
                         system("COLOR 7F");
                         locate(39,5);
                         setColor(GREEN);
                         cout<<"MODO"<<endl;
                         locate(35,12);
                         cout<<"1 Jugador"<<endl;
                         locate(35,15);
                         cout<<"2 Jugadores"<<endl;
                          locate(35,18);
                         cout<<"Simulador"<<endl;
                         do
                         {

                            locate(33,12+y);
                            cout<<(char)219;
                             key=getkey();

                             switch (key)
                             {
                            case 1://ENTER
                                    switch(y){
                                    case 6://SIMULADOR

                                        menu_unico_jugador(jugador1,"SIMULADOR",1,apuesta,saldoinicial,saldoactual,seguirjugando);
                                         while(seguirjugando!=0){

                                          simulador(jugador1,corte,saldoinicial,apuesta);//INGRESAR NOMBRE,SALDO,APUESTA
                                          ingresardados(dado);//INGRESAR DADOS


                                            interfaz1();//RECUADRO PRINCIPAL



                                            system("cls");
                                            cartel();//CARTEL " TU TURNO "
                                            dados(dado,recu);//GRAFICAR DADOS
                                            cambiardados(dado,otratirada,conservar,cambiardado1,cambiardado2,jugador1,recu,puntuacionj1);//CAMBIAR DADOS


                                            system("cls");
                                            cartel2(jugador1);//CARTEL "TURNO DE"
                                            dados(dado,recu);//GRAFICAR DADOS

                                            diferentes_resultados(dado,puntuacionj1,jugador1,apuesta,apuesta2,seguirjugando,saldoinicial);//VALIDACIONES DEPENDIENDO DE LA PUNTUACION

                                                                }

                                        //system("pause");//TECLEAR PARA PROCEDER A LA SIGUIENTE LINEA
                                           cls();
                                           mn=false;//VOLVER AL MENU




                                           break;



                                    case 0://JUGADOR 1
                                     cls();
                                     system("cls");
                                         menu_unico_jugador(jugador1,"JUGADOR 1",2,apuesta,saldoinicial,saldoactual,seguirjugando);
                                       while(seguirjugando!=0){
                                        locate(30,20);

                                        system("cls");
                                        interfaz1();
                                        recuadro(20,5,43,2,cBLANCO,cNEGRO);
                                        recuadro(20,8,43,5,cBLANCO,cNEGRO);


                                        system("COLOR 7F");
                                        setColor(GREEN);
                                            locate(36,6);
                                        cout<<"TU TURNO;"<<jugador1;
                                        locate(36,2);
                                        cout<<" JUGADOR 1 ";
                                        corte=1;
                                        while (corte!=0){
                                        locate(22,9);
                                        cout<<"SALDO ACTUAL : "<<saldoinicial<<"$";
                                        locate(22,12);
                                        cout<<"INGRESE APUESTA :";
                                        cin>>apuesta;
                                       apostarmas(apuesta,saldoinicial,corte);
                                                            }


                                            interfaz1();
                                        cargarAleatorio(dado,3,6);






                                        system("cls");
                                        cartel();
                                        locate(34,12);

                                        cout<<"Saldo actual: "<<saldoinicial<<"$";

                                        dados(dado,recu);
                                        cambiardadosj1(dado,otratirada,conservar,cambiardado1,cambiardado2,jugador1,recu,puntuacionj1);


                                        system("cls");
                                        cartel2(jugador1);
                                        dados(dado,recu);

                                        diferentes_resultados(dado,puntuacionj1,jugador1,apuesta,apuesta2,seguirjugando,saldoinicial);

}

                                        //system("pause");//TECLEAR PARA PROCEDER A LA SIGUIENTE LINEA
                                        cls();
                                     mn=false;//VOLVER AL MENU

                                        break;







                                     system("pause");
                                    cls();
                                     mn=false;
                                    break;
                                    case 3://MODO 2 JUGADORES
                                        cls();
                                        empate=0;
                                        contador=0;
                                        interfaz1();

                                        puntuacionj1=1;
                                        puntuacionj2=1;
                                        recuadro(23,13,45,4,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        recuadro(23,6,45,4,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        recuadro(23,19,45,4,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
                                           locate(36,2);
                                           cout<<" 2 JUGADORES ";
                                        locate(27,8);
                                        cout<<"Nombre del jugador 1: ";

                                        cin>>jugador1;
                                        locate(27,15);
                                        cout<<"Nombre del jugador 2: ";
                                        locate(49,15);
                                        cin>>jugador2;
                                        locate(24,21);
                                        while(empate!=1){
                                        if((puntuacionj1!=0) && (puntuacionj2!=0) && (puntuacionj1==puntuacionj2))
                                        {
                                        apuesta2=apuesta;
                                        }


                                        if (contador==0){cout<<"Apuesta de ambos jugadores(en pesos): ";
                                        locate(62,21);
                                        cin>>apuesta;}
                                        contador=contador+1;
                                        empate=1;


    triple1=0;
    triple1j2=0;
    variable1=0;
    variable2=0;
    cambiardado1=0;
    cambiardado2=0;
    conservar=0;
    otratirada=0;
    system("cls");


                                       turnode(contador,dado,jugador1,recu);
                                       cambiardadosj1(dado,otratirada,conservar,cambiardado1,cambiardado2,jugador1,recu,puntuacionj1);
                                       system("cls");
                                        interfaz_2_jugadores(contador);
                                       dados(dado,recu);
                                       segunda_tirada_2_jugadores(dado,triple1,puntuacionj1,variable1,jugador1);
                                       locate(17,25);
                                       cout<<"PRESIONE CUALQUIER TECLA PARA PASAR EL TURNO DEL ADVERSARIO"<<endl;
                                       getch();
                                       system ("cls");
                                       cambiardado1=0;
                                       cambiardado2=0;
                                       system("cls");
                                       turnode(contador,dadoj2,jugador2,recu);
                                       locate(23,3);
                                       cargarAleatorio(dadoj2,3,6);
                                       cambiardadosj1(dadoj2,otratirada,conservar,cambiardado1,cambiardado2,jugador2,recu,puntuacionj2);
                                       system("cls");
                                       interfaz_2_jugadores(contador);
                                       dados(dado,recu);
                                       segunda_tirada_2_jugadores(dadoj2,triple1j2,puntuacionj2,variable2,jugador2);
                                      locate(20,17);
                                        cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
                                       getch();
                                      puntaje(puntuacionj1,puntuacionj2,ganador,apuesta,apuesta2,triple1,triple1j2,variable1,variable2,empate,jugador1,jugador2);

                                        }
    locate(23,5);
    cout << " --------------------------------------- "<< endl;
    locate(22,15);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    getch();
                                     cls();
                                     mn=false;
                                        break;
                                            }
                                        break;

                            case 15://abajo
                                  locate(33,12+y);
                                  cout<<"  ";
                                  y+=3;
                                   if(y>6){
                                    y=0;
                                  }

                                 break;
                             case 14://arriba
                                 locate(33,12+y);
                                  cout<<"  ";
                                  y-=3;
                                  if(y<0){
                                    y=6;
                                  }
                                  break;

                             default:
                                 break;
                             }


                         } while (mn==true);


                        break;

                             case 3://INSTRUCCIONES

                           instrucciones();
mn=false;

                                break;

        }
        break;
    default:
        break;
    }


} while(mn==true);
    }while(key!=0);

    return 0;
}
