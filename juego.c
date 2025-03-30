#include<iostream>
using namespace std;
/*
void imprimir_tablero(std::string tablero){
    for(char &x : tablero){
        if (x == ';')
        {
            std::cout<<std::endl;

        }else{
            if ( x == ',' )
            {
                std::cout<<" ";
            }else{
                std::cout<<x;
            }
        }
    }
}

std::string eliminar_elemento(std::string elemento_eliminado, std::string &tablero){
    std::string tablero_nuevo;
    std::string numero_temporal;
    int i = 0;
    while (i < tablero.length() )
    {
        if (tablero[i] != "")
        {
        
        }
        
    }
}
*/
int main(){
    string jugador1,jugador2;
    bool juego = true;
    string tablero = "1,2,3;4,5,6,7,8;9,10,11,12,13,14,15";
    cout<<"INGRESE EL NOMBRE DEL JUGADOR 1"<<std::endl;
    cin>>jugador1;
    cout<<"INGRESE EL NOMBRE DEL JUGADOR 2"<<std::endl;
    cin>>jugador2;

    char tablero_real [4][8] = {{'0','1','2','3','4','5','6','7'},{'1',' ',' ','|','|','|',' ',' '},{'2',' ','|','|','|','|','|',' '},{'3','|','|','|','|','|','|','|'}};

    char opcion;
    while (juego)
    {
        for (size_t i = 0; i < 4; i++)
        {
            for (size_t j = 0; j < 8; j++)
            {
                cout<<tablero_real[i][j]<<" ";
            }
            cout<<std::endl;
        }

        cin>>opcion;

        juego = false;
    }
    


    return 0;
}
