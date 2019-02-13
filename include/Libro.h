///Clase Libro.h
#ifndef LIBRO_H
#define LIBRO_H
#include <string>

using namespace std;
    class Libro
        {
        public:
            Libro();
            Libro(string nombre , string autor , string isbn , string editorial , string categoria , string categoria2,int ejemplares,float precio , int ranking);
            //set
            void set_nombre(string);
            void set_autor(string);
            void set_isbn(string);
            void set_editorial(string);
            void set_categoria(string);
            void set_categoria2(string);
            int set_ejemplares(int);
            float set_precio(float);
            int set_ranking(int);
            //get
            string get_nombre();
            string get_autor();
            string get_isbn();
            string get_editorial();
            string get_categoria();
            string get_categoria2();
            int get_ejemplares();
            float get_precio();
            int get_ranking();
            //TDA
            void inserta();
            void elimina(int pos);
            int localiza(string isbn);
            void recupera(int pos);
            void anula();
            void modifica(int pos);
            void mostrar(int pos);
            void mostrarTodo();
            bool llena();
            bool vacia();
            void primero();
            void ultimo();
            void siguiente(int pos);
            void anterior(int pos);
            void insertaInicio();
            void insertaPosicion(int pos);
            void inicializa();


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
};

#endif // LIBRO_H
