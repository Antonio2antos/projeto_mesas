#include "structs.h"
#include "arrays.h"
#include "reader.h"
#include "reserver.h"

int main(){
    Mesas *mesas = cria_mesas();
    Grupos *grupos = cria_grupos();
    le_mesas(mesas);
    le_grupos(grupos);
    print_mesas(mesas);
    print_grupos(grupos);
    reservas(mesas, grupos);
    print_mesas(mesas);
    print_grupos(grupos);
    return 0;
}