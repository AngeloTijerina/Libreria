///Menu.cpp Clase Libro
#include "Menu.h"
#include "iostream"
#include <stdio.h>
using namespace std;
Menu::Menu()
{
    //ctor
}
///menu 1
Menu::menu_principal()
{
    cout<<"\n"<<endl;
    cout<<"  ||||||||||||||||||||||||||||||||"<<endl;
    cout<<"  ||          .:MENU:.          ||"<<endl;
    cout<<"  ||||||||||||||||||||||||||||||||"<<endl;
    cout<<"  || [1].-Agregar Un Libro      ||"<<endl;
    cout<<"  || [2].-Buscar Un libro       ||"<<endl;
    cout<<"  || [3].-Modificar Un libro    ||"<<endl;
    cout<<"  || [4].-Vender Libro          ||"<<endl;
    cout<<"  || [5].-Agregar 10 libros     ||"<<endl;
    cout<<"  || [6].-Mostrar Catalogo      ||"<<endl;
    cout<<"  || [7].-Menu Lista            ||"<<endl;
    ///cout<<"  || [8].-Ordenar Libros        ||"<<endl;
    cout<<"  || [0].-Salir                 ||"<<endl;
    cout<<"  ||||||||||||||||||||||||||||||||"<<endl;
    cin>>opc;
    fflush(stdin);
}
/*menu 2
Menu::menu_ordenar()
{
    cout<<"\n"<<endl;
    cout<<"  |||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"  ||     Como Dese Ordenar La Lista De Libros    ||"<<endl;
    cout<<"  |||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"  || [1].-Nombre                                 ||"<<endl;
    cout<<"  || [2].-Autor                                  ||"<<endl;
    cout<<"  || [3].-Categoria                              ||"<<endl;
    cout<<"  || [4].-Ranking                                ||"<<endl;
    cout<<"  |||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cin>>opcl;
    fflush(stdin);
}*/
///menu 3
Menu::menu_modificar()
{

    cout<<"  ||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"  ||     ¿Que Desea Modificar?    ||"<<endl;
    cout<<"  ||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"  || [1].-Nombre:                 ||"<<endl;
    cout<<"  || [2].-Autor:                  ||"<<endl;
    cout<<"  || [3].-ISBN:                   ||"<<endl;
    cout<<"  || [4].-Categoria:              ||"<<endl;
    cout<<"  || [5].-Categoria secundaria:   ||"<<endl;
    cout<<"  || [6].-Ejemplares:             ||"<<endl;
    cout<<"  || [7].-Precio:                 ||"<<endl;
    cout<<"  ||||||||||||||||||||||||||||||||||"<<endl;
    cin>>opc;
}
///menu 4
Menu::menu_tda()
{
    cout<<"  ||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"  || [1].-Operacion de inicializacion     || "<<endl;
    cout<<"  || [2].-Imprimir si la lista esta vacia || "<<endl;
    cout<<"  || [3].-Imprimir si la lista esta llena || "<<endl;
    cout<<"  || [4].-Agregar nuevo                   || "<<endl;
    cout<<"  || [5].-Eliminar titulo                 || "<<endl;
    cout<<"  || [6].-Imprimir el primer libro        || "<<endl;
    cout<<"  || [7].-Imprimir el ultimo libro        || "<<endl;
    cout<<"  || [8].-Imprimir el libro anterior      || "<<endl;
    cout<<"  || [9].-Imprimir el siguiente libro     || "<<endl;
    cout<<"  || [10].-Localiza un libro              || "<<endl;
    cout<<"  || [11].-Recuperar  un libro            || "<<endl;
    cout<<"  || [12].-Imprimir todo el catalogo      || "<<endl;
    cout<<"  || [13].-Borrar todo el catalogo        || "<<endl;
    cout<<"  || [0].-Regresar al menu                || "<<endl;
    cout<<"  |||||||||||||||||||||||||||||||||||||||||| "<<endl;
    cin>>opcl;
    fflush(stdin);
}

int Menu::get_opc()
{
    return opc;
}
int Menu::get_opcl()
{
    return opcl;
}
