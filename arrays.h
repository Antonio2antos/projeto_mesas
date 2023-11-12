#ifndef ARRAYS_H
#define ARRAYS_H

#include "structs.h"

Mesas* cria_mesas();
void adiciona_mesa(int id, int capacidade_max, int capacidade_atual, Mesas *mesas);
Grupos* cria_grupos();
void adiciona_grupo(int id, int tamanho, Grupos *grupos);
void print_mesas(Mesas *mesas);
void print_grupos(Grupos *grupos);

#endif