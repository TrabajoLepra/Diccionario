#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

#ifndef DICCIONARIO_H
#define DICCIONARIO_H
void abrir();
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
#endif // HEAD_H_INCLUDED
