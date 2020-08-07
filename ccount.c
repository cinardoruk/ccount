/*
  help count cash

  *prompt user to enter the number of each kind of banknote and coin(each type)
  *add up the values and display type breakdown
  *ask for the elektra reg value to display the difference between the real and expected values

  *types(try):

  200
  100
  50
  20
  10
  5
  1
  0.5
  0.25
  0.1
  0.05

 */

#include <stdio.h>

void again();
void say();

int main(){

 say();
  
}

void again(){

 char c;
 printf("Tekrar?(e/h)\n");
 scanf("%1c", &c);

 if(c == 'e') {
  say();
 }
 else if(c == 'h'){
  //printf("Cikmak icin Enter'a basin.");
  scanf("%c", &c);
 }
 else if(c != 'e' && c != 'h'){
  printf("Yanlis secim.\n");
  again();
 }

}

void say(){

  float types[11] = {200, 100, 50, 20, 10, 5, 1, 0.5, 0.25, 0.1, 0.05};

  float sum = 0;
  float count = 0;
  float extra = 0;
   
  for(int i = 0; i < 11; ++i){
    
    printf("%.2f TL'lik banknot/madeni para adeti\n", types[i]);
    scanf("%f", &count);
    sum += count * types[i];
  }

  printf("Madeni doviz TL karsiligi?\n");
  scanf("%f", &extra);
  sum += extra;

  printf("Kasa toplami(TL) =\n %.2f\n", sum);

  float elektra = 0;
  printf("Elektra'daki TL nakit miktari?\n");
  scanf("%f", &elektra);

  if(elektra > sum){
    printf("Kasa %.2f eksik\n", elektra - sum);
  }
  else if (elektra == sum){
    printf("Kasa tam\n");
  }
  else{
    printf("Kasa %.2f fazla\n", -(elektra - sum));
  }

  again();
}