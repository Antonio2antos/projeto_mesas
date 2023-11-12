#include "reserver.h"
#include "structs.h"
#include "arrays.h"
#include <stdio.h>

void reservas(Mesas *mesas, Grupos* grupos){
    for(int i = 0; i < mesas->count; i++){
        Grupo* best = NULL;
        if(mesas->mesa[i].capacidade_atual > 0)
            continue;
        for (int j = 0; j < grupos->count; j++){
            if(best == NULL && grupos->grupo[j].id_mesa == -1 && grupos->grupo[j].tamanho <= mesas->mesa[i].capacidade_max){
                best = &grupos->grupo[j];
            }else if(grupos->grupo[j].id_mesa == -1 && grupos->grupo[j].tamanho <= mesas->mesa[i].capacidade_max && grupos->grupo[j].tamanho > best->tamanho){
                best = &grupos->grupo[j];
            }
        }
        if(best == NULL)
            continue;
        best->id_mesa = mesas->mesa[i].id;
        mesas->mesa[i].capacidade_atual = best->tamanho;
    }
}