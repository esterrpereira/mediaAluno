#include <stdio.h>

int main() {
 float  n1, n2, n3, n4, media;
 media = (n1 + n2 + n3 + n4) /4;
    
  printf ("Digite as 4 notas:");
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
  media = (n1 + n2 + n3 + n4) /4;
  
  if ( media >= 6 )
    printf(" PARABÉNS!! VOCÊ FOI APROVADO!");
  else
    if (media< 6 && media >= 4  )
   printf(" Você está de RECUPERAÇÃO");
else
  if (media < 4 )
    printf("Você foi REPROVADO!");
 
  
}