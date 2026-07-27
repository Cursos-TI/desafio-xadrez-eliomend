#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Torre moveu-se para direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Rainha moveu-se para esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Bispo moveu-se para cima\n");
        printf("Bispo moveu-se para direita\n");
        moverBispo(casas - 1);
    }
}


int main() {
   int torre, rainha;
   int bispo = 1;
   int cavalo = 1;

   rainha = 1;

    moverTorre(5);

printf("\n");

   moverBispo(5);

printf("\n");

   moverRainha(8);

   printf("\n");

   for (cavalo = 1; cavalo < 3; cavalo++) {
      printf("Cavalo moveu-se para baixo\n");
      printf("Cavalo moveu-se para baixo\n");
       do {
        printf("Cavalo moveu-se para esquerda\n");
      cavalo++;
    } while (cavalo <= 1);
   }




return 0;

}