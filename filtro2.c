#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]){
  srand(time(NULL));

  int N_DATA;
  int N_COEF;
  int R_DATA = 10;
  int ask = 0;

  if (argc < 2){
    N_DATA = 1000;
    N_COEF = 50;
    ask = 1;
  }
  else{
    scanf(N_DATA);
    scanf(N_COEF);
  }

  int * vData;
  int * vCoef;

  vData = (int*)malloc(sizeof(int)*N_DATA);
  vCoef = (int*)malloc(sizeof(int)*N_COEF);

  for (int i = 0; i < N_DATA; i++){
    vData[i] = rand()%R_DATA;
  }
}
