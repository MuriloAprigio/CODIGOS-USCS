/******************************************************************************
Murilo Aprigio Sant'ana AED2 08/08/2022
código salário mensal

*******************************************************************************/
#include <stdio.h>

int main(){

 float salmensal, salhora, qtdehoras;
 
 printf("entre com o salario mensal: ");
 scanf("%f", &salhora);
 printf("entre com a quantidade de horas: ");

  scanf("%f", &qtdehoras);
  
  salmensal = salhora * qtdehoras;
  printf("%f", salmensal);

    return 0;
}