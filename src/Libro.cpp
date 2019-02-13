///Metodos Libro.cpp
#include "Libro.h"
#include <iostream>
#include <Lista.h>
using namespace std;

    Libro::Libro()
    {
    nombre="vacio";
    autor="vacio";
    editorial="vacio";
    isbn="vacio";
    categoria="vacio";
    categoria2="vacio";
    ejemplares=0;
    precio=0;
    ranking=0;
    }

        Libro::Libro(string nombre, string autor, string isbn, string editorial, string categoria, string categoria2, int ejemplares, float precio, int ranking)
        {
            this->nombre=nombre;
            this->autor=autor;
            this->editorial=editorial;
            this->isbn=isbn;
            this->ranking=ranking;
            this->categoria=categoria;
            this->categoria2=categoria2;
            this->ejemplares=ejemplares;
            this->precio=precio;
        }
            ///set
        void Libro::set_nombre(string nombre)
        {
        this->nombre=nombre;
        return;
        }

        void Libro::set_autor(string autor)
        {
        this->autor=autor;
        return;
        }

        void Libro::set_isbn(string isbn)
        {
        this->isbn=isbn;
        return;
        }

        void Libro::set_editorial(string editorial)
        {
        this->editorial=editorial;
        return;
        }

        void Libro::set_categoria(string categoria)
        {
        this->categoria=categoria;
        return;
        }

        void Libro::set_categoria2(string categoria2)
        {
        this->categoria2=categoria2;
        return;
        }

        int Libro::set_ejemplares(int ejemplares)
        {
        this->ejemplares=ejemplares;

        }

        float Libro::set_precio(float precio)
        {
        this->precio=precio;

        }

        int Libro::set_ranking(int ranking)
        {
        this->ranking=ranking;

        }
            ///get
        string Libro::get_nombre()
        {
            return nombre;
        }

        string Libro::get_autor()
        {
            return autor;
        }

        string Libro::get_isbn()
        {
            return isbn;
        }

        string Libro::get_editorial()
        {
            return editorial;
        }

        string Libro::get_categoria()
        {
            return categoria;
        }

        string Libro::get_categoria2()
        {
            return categoria;
        }

        int Libro::get_ejemplares()
        {
            return ejemplares;
        }

        float Libro::get_precio()
        {
            return precio;
        }

        int Libro::get_ranking()
        {
            return ranking;
        }

