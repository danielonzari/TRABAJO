#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    cout <<" hola " << endl;
int dado1, dado2, dado3, puntuacion=0;
srand(time(NULL));
    dado1=rand()%6;
    cout<<" dado 1: " << dado1<<endl;
    dado2=rand()%6;
    cout<<" dado 2: " << dado2<<endl;
    dado3=rand()%6;
    cout<<" dado 3: " << dado3<<endl;

    if (dado1==0 || dado2==0 || dado3 ==0)
    {
        cout << "Perdiste perrito a esto se lo llama 'meada'" << endl;

    }
    if (dado1==dado2)
    {
        puntuacion = dado3;
        cout << "La puntuación de (jugador) es de: " << puntuacion << endl;
    }
    else{
        if (dado1==dado3)
        {
            puntuacion = dado2;
            cout << "La puntuación de (jugador) es de: " << puntuacion << endl;
        }
        else{
            if (dado2==dado3)
            {
                puntuacion = dado1;
                cout << "La puntuación de (jugador) es de: " << puntuacion << endl;
            }
            
        }


    }
    return (0);
}