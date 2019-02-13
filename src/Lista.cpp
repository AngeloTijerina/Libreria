///Metodos Lista.cpp
#include <Lista.h>
#include <Nodo.h>
#include <Menu.h>
#include <iostream>
#include <windows.h>
using namespace std;
    Lista::Lista()
    {
        punta = NULL;

    }

    void Lista::setPunta(Nodo* primero)
    {
        punta = primero;
    }

    bool Lista::vacia()
    {
        if(cont>0)
        {
            return false;
        }
        else
            return true;
    }

    bool Lista::llena()
    {
        if(cont==100)
        {
            return true;
        }
        else
            return false;
    }

    void Lista::inserta(Nodo* insertar)
    {
       if(!getPunta())
        setPunta(insertar);
       else
        getUltimo() ->setSiguiente(insertar);
       {

           cont++;
       }
    }

    void Lista::eliminar(int eliminar)
    {
        Nodo* libro = getPunta();

        if(libro == NULL)
        cout<<"No hay Libros que mostrar"<<char(161)<<"o."<<endl;

        if(libro ->getNombre() == eliminar)
    {
        setPunta(getPunta()->getSiguiente());

        delete libro;
    }
        else
    {
        while(libro ->getSiguiente() != NULL && libro ->getCodigo() != eliminar)
        {
            //anterior = venta;
            libro = libro ->getSiguiente();
        }

        if(libro != NULL && libro ->getNombre() == eliminar)
        {
            delete libro;
        }
        cont--;

    }

}

    void Lista::primero()
    {
         if(!vacia())
        {
            return punta;
           /* cout<<"Nombre:"<<lista[0].get_nombre()<<endl;
            cout<<"Autor:"<<lista[0].get_autor()<<endl;
            cout<<"Editorial:"<<lista[0].get_editorial()<<endl;
            cout<<"ISBN:"<<lista[0].get_isbn()<<endl;
            cout<<"Categoria:"<<lista[0].get_categoria()<<endl;
            cout<<"Categoria:"<<lista[0].get_categoria2()<<endl;
            cout<<"Ejemplares disponibles:"<<lista[0].get_ejemplares()<<endl;
            cout<<"Precio:"<<lista[0].get_precio()<<endl;*/
        }
    }

    void Lista::ultimo()
    {
        if(!vacia())
        {
            Nodo* ultimo = getPunta();
        while(ultimo ->getSiguiente())
        {
            ultimo = ultimo ->getSiguiente();
        }
        return ultimo;
        }
    }

    void Lista::anterior(int pos)
    {
        if(!vacia())
        {
            Nodo* ultimo = getPunta();
           while(ultimo ->getSiguiente())
        {
            ultimo = ultimo ->getSiguiente();
        }
                        {


                        cout<<"\n\n .:Libro Anterior:. \n\n"<<endl;
                        cout<<"Nombre:"<<lista[pos-1].getNombre()<<endl;
                        cout<<"Autor:"<<lista[pos-1].getAutor()<<endl;
                        cout<<"Editorial:"<<lista[pos-1].getEditorial()<<endl;
                        cout<<"ISBN:"<<lista[pos-1].getIsbn()<<endl;
                        cout<<"Categoria:"<<lista[pos-1].getCategoria()<<endl;
                        cout<<"Categoria:"<<lista[pos-1].getCategoria2()<<endl;
                        cout<<"Ejemplares disponibles:"<<lista[pos-1].getEjemplares()<<endl;
                        cout<<"Precio:"<<lista[pos-1].getPrecio()<<endl;

                        }
                        else
                            cout<<"No disponible"<<endl;
        }
    }

    void Lista::siguiente(int pos)
    {
        if(!vacia())
        {
            if(pos>=0 && pos <cont-1)
            {
                        cout<<"\n\n---Libro siguiente---\n\n"<<endl;
                        cout<<"Nombre:"<<lista[pos+1].getNombre()<<endl;
                        cout<<"Autor:"<<lista[pos+1].getAutor()<<endl;
                        cout<<"Editorial:"<<lista[pos+1].getEditorial()<<endl;
                        cout<<"ISBN:"<<lista[pos+1].getIsbn()<<endl;
                        cout<<"Categoria:"<<lista[pos+1].getCategoria()<<endl;
                        cout<<"Categoria:"<<lista[pos+1].getCategoria2()<<endl;
                        cout<<"Ejemplares disponibles:"<<lista[pos+1].getEjemplares()<<endl;
                        cout<<"Precio:"<<lista[pos+1].getPrecio()<<endl;
            }
            else
                cout<<"No disponible"<<endl;
        }
    }

    int Lista::localiza(int Buscar)
    {
       cont = 0;
    Nodo* busqueda = getPunta();

    if(busqueda == NULL)
    {
        cout<<"No hay libros en la lista"<<char(161)<<"o."<<endl;
    }
    else
    {
        while(busqueda ->getSiguiente() != NULL && busqueda ->getNombre != Buscar)
        {
            busqueda = busqueda ->getSiguiente();
            cont++;
        }
        if(busqueda != NULL && busqueda ->getNombre == Buscar)
        {
            cout<<"Nombre: "<<busqueda ->getNombre()<<endl;
            cout<<"Autor: "<<busqueda ->getAutor()<<endl;
            cout<<"ISBN: "<<busqueda ->getIsbn()<<endl;
            cout<<"Editorial: "<<busqueda ->getEditorial()<<endl;
            cout<<"Categoria: "<<busqueda ->getCategoria()<<endl;
            cout<<"Categoria2: "<<busqueda ->getCategoria2()<<endl;
            cout<<"Ejemplares: "<<busqueda ->getEjemplares()<<endl;
            cout<<"Precio: "<<busqueda ->getPrecio()<<endl;
            cout<<"Ranking: "<<busqueda ->getRanking()<<endl;


            return busqueda;
        }
        else
        {
            cout<<"El libro no existente."<<endl;
        }
    }

    return nullptr;




        /*
        if(!vacia())
        {
            for (int i=0;i<=cont;i++)
            {
                if(lista[i].getNombre()==dato.getNombre() || lista[i].getIsbn()==dato.getIsbn())
                {
                    cout<<"["<<i<<"]"<<endl;
                    system("Pause");
                    return i;
                }

            }
            return -1;
        }
        return -1;*/
    }

    Nodo Lista::recupera(Nodo dato,int pos)
    {
        if(!vacia())
        {
            if(pos>=0 && pos < cont)
            {
                return lista[pos];
            }
            else
                return lista[-1];
        }
    }

    void Lista::modifica(Nodo dato, int pos)
    {
        if(!vacia())
        {
            if(pos>=0&&pos<cont)
            {
                lista[pos]=dato;
            }
        }
    }

    void Lista::mostrarTodo()
    {
        if(!vacia())
        {
            for(int i=0;i<cont;i++)
            {
                        cout<<"\n\n---Libro siguiente---\n\n"<<endl;
                        cout<<i<<endl;
                        cout<<"Nombre:"<<lista[i].getNombre()<<endl;
                        cout<<"Autor:"<<lista[i].getAutor()<<endl;
                        cout<<"Editorial:"<<lista[i].getEditorial()<<endl;
                        cout<<"ISBN:"<<lista[i].getIsbn()<<endl;
                        cout<<"Categoria:"<<lista[i].getCategoria()<<endl;
                        cout<<"Categoria:"<<lista[i].getCategoria2()<<endl;
                        cout<<"Ejemplares disponibles:"<<lista[i].getEjemplares()<<endl;
                        cout<<"Precio:"<<lista[i].getPrecio()<<endl;
            }
        }
    }
    void Lista::inicializa()
    {
        siguiente = NULL;

    }
    void Lista::anula()
    {
        while(punta!=NULL)
        {

        }
    }

      /*  Menu::Menu()
    {
        //ctor
    }
    ///menu 1
    Menu::menuPrincipal()
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
        cout<<"  || [8].-Ordenar Libros        ||"<<endl;
        cout<<"  || [0].-Salir                 ||"<<endl;
        cout<<"  ||||||||||||||||||||||||||||||||"<<endl;
        cin>>opc;
        fflush(stdin);
    }
    ///menu 2
    Menu::menuOrdenar()
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
    }
    ///menu 3
    Menu::menuModificar()
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
    Menu::menuTda()
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

int Menu::getOpc()
{
    return opc;
}
int Menu::getOpcl()
{
    return opcl;
}*/


    Nodo* Lista::getPunta()
{
    return punta;
}

    Nodo* Lista::getUltimo()
{
    Nodo* ultimo = getPunta();
        while(ultimo ->getSiguiente())
        {
        ultimo = ultimo ->getSiguiente();
        }
    return ultimo;
}

    Nodo* Lista::getActual()
    {
    Nodo* actual -> siguiente = getActual();

    return actual;
    }


