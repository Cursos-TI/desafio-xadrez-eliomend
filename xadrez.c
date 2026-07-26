#include <stdio.h>

int main() {
   int torre, rainha;
   int bispo = 1;

   rainha = 1;

   for (torre = 1; torre <= 5; torre++) {
    printf("Torre moveu-se para direita\n");
   }
    
   while (bispo <= 5) {
    printf("Bispo moveu-se para cima\n");
    printf("Bispo moveu-se para direita\n");
    bispo++;
   }

   do {
    printf("Rainha moveu-se para esquerda\n");
    rainha++;
   } while (rainha <= 8);


return 0;


}