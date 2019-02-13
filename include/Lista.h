///Clase lista.h
#ifndef LISTA_H
#define LISTA_H
#include <Nodo.h>

class Lista
{
    public:
        Lista();
        void setPunta(Nodo*);
        bool vacia();
        bool llena();
        void inserta(Nodo* insertar);
        void eliminar(int Nodo);
        void primero();
        void ultimo();
       /* void anterior(int pos);*/
        void siguiente(int pos);
        int localiza(int Buscar);
        Nodo recupera(int pos);
        void modifica (Nodo dato, int pos);
        void mostrarTodo();
        void inicializa();
        Nodo lista[100];
        void anula();

        /*Menu();
        menuPrincipal();
        menuTda();
        menuModificar();
        menuOrdenar();
        getOpc();
        getOpcl();*/

        Nodo* Localiza(int);
        Nodo* getPunta();
        Nodo* getUltimo();
        Nodo* getActual();

    protected:

    private:

        /*int opc;
        int opcl;*/

        Nodo* punta;
        Nodo* actual;
        int cont;
};

#endif /// LISTA_H
