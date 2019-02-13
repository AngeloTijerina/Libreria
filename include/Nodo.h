#ifndef NODO_H
#define NODO_H
#include <string>
using namespace std;

class Nodo
{
    public:
            Nodo();

            Nodo(string nombre, string autor, string isbn, string editorial, string categoria, string categoria2, int ejemplares, float precio, int ranking);
            //set

            void setNombre(string);
            void setAutor(string);
            void setIsbn(string);
            void setEditorial(string);
            void setCategoria(string);
            void setCategoria2(string);
            int setEjemplares(int);
            float setPrecio(float);
            int setRanking(int);
            void setSiguiente(Nodo *&);
            //get
            string getNombre();
            string getAutor();
            string getIsbn();
            string getEditorial();
            string getCategoria();
            string getCategoria2();
            int getEjemplares();
            float getPrecio();
            int getRanking();
            Nodo* getSiguiente();

    protected:

    private:
            string nombre;
            string autor;
            string isbn;
            string editorial;
            string categoria;
            string categoria2;
            int ejemplares;
            float precio;
            int ranking;
            Nodo* siguiente;

};

#endif // NODO_H
