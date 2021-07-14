#include <iostream>
#include<stdlib.h>
#include "rlutil.h"
#include <wingdi.h>
#include "funciones.h"
#include "funciones2.h"
#include <conio.h>
#include <windows.h>

using namespace std;
using namespace rlutil;
#include "dados.h" //sdfsdfsdf



void diferentes_resultados (int dados[2],int puntuacion,char jugador[99]){
    if( (dados[0]==1) && (dados[1]==1) && (dados[2]==1) ){
            locate(35,13);
        cout<<"Realizaste triple 1";
        locate(22,14);
        puntuacion=-2;

    }
    else if((dados[0]==1 || dados[1]==1 || dados[2]==1) && (dados[0]==2 || dados[1]==2 || dados[2]==2) && (dados[0]==3 || dados[1]==3 || dados[2]==3)){

            locate(25,13);
    cout<<"Usted saco 1,2,3, perdio instantaneamente";
    puntuacion=0;

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
    else if ((dados[0]==0) || (dados[1]==0) || (dados[2]==0))
    {
        locate(24,13);
        cout << "Perdiste a esto se lo llama 'meada'" << endl;

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
        else {

                        locate(28,14);
            cout<<"No realizaste ninguna puntuacion ";
            locate(30,15);
            cout<<"Buena suerte para la proxima";
        }


        }

    }
    locate(25,25);
    cout<<"PRESIONE CUALQUIER TECLA PARA SALIR"<<endl;
    locate(26,8); //aca
    getch();
    system ("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");
    setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(23,3);
    cout << " --------------------------------------- "<< endl;
    if (puntuacion>=4) {
        locate(30,5);
        cout << " ----- G A N A S T E   ----- " << endl;
    }
    else{
        locate(30,5);
        cout << " ----- P E R D I S T E ----- " << endl;
    }
    locate(26,8);
    cout<<"PRESIONE CUALQUIER TECLA PARA SALIR"<<endl;
    getch();

}
void menu_unico_jugador (char jugador[100]){
system("cls");
                                        system("COLOR 7F");
                                        recuadro(23,6,45,4,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
                                        system("COLOR 7F");
                                        recuadro(10,15,69,6,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
                                        locate(27,8);
                                        cout<<"Nombre del jugador : ";
                                        cin>>jugador;
                                        locate(14,16);
                                        cout<<"Como no enfrentara a otro jugador, para ganar debera sacar una"; locate(30,17); cout<< "puntuacion mayor o igual a 4";
                                        locate(22,25);
                                        cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
                                        getch();




}
int main()
{
system("mode con: cols=80 lines=30");
 hidecursor();

 int i,PrimerVariable,jugadores,p,x,nombre=0;
    int dado[2],dadoj2[2], puntuacionj1=0,puntuacionj2=0,otratirada,conservar,cambiardado1,cambiardado2,tam, salir=1,apuesta,apuesta2=0,ganador,variable1,variable2,empate=0,contador=0,triple1=0,triple1j2=0;
    char jugador1[100],jugador2[100],jugador3[100];

    bool mn=true;
    int key,y=0;


    do{
    SetConsoleTitle("Hola");
    recuadro(20,4,41,4);
    recuadro(26,10,29,10);
    system("COLOR 7F");

    rlutil :: setBackgroundColor(rlutil::GREY);
    rlutil :: setColor(rlutil:: GREEN);

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






                    cls();
                    return 0;
                    break;
                    case 0://NUEVO JUEGO

                        cls();

                         recuadro(20,4,41,3,cBLANCO,cNEGRO);
                         recuadro(26,10,29,10,cBLANCO,cNEGRO);
                         system("COLOR 7F");
                         locate(38,5);
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
                                        menu_unico_jugador(jugador1);
                                        locate(30,20);
                                        cambiardado1=0;
    cambiardado2=0;
    system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
    locate(23,3);
    cout<<"Ingresa el primer dado: ";
    cin>>dado[0];
    locate(23,4);
    cout<<"Ingresa el segundo dado: ";
    cin>>dado[1];
    locate(23,5);
    cout<<"Ingresa el tercer dado: ";
    cin>>dado[2];
    system("cls");
     recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");
    setColor(GREEN);
    locate(23,3);
    cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;

    for (i=0;i<=2;i++){
            locate(40,i+7);
    cout<<"dado "<<i+1<<": "<<dado[i]<<endl;
    }
    locate(21,14);
    cout<<"Desea realizar una segunda tirada? 1(si) 2(no)"<<endl;
    locate(43,15);
    cin>>otratirada;
        if (otratirada==1){
    locate(5,17);
    cout<<"Desea cambiar algun dado 1(cambiar los 3),2(si,cambiar 1 dado),3(cambiar 2)"<<endl;
    locate(43,18);
    cin>>conservar;
    if(conservar==1){
            system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");

        setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;
    cambiardado1=0;
    cambiardado2=0;

     locate(23,6);
    cout<<"Ingresa el primer dado: ";
    cin>>dado[0];
    locate(23,7);
    cout<<"Ingresa el segundo dado: ";
    cin>>dado[1];
    locate(23,8);
    cout<<"Ingresa el tercer dado: ";
    cin>>dado[2];
}
        if(conservar==2){
        locate(21,19);
     cout<<"Que dado desea cambiar? (1,2,3)";
     locate(43,20);
     cin>>cambiardado1;
     system("cls");
        }

        else if(conservar==3){
        locate(21,18);
    cout<<"Ingrese el primer dado a cambiar (1,2,3)";
    locate(43,19);
    cin>>cambiardado1;
    locate(21,20);
    cout<<"Ingrese el segundo dado a cambiar(1,2,3) ";
    locate(43,21);
    cin>>cambiardado2;
        }

    if((cambiardado1==1 && cambiardado2==2)|| (cambiardado2==1 && cambiardado1==2)) {
             system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");

        setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;
    cambiardado1=0;
    cambiardado2=0;

     locate(23,6);
    cout<<"Ingresa el primer dado: ";
    cin>>dado[0];
    locate(23,7);
    cout<<"Ingresa el segundo dado: ";
    cin>>dado[1];
    }
    else if((cambiardado1==2 && cambiardado2==3) || (cambiardado1==3 && cambiardado2==2)){
                system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");

        setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;
    cambiardado1=0;
    cambiardado2=0;

     locate(23,6);
    cout<<"Ingresa el segundo dado: ";
    cin>>dado[1];
    locate(23,7);
    cout<<"Ingresa el tercer dado: ";
    cin>>dado[2];
    }
    else if ((cambiardado1==1 && cambiardado2==3) || (cambiardado2==1 && cambiardado1==3)){

                system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");

        setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;
    cambiardado1=0;
    cambiardado2=0;

     locate(23,6);
    cout<<"Ingresa el primer dado: ";
    cin>>dado[0];
    locate(23,7);
    cout<<"Ingresa el tercer dado: ";
    cin>>dado[2];
    }
    else if(cambiardado1==1){
        system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");

        setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;
    cambiardado1=0;
    cambiardado2=0;

     locate(23,6);
    cout<<"Ingresa el primer dado: ";
    cin>>dado[0];
    }
    else if(cambiardado1==2){
                system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");

        setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;
    cambiardado1=0;
    cambiardado2=0;
    locate(23,6);
    cout<<"Ingresa el segundo dado: ";
    cin>>dado[1];
    }
    else if(cambiardado1==3){
                system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");

        setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;
    cambiardado1=0;
    cambiardado2=0;


    locate(23,6);
    cout<<"Ingresa el tercer dado: ";
    cin>>dado[2];
    }
        }

        system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");
    setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;


        for (i=0;i<=2;i++){
                 locate(40,i+7);
    cout<<"dado "<<i+1<<": "<<dado[i]<<endl;
    }
    diferentes_resultados(dado,puntuacionj1,jugador1);


                                        //system("pause");//TECLEAR PARA PROCEDER A LA SIGUIENTE LINEA
                                        cls();
                                     mn=false;//VOLVER AL MENU




                                        break;


                                  break ;
                                    case 0:
                                     cls();
                                     system("cls");
                                        menu_unico_jugador(jugador1);
                                        locate(30,20);

    cambiardado1=0;
    cambiardado2=0;
    system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
    locate(23,3);

    cargarAleatorio(dado,3,6);
    cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;

    for (i=0;i<=2;i++){
            locate(40,i+7);
    cout<<"dado "<<i+1<<": "<<dado[i]<<endl;
    }
locate(21,14); //ACA EMPECE
    cout<<"Desea realizar una segunda tirada? 1(si) 2(no)"<<endl;
    locate(43,15);
    cin>>otratirada;
        if (otratirada==1){
    locate(29,17);
    cout<<"Desea cambiar algun dado?";locate(12,18);cout<<"1(cambiar los 3),2(si, cambiar 1 dado),3(cambiar 2 dados)"<<endl;
    locate(43,19);
    cin>>conservar;
if(conservar==1){
        setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;
    cambiardado1=0;
    cambiardado2=0;
    cargarAleatorio(dado,3,6);
    for (i=0;i<=2;i++){
            locate(40,i+7);
    cout<<"dado "<<i+1<<": "<<dado[i]<<endl;// ACA TERMINE
    }
}
        if(conservar==2){
        locate(21,19);
     cout<<"Que dado desea cambiar? (1,2,3)";
     locate(43,20);
     cin>>cambiardado1;
     system("cls");
        }

        else if(conservar==3){
        locate(21,18);
    cout<<"Ingrese el primer dado a cambiar (1,2,3)";
    locate(43,19);
    cin>>cambiardado1;
    locate(21,20);
    cout<<"Ingrese el segundo dado a cambiar(1,2,3) ";
    locate(43,21);
    cin>>cambiardado2;
        }

    if((cambiardado1==1 && cambiardado2==2)|| (cambiardado2==1 && cambiardado1==2)) {
     srand(time(NULL));
    dado[0]=(rand()%6)+1;
    srand(time(NULL));
    dado[1]=(rand()%6)+1;
    }
    else if((cambiardado1==2 && cambiardado2==3) || (cambiardado1==3 && cambiardado2==2)){
    srand(time(NULL));
    dado[1]=(rand()%6)+1;
    srand(time(NULL));
    dado[2]=(rand()%6)+1;
    }
    else if ((cambiardado1==1 && cambiardado2==3) || (cambiardado2==1 && cambiardado1==3)){
         srand(time(NULL));
    dado[0]=(rand()%6)+1;
     srand(time(NULL));
    dado[2]=(rand()%6)+1;
    }
    else if(cambiardado1==1){
    srand(time(NULL));
    dado[0]=(rand()%6)+1;

    }
    else if(cambiardado1==2){
    srand(time(NULL));
    dado[1]=(rand()%6)+1;
    }
    else if(cambiardado1==3){
    srand(time(NULL));
    dado[2]=(rand()%6)+1;
    }
        }

        system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");
    setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;


        for (i=0;i<=2;i++){
                 locate(40,i+7);
    cout<<"dado "<<i+1<<": "<<dado[i]<<endl;
    }
    diferentes_resultados(dado,puntuacionj1,jugador1);

                                        //system("pause");//TECLEAR PARA PROCEDER A LA SIGUIENTE LINEA
                                        cls();
                                     mn=false;//VOLVER AL MENU

                                        break;







                                     system("pause");
                                    cls();
                                     mn=false;
                                    break;
                                    case 3:
                                        cls();
                                        empate=0;
                                        contador=0;


                                        puntuacionj1=1;
                                        puntuacionj2=1;
                                        recuadro(23,13,45,4,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        recuadro(23,6,45,4,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        recuadro(23,19,45,4,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
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


    recuadro(22,2,43,10,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
                                        locate(1,1);
    cout<<"Ronda: "<<contador;
    locate(23,3);
    cargarAleatorio(dado,3,6);
    cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;

    for (i=0;i<=2;i++){
            locate(40,i+7);
    cout<<"dado "<<i+1<<": "<<dado[i]<<endl;
    }
    locate(21,14); //ACA EMPECE
    cout<<"Desea realizar una segunda tirada? 1(si) 2(no)"<<endl;
    locate(43,15);
    cin>>otratirada;
        if (otratirada==1){
    locate(29,17);
    cout<<"Desea cambiar algun dado?";locate(20,18);cout<<"1(cambiar los 3),2(si, cambiar 1 dado),3(cambiar 2 dados)"<<endl;
    locate(43,19);
    cin>>conservar;
if(conservar==1){
        setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;
    cambiardado1=0;
    cambiardado2=0;
    cargarAleatorio(dado,3,6);
    for (i=0;i<=2;i++){
            locate(40,i+7);
    cout<<"dado "<<i+1<<": "<<dado[i]<<endl;// ACA TERMINE
    }
}
        else if(conservar==2){
        locate(21,20);
     cout<<"Que dado desea cambiar? (1,2,3)";
     locate(43,21);
     cin>>cambiardado1;
     system("cls");
        }

        else if(conservar==3){
        locate(21,20);
    cout<<"Ingrese el primer dado a cambiar (1,2,3)";
    locate(43,21);
    cin>>cambiardado1;
    locate(21,22);
    cout<<"Ingrese el segundo dado a cambiar(1,2,3) ";
    locate(43,23);
    cin>>cambiardado2;
        }

    if((cambiardado1==1 && cambiardado2==2)|| (cambiardado2==1 && cambiardado1==2)) {
     srand(time(NULL));
    dado[0]=(rand()%6)+1;
    srand(time(NULL));
    dado[1]=(rand()%6)+1;
    }
    else if((cambiardado1==2 && cambiardado2==3) || (cambiardado1==3 && cambiardado2==2)){
    srand(time(NULL));
    dado[1]=(rand()%6)+1;
    srand(time(NULL));
    dado[2]=(rand()%6)+1;
    }
    else if ((cambiardado1==1 && cambiardado2==3) || (cambiardado2==1 && cambiardado1==3)){
         srand(time(NULL));
    dado[0]=(rand()%6)+1;
     srand(time(NULL));
    dado[2]=(rand()%6)+1;
    }
    else if(cambiardado1==1){
    srand(time(NULL));
    dado[0]=(rand()%6)+1;

    }
    else if(cambiardado1==2){
    srand(time(NULL));
    dado[1]=(rand()%6)+1;
    }
    else if(cambiardado1==3){
    srand(time(NULL));
    dado[2]=(rand()%6)+1;
    }
        }

        system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");
    setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador1<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;


        for (i=0;i<=2;i++){
                 locate(40,i+7);
    cout<<"dado "<<i+1<<": "<<dado[i]<<endl;
    }
     if( (dado[0]==1) && (dado[1]==1) && (dado[2]==1) ){
            locate(25,13);
        cout<<"Realizaste triple 1";
        locate(22,14);
        cout<<"Si tu contrincante saco algo diferente, perdiste";
        triple1=1;
    }

    else if ((dado[0]==dado[1]) && (dado[1]==dado[2]))
    {
            locate(17,13);
    cout<<"Felicidades usted saco numeros iguales gano instantaneamente";
        puntuacionj1=100000;
    }
    else if((dado[0]==1 || dado[1]==1 || dado[2]==1) && (dado[0]==2 || dado[1]==2 || dado[2]==2) && (dado[0]==3 || dado[1]==3 || dado[2]==3)){

            locate(25,13);
    cout<<"Usted saco 1,2,3, perdio instantaneamente";
    puntuacionj1=-0;

            }
    else if((dado[0]==4 || dado[1]==4 || dado[2]==4) && (dado[0]==5 || dado[1]==5 || dado[2]==5) && (dado[0]==6 || dado[1]==6 || dado[2]==6)){
    locate(14,13);
    cout<<"Felicidades usted saco un 4,5,6, tiene muchas probabiblidades de ganar";locate(17,14);cout<<" si su oponente no lo iguala, deberia pagarle el doble";
    variable1=1;
    }
    else if ((dado[0]==0) || (dado[1]==0) || (dado[2]==0))
    {
        locate(24,13);
        cout << "Perdiste a esto se lo llama 'meada'" << endl;

    }
    else if (dado[0]==dado[1])
    {
        puntuacionj1 = dado[2];
        locate(24,13);
        cout << "La puntuacion de "<<jugador1<<" es de: " << puntuacionj1 << endl;
    }
    else{
        if (dado[0]==dado[2])
        {
            puntuacionj1 = dado[1];
            locate(24,13);
           cout << "La puntuacion de "<<jugador1<<" es de: " << puntuacionj1 << endl;
        }
        else{
            if (dado[1]==dado[2]){
                puntuacionj1 = dado[0];
                locate(24,13);
                cout << "La puntuacion de "<<jugador1<<" es de: " << puntuacionj1 << endl;
            }
        else {

                        locate(28,14);
            cout<<"No realizaste ninguna puntuacion ";
            locate(23,15);
            cout<<"Reza que tu oponente no saque ninguna puntuacion";
        }


        }

    }
    locate(17,25);
    cout<<"PRESIONE CUALQUIER TECLA PARA PASAR EL TURNO DEL ADVERSARIO"<<endl;
    getch();
    system ("cls");



cambiardado1=0;
    cambiardado2=0;
    system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
                                        system("COLOR 7F");
                                        setColor(GREEN);
    locate(23,3);
    cargarAleatorio(dadoj2,3,6);
    cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador2<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;

    for (i=0;i<=2;i++){
            locate(40,i+7);
    cout<<"dado "<<i+1<<": "<<dadoj2[i]<<endl;
    }
    locate(21,14);
    cout<<"Desea realizar una segunda tirada? 1(si) 2(no)"<<endl;
    locate(43,15);
    cin>>otratirada;
        if (otratirada==1){
    locate(29,17);
    cout<<"Desea cambiar algun dado?";locate(20,18);cout<<"1(cambiar los 3),2(si, cambiar 1 dado),3(cambiar 2 dados)"<<endl;
    locate(43,19);
    cin>>conservar;
    if(conservar==1){
        setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador2<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;
    cambiardado1=0;
    cambiardado2=0;
    cargarAleatorio(dadoj2,3,6);
    for (i=0;i<=2;i++){
            locate(40,i+7);
    cout<<"dado "<<i+1<<": "<<dadoj2[i]<<endl;
    }
}


        if(conservar==2){
        locate(21,20);
     cout<<"Que dado desea cambiar? (1,2,3)";
     locate(43,21);
     cin>>cambiardado1;
     system("cls");
        }

        else if(conservar==3){
        locate(21,20);
    cout<<"Ingrese el primer dado a cambiar (1,2,3)";
    locate(43,21);
    cin>>cambiardado1;
    locate(21,22);
    cout<<"Ingrese el segundo dado a cambiar(1,2,3) ";
    locate(43,23);
    cin>>cambiardado2;
        }

    if((cambiardado1==1 && cambiardado2==2)|| (cambiardado2==1 && cambiardado1==2)) {
     srand(time(NULL));
    dadoj2[0]=(rand()%6)+1;
    srand(time(NULL));
    dadoj2[1]=(rand()%6)+1;
    }
    else if((cambiardado1==2 && cambiardado2==3) || (cambiardado1==3 && cambiardado2==2)){
    srand(time(NULL));
    dadoj2[1]=(rand()%6)+1;
    srand(time(NULL));
    dadoj2[2]=(rand()%6)+1;
    }
    else if ((cambiardado1==1 && cambiardado2==3) || (cambiardado2==1 && cambiardado1==3)){
         srand(time(NULL));
    dadoj2[0]=(rand()%6)+1;
     srand(time(NULL));
    dadoj2[2]=(rand()%6)+1;
    }
    else if(cambiardado1==1){
    srand(time(NULL));
    dadoj2[0]=(rand()%6)+1;

    }
    else if(cambiardado1==2){
    srand(time(NULL));
    dadoj2[1]=(rand()%6)+1;
    }
    else if(cambiardado1==3){
    srand(time(NULL));
    dadoj2[2]=(rand()%6)+1;
    }
        }

        system("cls");
    recuadro(22,2,43,10,cBLANCO,cNEGRO);
    system("COLOR 7F");
    setColor(GREEN);
    locate(23,3);
     cout<< " ---------------------------------------- " <<endl;
    locate(36,4);
    cout<<"turno de: "<< jugador2<< endl;
    locate(23,5);
    cout<< " ---------------------------------------- " <<endl;


        for (i=0;i<=2;i++){
                 locate(40,i+7);
    cout<<"dado "<<i+1<<": "<<dadoj2[i]<<endl;
    }
    if( (dadoj2[0]==1) && (dadoj2[1]==1) && (dadoj2[2]==1) ){
            locate(25,13);
        cout<<"Realizaste triple 1";
        locate(22,14);
        cout<<"Si tu contrincante saco algo diferente, perdiste";
    triple1j2=1;

    }
    else if ((dadoj2[0]==dadoj2[1]) && (dadoj2[1]==dadoj2[2]))
    {
        locate(17,13);
    cout<<"Felicidades usted saco numeros iguales gano instantaneamente";
        puntuacionj2=100000;
    }
    else if((dadoj2[0]==1 || dadoj2[1]==1 || dadoj2[2]==1) && (dadoj2[0]==2 || dadoj2[1]==2 || dadoj2[2]==2) && (dadoj2[0]==3 || dadoj2[1]==3 || dadoj2[2]==3)){

            locate(25,13);
    cout<<"Usted saco 1,2,3, perdio instantaneamente";
    puntuacionj1=-0;

            }
    else if((dadoj2[0]==4 || dadoj2[1]==4 || dadoj2[2]==4) && (dadoj2[0]==5 || dadoj2[1]==5 || dadoj2[2]==5) && (dadoj2[0]==6 || dadoj2[1]==6 || dadoj2[2]==6)){
    locate(22,13);
    cout<<"Felicidades usted saco un 4,5,6 gano instantaneamente";locate(25,14);cout<<"si su oponente no lo iguala, deberia pagarle el doble";
    variable2=1;

    }
    else if ((dadoj2[0]==0) || (dadoj2[1]==0) || (dadoj2[2]==0))
    {
        locate(24,13);
        cout << "Perdiste a esto se lo llama 'meada'" << endl;

    }
    else if (dadoj2[0]==dadoj2[1])
    {
        puntuacionj2 = dadoj2[2];
        locate(24,13);
        cout << "La puntuacion de "<<jugador2<<" es de: " << puntuacionj2 << endl;
    }
    else{
        if (dadoj2[0]==dadoj2[2])
        {
            puntuacionj2 = dadoj2[1];
            locate(24,13);
           cout << "La puntuacion de "<<jugador2<<" es de: " << puntuacionj2 << endl;
        }
        else{
            if (dadoj2[1]==dadoj2[2]){
                puntuacionj2 = dadoj2[0];
                locate(24,13);
                cout << "La puntuacion de "<<jugador2<<" es de: " << puntuacionj2 << endl;
            }
        else {

                        locate(28,14);
            cout<<"No realizaste ninguna puntuacion ";
            locate(23,15);
            cout<<"Reza que tu oponente no saque ninguna puntuacion";
        }


        }

    }
    locate(20,17);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    getch();
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
            locate(35,4);
        cout << " EMPATE " << endl;
        locate(23,5);
    cout << " --------------------------------------- "<< endl;
        empate=0;
        locate(22,15);
   cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;

   getch();
        system("cls");
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
            cout<<"RECIBIO UN TOTAL DE: "<<ganador;locate(37,7);cout<<"Pagate el asado";
            apuesta2=0;
        }
    }
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
cout<<(char)254<<"Si un dado sale del recipiente el jugador pierde automaticamente y debe "<<endl;
locate(2,12);
cout<<"pagar la cantidad de dinero apostada. A esto se le llama meada"<<endl;
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
    cout<<(char)254<<"Si un jugador obtiene los tres dados del mismo numero(triple 2,3,4,5 o 6)"<<endl;locate(4,7);cout<< "ganara automaticamente la partida y obtendra tres veces la cantidad de"<<endl;locate(4,8);cout<< "dinero apostada originalmente.";
    locate(22,22);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    getch();
    locate(2,10);


    cout<<(char)254<<"Sin embargo, si un jugador obtiene un 1 en los tres dados, pierde."<<endl;
    locate(2,11);
    cout<< "automaticamente y debera pagar el triple de la cantidad de dinero apostada"<<endl;locate(2,13);cout<< "a su oponente. Estas dos reglas especiales se llaman Tormenta."<<endl;
      locate(22,22);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    locate(2,13);

    cout<<(char)254<<"Por otra parte, si un jugador obtiene un 4-5-6 ganara de forma automatica,"<<endl;
      locate(22,22);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    locate(2,14);
    cout<<"ademas su rival debera pagarle el doble de lo apostado."<<endl;

        getch();
    locate(2,16);
    cout<<(char)254<<"Por el contrario, si un jugador obtiene un 1-2-3 perdera automaticamente"<<endl;locate(2,17);cout<< "y debera pagar el doble de la apuesta a su oponente.";
getch();
cls();
mn=false;

                                break;

        }
        break;
    default:
        break;
    }


} while(mn==true);
    }while(key!=0);
/*
    cin>>PrimerVariable;
    system("cls");
    setColor(GREEN);
    locate(25,2);
    switch (PrimerVariable)
    {
    case 1:cout<<"Cuantos jugadores seran?(1 o 2)"<<endl;
    locate(30,4);
    cout<<"Jugadores: ";
    locate(41,4);
    cin>>jugadores;
        break;
    case 2:
    system("cls");
    forma_1(i);
    locate(31,2);
    cout<<"INSTRUCCIONES";
    locate(3,5);
    cout<<"reglas:";
    locate(3,6);
cout<<"*Cada jugador tiene hasta un maximo de 3 tiradas para conseguir una"<<endl;locate(3,7);cout<<" puntuacion."<<endl;
    locate(3,9);
cout<<"*Se deben lanzar los tres dados al mismo tiempo en el recipiente."<<endl;locate(3,10);cout<<"Si un dado sale del recipiente el jugador pierde automaticamente"<<endl;locate(3,11);cout<<"y debe pagar la cantidad de dinero apostada. A esto se le llama meada."<<endl;
    locate(22,22);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    getch();
    system("cls");
  forma_1(i);
    locate(31,3);
    cout<<"OBJETIVO:";
    locate(3,6);
    cout<<"*El objetivo del juego es conseguir que dos dados marquen el mismo numero"<<endl;locate(4,7);cout<<"El dado restante marcara la puntuacion del jugador."<<endl;locate(3,9);cout<<"* Una vez realizadas las tiradas se compara la puntuacion de ambos jugadores"<<endl;locate(3,10);cout<<"y el que tenga la puntuacion mas alta gana la partida.";
    locate(22,22);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    getch();
    locate(3,15);
    cout<<"*Si ambos jugadores acaban con la misma puntuacion o no hacen ninguna"<<endl;locate(3,16);cout<<"puntuacion en todas sus tiradas es un empate y ninguno de los dos gana"<<endl;locate(3,18);cout<<"*Ademas el dinero tiene que ser apostado de nuevo para otra partida.";
    locate(22,22);
    cout<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
    getch();
    system("cls");
    locate(31,2);
cout<<"REGLAS ESPECIALES:";
    forma_1(i);
    locate(4,6);
    cout<<"*Si un jugador obtiene los tres dados del mismo numero(triple 2,3,4,5 o 6)"<<endl;locate(4,7);cout<< "ganara automaticamente la partida y obtendra tres veces la cantidad de"<<endl;locate(4,8);cout<< "dinero apostada originalmente.";
    locate(4,10);
    cout<<"*Sin embargo, si un jugador obtiene un 1 en los tres dados, pierde"<<endl;locate(4,11);cout<< "automaticamente y debera pagar el triple de la cantidad de dinero apostada"<<endl;locate(4,12);cout<< "a su oponente. Estas dos reglas especiales se llaman Tormenta."<<endl;
    locate(4,10);
    cout<<"*Por otra parte, si un jugador obtiene un 4-5-6 ganara de forma automatica"<<endl;locate(4,15);cout<<  "*Ademas su rival debera pagarle el doble de lo apostado"<<endl;locate(4,17);cout<<  "*Por el contrario, si un jugador obtiene un 1-2-3 perdera automaticamente"<<endl;locate(4,18);cout<< "y debera pagar el doble de la apuesta a su oponente.";
        break;
    case 3:
        cout<<"Gracias por corregirnos/jugado con nosotros"<<endl;
        break;
    default:
        break;
    }
    locate(22,27);
    */
    return 0;
}
