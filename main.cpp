///Main ACT 3
#include <iostream>
#include <Nodo.h>
#include <Lista.h>
#include <Menu.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;

int main()
{
    system("color 3");

    Lista miLista;
    Menu menu;
    Nodo nuevoNodo;

    Nodo* aux = NULL, *temp = NULL;
    Lista* lista= new Lista();



    Principal:
    menu.menu_principal();

    while(menu.get_opc()!=0)
    {
        ///Inicio while
        switch(menu.get_opc())
        {
            ///Inicio switch

                    case 1:
                    {
                        ///Inicio case 1
                        string nombre,autor,editorial,isbn,categoria,categoria2;
                        int ejemplares;
                        float precio;

                        aux = new Nodo;

                        cout<<"Ingresa el titulo"<<endl;
                        getline(cin,nombre);
                        fflush(stdin);
                        nuevoNodo.setNombre(nombre);

                        cout<<"Ingresa el autor"<<endl;
                        getline(cin,autor);
                        nuevoNodo.setAutor(autor);
                        fflush(stdin);

                        cout<<"Ingresa el editorial"<<endl;
                        getline(cin,editorial);
                        nuevoNodo.setEditorial(editorial);
                        fflush(stdin);

                        cout<<"Ingresa el ISBN"<<endl;
                        getline(cin,nombre);
                        nuevoNodo.setIsbn(isbn);
                        fflush(stdin);

                        cout<<"Ingresa la categoria"<<endl;
                        getline(cin,categoria);
                        nuevoNodo.setCategoria(categoria);
                        fflush(stdin);

                        cout<<"Ingresa la categoria secundaria"<<endl;
                        getline(cin,categoria2);
                        nuevoNodo.setCategoria2(categoria2);
                        fflush(stdin);

                        cout<<"Ingresa los ejemplares disponibles"<<endl;
                        cin>>ejemplares;
                        nuevoNodo.setEjemplares(ejemplares);
                        fflush(stdin);

                        cout<<"Ingrese el precio"<<endl;
                        cin>>precio;
                        nuevoNodo.setPrecio(precio);
                        fflush(stdin);

                        aux ->setNombre(nombre);
                        aux ->setAutor(autor);
                        aux ->setEditorial(editorial);
                        aux ->setIsbn(isbn);
                        aux ->setCategoria(categoria);
                        aux ->setCategoria2(categoria2);
                        aux ->setEjemplares(ejemplares);
                        aux ->setPrecio(precio);

                        lista ->inserta(aux);
                        system("CLS");
                        menu.menu_principal();
                        break;
                    }
                    ///Fin case 1

                    case 2:
                    {
                        ///I case 2

                        string nombre,autor,editorial,isbn,categoria,categoria2;
                        int ejemplares,pos;
                        float precio;


                        system("CLS");
                        string dato;
                        fflush(stdin);

                        cout<<"Ingresa el titulo o el ISBN"<<endl;
                        getline(cin,dato);
                        system("cls");
                        Nodo b;
                        b.setNombre(dato);
                        b.setIsbn(dato);

                        miLista->localiza(Nodo* b);

                        if(pos!=-1)
                        {
                            Nodo imp;
                            imp=miLista.recupera(pos);
                            cout<<pos<<endl;
                            cout<<"Titulo:"<<imp.getNombre()<<endl;
                            cout<<"Autor:"<<imp.getAutor()<<endl;
                            cout<<"Editorial:"<<imp.getEditorial()<<endl;
                            cout<<"ISBN:"<<imp.getIsbn()<<endl;
                            cout<<"Categoria:"<<imp.getCategoria()<<endl;
                            cout<<"Categoria secundaria:"<<imp.getCategoria2()<<endl;
                            cout<<"Ejemplares:"<<imp.getEjemplares()<<endl;
                            cout<<"Ranking:"<<imp.getRanking()<<endl;
                            cout<<"Precio:"<<imp.getPrecio()<<endl;
                            system("Pause");
                            menu.menu_principal();
                        }
                        else
                        {
                            cout<<"Libro no encontrado"<<endl;
                            system("Pause");
                            menu.menu_principal();
                        }

                       break;
                    }
                    /// case 2

                    case 3:
                    {
                        /// case 3

                        system("CLS");
                        string dato, b;
                        fflush(stdin);
                        string Nodo;
                        string imp;



                        cout<<"Ingresa el titulo o el ISBN"<<endl;
                        getline(cin,dato);
                        system("cls");
                        Nodo b;
                        b.setNombre(dato);
                        b.setIsbn(dato);

                        int pos=miLista.localiza(b);

                        if(pos!=-1)
                        {
                            Nodo;
                            Nodo=miLista.recupera(pos);
                            cout<<"\n\n  .:Libro a modificar:.  \n\n"<<endl;
                            cout<<"Titulo:"<<Nodo.getNombre()<<endl;
                            cout<<"Autor:"<<Nodo.getAutor()<<endl;
                            cout<<"Editorial:"<<Nodo.getEditorial()<<endl;
                            cout<<"ISBN:"<<Nodo.getIsbn()<<endl;
                            cout<<"Categoria:"<<Nodo.getCategoria()<<endl;
                            cout<<"Categoria secundaria:"<<Nodo.getCategoria2()<<endl;
                            cout<<"Ejemplares:"<<Nodo.getEjemplares()<<endl;
                            cout<<"Ranking:"<<Nodo.getRanking()<<endl;
                            cout<<"Precio:"<<Nodo.getPrecio()<<endl;
                            system("Pause");
                            system("CLS");
                            menu.menu_modificar();
                                switch(menu.get_opc())
                                {
                                    case 1:
                                    {
                                            system("CLS");
                                            string nn;
                                            fflush(stdin);
                                            cout<<"Ingresa el nuevo titulo"<<endl;

                                            getline(cin,nn);
                                            imp.setNombre(nn);
                                            miLista.modifica(imp,pos);
                                            menu.menu_Principal();
                                        break;
                                    }
                                    case 2:
                                    {
                                            system("CLS");
                                            string na;
                                            string imp;
                                            fflush(stdin);
                                            cout<<"Ingresa el nuevo autor"<<endl;

                                            getline(cin,na);
                                            imp.setAutor(na);
                                            miLista.modifica(imp,pos);
                                            menu.menu_Principal();
                                        break;
                                    }
                                    case 3:
                                    {
                                            system("CLS");
                                            string ni;
                                            string imp;
                                            fflush(stdin);
                                            cout<<"Ingresa el nuevo ISBN"<<endl;

                                            getline(cin,ni);
                                            imp.setIsbn(ni);
                                            miLista.modifica(imp,pos);
                                            menu.menu_principal();
                                        break;
                                    }

                                    case 4:
                                    {
                                            system("CLS");
                                            string nc;
                                            string imp;
                                            fflush(stdin);
                                            cout<<"Ingresa la nueva categoria"<<endl;

                                            getline(cin,nc);
                                            imp.setCategoria(nc);
                                            miLista.modifica(imp,pos);
                                            menu.menu_principal();
                                        break;
                                    }
                                    case 5:
                                    {
                                            string imp;
                                            system("CLS");
                                            string nc2;
                                            fflush(stdin);
                                            cout<<"Ingresa la nueva categoria secundaria"<<endl;

                                            getline(cin,nc2);
                                            imp.setCategoria2(nc2);
                                            miLista.modifica(imp,pos);
                                            menu.menu_principal();
                                        break;
                                    }

                                    case 6:
                                    {
                                            system("CLS");
                                            int ne;
                                            fflush(stdin);
                                            cout<<"Ingresa los nuevo ejemplares disponibles"<<endl;
                                            cin>>ne;

                                            imp.setEjemplares(ne);
                                            miLista.modifica(imp,pos);
                                            menu.menu_principal();
                                        break;
                                    }

                                    case 7:
                                    {
                                            system("CLS");
                                            float np;
                                            fflush(stdin);
                                            cout<<"Ingresa el nuevo precio"<<endl;
                                            cin>>np;

                                            imp.setPrecio(np);
                                            miLista.modifica(imp,pos);
                                            menu.menu_principal();
                                        break;
                                    }
                                }
                        }
                        else
                        {
                            cout<<"No encontrado"<<endl;
                            system("Pause");
                            menu.menu_principal();
                        }
                        break;
                    }
                    ///Case 4

                    case 4:
                    {
                        system("CLS");
                        string dato;
                        fflush(stdin);
                        cout<<"Ingresa el titulo o el ISBN"<<endl;

                        getline(cin,dato);
                        system("cls");
                        Nodo b;
                        b.setNombre(dato);
                        b.setIsbn(dato);

                        int pos=miLista.localiza(b);

                        if(pos!=-1)
                        {
                            Nodo imp;
                            imp=miLista.recupera(pos);
                            cout<<pos<<endl;
                            cout<<"Titulo:"<<imp.getNombre()<<endl;
                            cout<<"Autor:"<<imp.getAutor()<<endl;
                            cout<<"Editorial:"<<imp.getEditorial()<<endl;
                            cout<<"ISBN:"<<imp.getIsbn()<<endl;
                            cout<<"Categoria:"<<imp.getCategoria()<<endl;
                            cout<<"Categoria secundaria:"<<imp.getCategoria2()<<endl;
                            cout<<"Ejemplares:"<<imp.getEjemplares()<<endl;
                            cout<<"Ranking:"<<imp.getRanking()<<endl;
                            cout<<"Precio:"<<imp.getPrecio()<<endl;
                            system("Pause");
                            system("CLS");
                            cout<<"Deseas comprar el libro?"<<endl;
                            int compra;
                            cout<<"[1].-Si"<<endl;
                            cout<<"[2].-No"<<endl;
                            cin>>compra;
                            if(compra==1)
                            {
                                miLista.lista[pos].setRanking(miLista.lista[pos].getRanking()+1);
                                miLista.lista[pos].setEjemplares(miLista.lista[pos].getEjemplares()-1);
                                menu.menu_principal();
                            }
                            if(compra==2)
                            {
                                cout<<"No comprado"<<endl;
                                system("Pause");
                                system("CLS");
                                menu.menu_principal();
                            }
                        }
                        else
                        {
                            cout<<"No encontrado"<<endl;
                            system("Pause");
                            menu.menu_principal();
                        }

                        break;
            }
                    /// case 5

                    case 5:
                    {
                        Nodo libro1("La conjura de los necios","John Kennedy","Anagrama","546-789-124-599-0","Tragicomedia","Comedia",10,300,0);
                        Nodo libro2("La casa de los espíritus","Isabel","Plaza & Janes","333-222-125-456-1","Realismo mágico","Autobiographical novel",10,350,0);
                        Nodo libro3("Eat What You Want and Die Like A Man","Steve Graham","Kensington","123-456-789-101-1","Humor","Recetario",10,200,0);
                        Nodo libro4("Soy Leyenda","Richard Matheson","Gold Medal Books","555-555-555-5","Ficcion","Apocaliptico",10,250,0);
                        Nodo libro5("El psicoanalista","John Katzenbach","EDICIONES B","666-666-666-666-6"," Ficción","Misterio",10,390,0);
                        Nodo libro6("Orgullo y prejuicio y zombis","Seth Grahame-Smith","BOOKS4POCKET","258-694-687-285-1","Horror","Ficción histórica",10,299,0);
                        Nodo libro7("La llamada de Cthulhu","H. P. Lovecraft","Pluton","145-785-123-987-5","Terror","Ficcion",10,399,0);
                        Nodo libro8("El Anticristo","Friedrich Nietzsche","Alianza","456-582-125-215-7","Obra de referencia","Ficcion",10,100,0);
                        Nodo libro9("Así habló Zaratustra","Friedrich Nietzsche","Alianza","456-582-125-215-6","Ficcion inspiracional","Poesía",10,100,0);
                        Nodo libro10("El capital","Karl Marx","Alianza","548-845-666-127-3"," Tratado","",10,100,0);

                        miLista.inserta(libro1);
                        miLista.inserta(libro2);
                        miLista.inserta(libro3);
                        miLista.inserta(libro4);
                        miLista.inserta(libro5);
                        miLista.inserta(libro6);
                        miLista.inserta(libro7);
                        miLista.inserta(libro8);
                        miLista.inserta(libro9);
                        miLista.inserta(libro10);

                        cout<<"AGREGASTE 10 LIBROS AL CATALOGO"<<endl;
                        system("pause");
                        system("cls");
                        menu.menu_principal();
                            break;
                        }
                    /// case 6

                    case 6:
                    {
                            /// case 6
                           miLista.mostrarTodo();
                           system("pause");
                           system("cls");
                           menu.menu_principal();
                            break;
                        }
                    /// case 7

                    case 7:
                    {
                            system("CLS");
                            menu.menu_tda();
                            switch(menu.get_opcl())
                            {//Inicio swtich

                        case 0:
                        {
                            system("CLS");
                            goto Principal;
                            break;
                        }
                            ///Case 1
                        case 1:
                            {
                                miLista.inicializa();
                                menu.menu_tda();
                                break;
                            }
                            ///Case 2
                        case 2:
                            {
                                miLista.vacia();
                                if(miLista.vacia())
                                {
                                    cout<<"Lista vacia"<<endl;
                                    system("Pause");
                                }
                                else
                                    {
                                    cout<<"Lista no vacia"<<endl;
                                    system("Pause");
                                    }

                                break;
                            }
                            ///case 3
                        case 3:
                            {
                                miLista.llena();
                                if(miLista.llena())
                                {
                                    cout<<"Lista llena"<<endl;
                                    system("Pause");
                                }
                                else
                                {
                                    cout<<"Lista no llena"<<endl;
                                    system("Pause");
                                }

                                break;
                            }
                        case 4:
                            {
                                string nombre,autor,editorial,isbn,categoria,categoria2;
                                int ejemplares;
                                float precio;

                                cout<<"Ingresa el titulo"<<endl;
                                getline(cin,nombre);
                                fflush(stdin);
                                nuevoNodo.setNombre(nombre);

                                cout<<"Ingresa el autor"<<endl;
                                getline(cin,autor);
                                nuevoNodo.setAutor(autor);
                                fflush(stdin);

                                 cout<<"Ingresa el editorial"<<endl;
                                getline(cin,editorial);
                                nuevoNodo.setEditorial(editorial);
                                fflush(stdin);

                                 cout<<"Ingresa el ISBN"<<endl;
                                getline(cin,nombre);
                                nuevoNodo.setIsbn(isbn);
                                fflush(stdin);

                                 cout<<"Ingresa la categoria"<<endl;
                                getline(cin,categoria);
                                nuevoNodo.setCategoria(categoria);
                                fflush(stdin);

                                 cout<<"Ingresa la categoria secundaria"<<endl;
                                getline(cin,categoria2);
                                nuevoNodo.setCategoria2(categoria2);
                                fflush(stdin);

                                 cout<<"Ingresa los ejemplares disponibles"<<endl;
                                cin>>ejemplares;
                                nuevoNodo.setEjemplares(ejemplares);
                                fflush(stdin);

                                cout<<"Ingrese el precio"<<endl;
                                cin>>precio;
                                nuevoNodo.setPrecio(precio);
                                fflush(stdin);

                                miLista.inserta(nuevoNodo);
                                system("CLS");
                                break;
                            }

                        case 5:
                            /// Case 5
                            {
                                system("CLS");
                                string dato;
                                fflush(stdin);
                                cout<<"Ingresa el titulo o el ISBN"<<endl;
                                getline(cin,dato);
                                system("cls");
                                Nodo b;
                                b.setNombre(dato);
                                b.setIsbn(dato);

                                int pos=miLista.localiza(b);
                                miLista.eliminar(int);
                                system("Pause");
                                system("CLS");

                                break;
                            }

                        case 6:
                            ///Case 8
                            {
                                miLista.primero();
                                system("Pause");
                                break;
                            }

                        case 7:
                            ///Case 7
                            {
                                miLista.ultimo();
                                system("Pause");
                                break;
                            }
                            ///Case 8
                        case 8:
                            {
                                system("CLS");
                                string dato;
                                fflush(stdin);
                                cout<<"Ingresa el titulo o el ISBN"<<endl;
                                getline(cin,dato);
                                system("cls");
                                Nodo b;
                                b.setNombre(dato);
                                b.setIsbn(dato);

                                int pos=miLista.localiza(b);
                                miLista.anterior(pos);
                                system("Pause");
                                system("CLS");

                                break;
                            }
                            ///Case 9
                        case 9:
                            {
                                system("CLS");
                                string dato;
                                fflush(stdin);
                                cout<<"Ingresa el titulo o el ISBN"<<endl;
                                getline(cin,dato);
                                system("cls");
                                Nodo b;
                                b.setNombre(dato);
                                b.setIsbn(dato);

                                int pos=miLista.localiza(b);
                                miLista.siguiente(pos);
                                system("Pause");
                                system("CLS");

                                break;
                            }
                            ///Case 10
                        case 10:
                            {
                                system("CLS");
                                string dato;
                                fflush(stdin);
                                cout<<"Ingresa el titulo o el ISBN"<<endl;
                                getline(cin,dato);
                                system("cls");
                                Nodo b;
                                b.setNombre(dato);
                                b.setIsbn(dato);

                                int pos = miLista.localiza(b);
                                system("Pause");
                                break;
                            }
                            ///Case 11
                        case 11:
                            {
                                system("CLS");
                                string dato;
                                fflush(stdin);
                                cout<<"Ingresa el titulo o el ISBN"<<endl;
                                getline(cin,dato);
                                system("cls");
                                Nodo b;
                                b.setNombre(dato);
                                b.setIsbn(dato);

                                int pos=miLista.localiza(b);

                                if(pos!=-1)
                                {
                                    Nodo imp;
                                    imp=miLista.recupera(pos);
                                    cout<<pos<<endl;
                                    cout<<"Titulo:"<<imp.getNombre()<<endl;
                                    cout<<"Autor:"<<imp.getAutor()<<endl;
                                    cout<<"Editorial:"<<imp.getEditorial()<<endl;
                                    cout<<"ISBN:"<<imp.getIsbn()<<endl;
                                    cout<<"Categoria:"<<imp.getCategoria()<<endl;
                                    cout<<"Categoria secundaria:"<<imp.getCategoria2()<<endl;
                                    cout<<"Ejemplares:"<<imp.getEjemplares()<<endl;
                                    cout<<"Ranking:"<<imp.getRanking()<<endl;
                                    cout<<"Precio:"<<imp.getPrecio()<<endl;
                                    system("Pause");
                                }
                                else
                                {
                                    cout<<"No encontrado"<<endl;
                                    system("Pause");

                                }
                                break;
                            }
                            ///Case 12
                        case 12:
                            {
                                miLista.mostrarTodo();
                                system("Pause");
                                break;
                            }
                            ///Case 13
                        case 13:
                            {
                                miLista.anula();
                                break;
                            }
                        }
                        break;
                    }
                    /// case 8

                    /*case 8:
                    {
                                menu.menu_ordenar();
                                switch(menu.get_opcl())
                                {//Inicio switch

                                 case 1:
                                    {

                                        break;
                                    }
                                case 2:
                                    {
                                        break;
                                    }
                                case 3:
                                    {
                                        break;
                                    }
                                case 4:
                                    {
                                        int opcrank;
                                        cout<<"Quieres ordenar los libros por Ranking?"<<endl;
                                        cout<<"[1].-Si"<<endl;
                                        cout<<"[2].-No"<<endl;
                                        cin>>opcrank;
                                        if(opcrank==1)
                                        {

                                        }
                                        if(opcrank==2)
                                        {
                                            cout<<"Libros no organizados"<<endl;
                                        }

                                        break;


                            }


                            break;


                        }//Fin Switch
                                break;

                    }*/


                }///SWITCH CASE


            }///WHILE


    return 0;
}


