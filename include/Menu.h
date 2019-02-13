///Clase Menu.h
#ifndef MENU_H
#define MENU_H


class Menu
{
    public:
        Menu();
        menu_principal();
        menu_tda();
        menu_modificar();
        menu_ordenar();
        get_opc();
        get_opcl();
    protected:

    private:
        int opc;
        int opcl;
};

#endif // MENU_H
