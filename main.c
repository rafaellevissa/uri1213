#include <stdio.h>
#include <string.h>
int main(void) {
  long int numero, resto, x, tamanho;
  char numeroString[5];
  
  while(scanf("%ld",&numero)!=EOF){
    x=1;
    while(x<numero){
      x=x*10+1;
    }
    resto=x%numero;
    while(resto!=0){      
      x=x*10+1;
      resto=x%numero;           
    }
    sprintf(numeroString, "%ld", x);
    tamanho = strlen(numeroString);
    printf("%ld\n",tamanho);
  }
  return 0;
}