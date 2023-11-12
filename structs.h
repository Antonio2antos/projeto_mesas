#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct {
    int id;
    int capacidade_max;
    int capacidade_atual;
} Mesa;

typedef struct{
    Mesa *mesa;
    int count;
}Mesas;

typedef struct{
    char nome;
    int tamanho;
    int id_mesa;
} Grupo;

typedef struct{
    Grupo *grupo;
    int count;
}Grupos;

#endif