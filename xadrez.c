#include <stdio.h>

int main() {
   int torre, rainha;
   int bispo = 1;
   int cavalo = 1;

   rainha = 1;

   for (torre = 1; torre <= 5; torre++) {
    printf("Torre moveu-se para direita\n");
   }
    
printf("\n");

   while (bispo <= 5) {
    printf("Bispo moveu-se para cima\n");
    printf("Bispo moveu-se para direita\n");
    bispo++;
   }

printf("\n");

   do {
    printf("Rainha moveu-se para esquerda\n");
    rainha++;
   } while (rainha <= 8);

   printf("\n");

   for (cavalo = 1; cavalo < 3; cavalo++) {
      printf("Cavalo moveu-se para baixo\n");
      printf("Cavalo moveu-se para baixo\n");
       do {
        printf("Cavalo moveu-se para esquerda\n");
        cavalo++;
    } while (cavalo > 2);
   }




return 0;

}