#include <stdlib.h>
#include "structs.h"
#include "arrays.h"
#include <stdio.h>

Mesas* cria_mesas(){
    Mesas *mesas_p = malloc(sizeof(Mesas));
    mesas_p->mesa = malloc(sizeof(Mesa)*100);
    mesas_p->count = 0;
    return mesas_p;
}

void adiciona_mesa(int id, int capacidade_max, int capacidade_atual, Mesas *mesas){
    mesas->mesa[mesas->count].capacidade_atual = capacidade_atual;
    mesas->mesa[mesas->count].capacidade_max = capacidade_max;
    mesas->mesa[mesas->count].id = id;
    mesas->count++;
}

Grupos* cria_grupos(){
    Grupos *grupos_p = malloc(sizeof(Grupos));
    grupos_p->grupo = malloc(sizeof(Grupo)*100);
    grupos_p->count = 0;
    return grupos_p;
}

void adiciona_grupo(int id, int tamanho, Grupos *grupos){
    grupos->grupo[grupos->count].id_mesa = -1;
    grupos->grupo[grupos->count].nome = id;
    grupos->grupo[grupos->count].tamanho = tamanho;
    grupos->count++;
}

void print_mesas(Mesas* mesas){
    for(int i = 0; i < mesas->count; i++){
        printf("Mesa %d: %d/%d\n", mesas->mesa[i].id, mesas->mesa[i].capacidade_atual, mesas->mesa[i].capacidade_max);
    }
}

void print_grupos(Grupos* grupos){
    for(int i = 0; i < grupos->count; i++){
        if(grupos->grupo[i].id_mesa == -1)
            printf("Grupo %c: %d SEM MESA\n", grupos->grupo[i].nome, grupos->grupo[i].tamanho);
        else{
            printf("Grupo %c: %d MESA %d\n", grupos->grupo[i].nome, grupos->grupo[i].tamanho, grupos->grupo[i].id_mesa);
        }
    }
}