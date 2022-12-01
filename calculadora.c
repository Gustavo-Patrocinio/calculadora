#include<stdio.h>
#include<math.>

int main(){

  printf("* * * * Calculadora * * * *\n\n");

  char continuar = 'Y';
  while(continuar == 'Y' || continuar == 'y'){
    printf("\nDigite a expressao desejada: \n");

    float n1,n2,res;
    char op;
    scanf("%f%c%f", &n1,&op,&n2);
    switch (op)
    {
    case '+':
      res = n1+n2;
      break;
    case '-':
      res = n1-n2;
      break;
    case '/':
      res = n1/n2;
      break;
    case '*':
      res = n1*n2;
      break;
    case '^':
      res = pow(n1,n2);
      break;
    default:
      printf("\nOperacao nao suportada\n");
      continue;
      break;
    }
    printf("= %f\n",res);
    printf("Deseja continuar(Y/N)? ");
    scanf("%s",&continuar);
  }
  return 0;
}