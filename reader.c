#include "reader.h"
#include "structs.h"
#include "arrays.h"
#include <stdio.h>

void le_mesas(Mesas* mesas){
    FILE *fp = fopen("mesas.csv", "r");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo mesas.csv\n");
        return;
    }
    char linha[100];
    while(fgets(linha, 100, fp) != NULL){
        int id, capacidade_max, capacidade_atual;
        sscanf(linha, "%d,%d,%d", &id, &capacidade_max, &capacidade_atual);
        adiciona_mesa(id, capacidade_max, capacidade_atual, mesas);
    }
    fclose(fp);
}

void le_grupos(Grupos* grupos){
    FILE *fp = fopen("grupos.csv", "r");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo grupos.csv\n");
        return;
    }
    char linha[100];
    while(fgets(linha, 100, fp) != NULL){
        int pessoas;
        char id;
        sscanf(linha, "%c,%d", &id, &pessoas);
        adiciona_grupo(id, pessoas, grupos);
    }
    fclose(fp);
}