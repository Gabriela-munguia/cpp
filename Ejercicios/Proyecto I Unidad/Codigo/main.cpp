#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
  int opcion = 0;

    
        system("cls");

        cout << "**************" << endl << endl;
        cout << " MENU DE JUEGO " << endl;
        cout << "**************" << endl << endl;
        cout << "SELECCIONE UN JUEGO: " << endl;
        cout << "1- startShip" << endl;
        cout << "2- SNAKE" << endl;
        cout << "INGRESE LA OPCION PARA JUGAR:" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
             system("cls");     

              {
            starShip();
             }
            break;

        case 2:
            system("cls");
             {
            snake();
             }
            break;

        default:
            break;
        }
    
    return 0;
}
