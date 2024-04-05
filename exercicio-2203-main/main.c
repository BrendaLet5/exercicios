//0 salario de
//uma pessoa programadora trainee é Rs 3.800 acrescidos dos beneficios de plano de vale refeicao diario e de saude participativo R$ 20. Considerando que o reajustedo salario em 2024 foi de 5% e o novo valor da refeicao acordado foi de R$ 28,00.Considere que mes tem 30 e 10 dias sao do descanso remunerado semanal
//1. Informe o novo valor total recebido pela pessoa
//2.Qual o valor pago por hora, considerando uma jornada com 6 horas diarias de segunda a sexta-feira


#include <stdio.h>

int main(void) {
  float salario_beneficio, reajuste,valorHora;
  int dias, horas;
  dias = 20;
  salario_beneficio = 3800+ (20*dias);
    printf ( "O salario inicial é de: R$ %.2f\n", salario_beneficio);
  reajuste = 3800 + (3800*0.05) + (28*dias);
  printf("O salario total apos reajuste em 2024 é de: R$ %.2f\n", reajuste);
  valorHora = (reajuste/600);
  printf("O valor pago por hora é de: R$ %.3f\n", valorHora);
  return 0;
  
}