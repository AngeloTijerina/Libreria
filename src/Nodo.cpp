#include "Nodo.h"


        Nodo::Nodo()
        {
            siguiente = NULL;
            //ctor
        }

        Nodo::Nodo(string nombre, string autor, string isbn, string editorial, string categoria, string categoria2, int ejemplares, float precio, int ranking)
        {
                nombre=nombre;
                autor=autor;
                editorial=editorial;
                isbn=isbn;
                ranking=ranking;
                categoria=categoria;
                categoria2=categoria2;
                ejemplares=ejemplares;
                precio=precio;
        }
            ///set
        void Nodo::setNombre(string nombre)
        {
            nombre=nombre;
        return;
        }

        void Nodo::setAutor(string autor)
        {
            autor=autor;
        return;
        }

        void Nodo::setIsbn(string isbn)
        {
            isbn=isbn;
        return;
        }

        void Nodo::setEditorial(string editorial)
        {
            editorial=editorial;
        return;
        }

        void Nodo::setCategoria(string categoria)
        {
            categoria=categoria;
        return;
        }

        void Nodo::setCategoria2(string categoria2)
        {
            categoria2=categoria2;
        return;
        }

        int Nodo::setEditorial()ejmplares(int ejemplares)
        {
            ejemplares=ejemplares;

        }

        float Nodo::setPrecio(float precio)
        {
            precio=precio;

        }

        int Nodo::setRanking(int ranking)
        {
            ranking=ranking;

        }

        void Nodo::setSiguiente(Nodo*& siguiente)
        {
            siguiente = siguiente;
        }



        ///get
        string Nodo::getNombre()
        {
            return nombre;
        }

        string Nodo::getAutor()
        {
            return autor;
        }

        string Nodo::getIsbn()
        {
            return isbn;
        }

        string Nodo::getEditorial()
        {
            return editorial;
        }

        string Nodo::getCategoria()
        {
            return categoria;
        }

        string Nodo::getCategoria2()
        {
            return categoria;
        }

        int Nodo::getEditorial()
        {
            return ejemplares;
        }

        float Nodo::getPrecio()
        {
            return precio;
        }

        int Nodo::getRanking()
        {
            return ranking;
        }



        Nodo* Nodo::getSiguiente()
        {
            return siguiente
        }
