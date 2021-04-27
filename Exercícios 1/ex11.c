#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  //Input de dados.
  float ps;
  float qr1;
  float qr2;

  printf("Digite o peso total do saco de ração, em quilos: ");
  scanf("%f", &ps);

  printf("Digite a quantidade de ração/dia para o gato 1, em gramas: ");
  scanf("%f", &qr1);

  printf("Digite a quantidade de ração/dia para o gato 2, em gramas: ");
  scanf("%f", &qr2);

  //Cálculo do programa
  if (5 * (qr1 + qr2) > 1000 * ps) {
    printf("Com essas, quantidades o saco acabaria antes do quinto dia \n");
}
else {
    float rs;
    rs = (1000 * ps) - (5 * qr1) - (5 * qr2);
    printf("Após 5 dias, sobraram %.2f gramas no saco de ração.", rs);
}
  return 0;
}