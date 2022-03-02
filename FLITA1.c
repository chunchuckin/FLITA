#include <stdio.h>
#include <math.h>

int main() {
  int i;
  int k; // Количество чисел
  
  printf("Введите количество чисел в двоичном виде: "); 
  scanf("%d", &k);
  printf("\n");

  long int dva[k];
  
  printf("Введите сами числа в двоичном виде, при вводе каждого переходите на новую строку:");
  printf("\n");
  printf("\n");
  for (i = 1; i <= k; i++){
    printf("%d число = ", i);
    scanf("%d", &dva[i]);
  }
  printf("\n");
  printf("Вывод введенных чисел в двоичном виде:"); 
  printf("\n");
  printf("\n");
  for(i = 1; i <= k; i++){
    printf("%d  ", dva[i]);
  }
  printf("\n");
  printf("\n");
  int desyat[k];
  for (i = 1; i <= k; i++){ 
    int des = 0;
    int stepen = 0;
    int p;
    int j;
    while(dva[i] != 0){
      p = (dva[i] % 10); 
      dva[i] = dva[i] / 10;
      des = des + p * powl(2, stepen);
      stepen++;
      }
    desyat[i] = des;
    des = 0;
    }
  
  printf("Десятичный вид введенных вами чисел:");
  printf("\n");
  printf("\n");
  for(i = 1; i <= k; i++)
    printf("%d  ", desyat[i]);
  } 
