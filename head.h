#ifndef DICCIONARIO_H
#define DICCIONARIO_H

typedef struct Significado {
    char Pal[40];
    char Sig[1500];
    Significado *sig;
    Significado *ant;
}Significado;

class Diccionario
{
    public:
        Diccionario();
        void Agregar();
        void Ver();
        void Eliminar();
        void Buscar();
        virtual ~Diccionario();
    protected:
    private:
        Significado Palabra[24];
};


#endif // DICCIONARIO_H
