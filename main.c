#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

typedef enum {
    LUN, MAR, MER, GIO, VEN, SAB, DOM
} GiorniSettimana;

typedef struct {
    GiorniSettimana giorno;
    float ore;
    float pagaOraria;
    int codiceDipendente;
    _Bool straordinario;
} Pagamento;


int main() {
    Pagamento pagamentoDipendente;

    pagamentoDipendente.giorno = LUN;
    pagamentoDipendente.ore = 4;
    pagamentoDipendente.pagaOraria = 12.5;
    pagamentoDipendente.codiceDipendente = 456;
    pagamentoDipendente.straordinario = 1 // TRUE, è tipizzato in Bool;

    float importoStipendio = pagamentoDipendente.pagaOraria * pagamentoDipendente.ore;
    float bonus = importoStipendio / 100 * 20;
    float risultato = importoStipendio + (pagamentoDipendente.straordinario > 0) * bonus;

    /* col ternario
     * importoStipendio = p.straordinario  // variabile booleana// ? importostipendio + bonus : importoStipendio ;


    printf("Il giorno #%d della settimana, il dipendente con codice #%d e\' stato pagato %.2f euro avendo lavorato %.0f ore",  pagamentoDipendente.giorno, pagamentoDipendente.codiceDipendente, risultato,pagamentoDipendente.ore);

    return 0;
}