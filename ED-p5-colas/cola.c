#include <stdio.h>

#define MAX 5

typedef struct {
    int items[MAX];
    int frente;
    int final;
    int contador;
} Cola;

void inicializar(Cola *c) {
    c->frente = 0;
    c->final = -1;
    c->contador = 0;
}

int estaLlena(Cola *c) {
    return c->contador == MAX;
}

int estaVacia(Cola *c) {
    return c->contador == 0;
}

void enqueue(Cola *c, int valor) {
    if (estaLlena(c)) {
        printf("Error: Cola llena (Queue Overflow)\n");
    } else {
        c->final = (c->final + 1) % MAX; // Movimiento circular
        c->items[c->final] = valor;
        c->contador++;
        printf("Encolado: %d\n", valor);
    }
}

int dequeue(Cola *c) {
    if (estaVacia(c)) {
        printf("Error: Cola vacia (Queue Underflow)\n");
        return -1;
    } else {
        int valor = c->items[c->frente];
        c->frente = (c->frente + 1) % MAX; // Movimiento circular
        c->contador--;
        return valor;
    }
}

void mostrar(Cola c) {
    if (estaVacia(&c)) {
        printf("La cola esta vacia.\n");
        return;
    }
    printf("Contenido de la cola: ");
    int i = c.frente;
    for (int k = 0; k < c.contador; k++) {
        printf("[%d] ", c.items[i]);
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    Cola miCola;
    inicializar(&miCola);

    printf("--- Simulacion de Cola (FIFO) ---\n");
    enqueue(&miCola, 10);
    enqueue(&miCola, 20);
    enqueue(&miCola, 30);
    mostrar(miCola);

    printf("\nDesencolando: %d\n", dequeue(&miCola));
    mostrar(miCola);

    return 0;
}