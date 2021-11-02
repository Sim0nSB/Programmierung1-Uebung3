#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int aufgabe1(), aufgabe2(), aufgabe3(), aufgabe4(), aufgabe5(), aufgabe6();

int main(void) {

  //aufgabe1();
  //aufgabe2();
  //aufgabe3();
  //aufgabe4();
  aufgabe5();
  //aufgabe6();
  //aufgabe7();

}

//Aufgabe 1
int aufgabe1(){

  int zahl1, zahl2, zahl3, temp;

  printf("Geben Sie drei Zahlen ein: ");
  scanf("%d %d %d",&zahl1, &zahl2, &zahl3);

  if(zahl3 < zahl1){
    temp = zahl1;
    zahl1 = zahl3;
    zahl3 = temp;
  }

  if(zahl2 < zahl1){
    temp = zahl1;
    zahl1 = zahl2;
    zahl2 = temp;
  }

  if(zahl3 < zahl2){
    temp = zahl2;
    zahl2 = zahl3;
    zahl3 = temp;
  }

  printf("Die Reihenfolge lautet: %d %d %d", zahl1, zahl2, zahl3);

  return 0;
}


//Aufgabe 2
int aufgabe2(){

  int zahl, letzteStelle;
  printf("Geben Sie eine Zahl ein: ");
  scanf("%d", &zahl);

  letzteStelle = zahl % 10;

  switch(letzteStelle){
    case 0: printf("null"); break;
    case 1: printf("eins"); break;
    case 2: printf("zwei"); break;
    case 3: printf("drei"); break;
    case 4: printf("vier"); break;
    case 5: printf("fünf"); break;
    case 6: printf("sechs"); break;
    case 7: printf("sieben"); break;
    case 8: printf("acht"); break;
    case 9: printf("neun"); break;
  }

  return 0;
}


//Aufgabe 3
int aufgabe3(){

  float a,b,c,loesung1,loesung2;
  printf("Geben Sie a b und c ein: ");
  scanf("%f %f %f", &a, &b, &c);

  loesung1  = ((-b)+sqrt(b*b-4*a*c))/(2*a);
  loesung2  = ((-b)-sqrt(b*b-4*a*c))/(2*a);

  if((b*b-4*a*c) < 0){
    printf("Die Gleichung hat keine reellen Nullstellen");
  }else if((+sqrt(b*b-4*a*c)) == (-sqrt(b*b-4*a*c))){
    printf("Die Nullstelle ist %f",loesung1);
  }
  else{
    printf("Die Nullstellen sind %f %f", loesung1,loesung2);
  }
  return 0;
}


//Aufgabe 4
int aufgabe4(){
    
    double zahl;
    
    printf("Geben Sie eine Zahl ein: ");
    scanf("%lf", &zahl);
    
	// Wir runden die dritte Stelle, indem wir auf die Stelle 5 addieren
	double gerundet = (zahl+0.005);
	// Das Komma um zwei Stellen nach rechts verschieben
        gerundet = gerundet * 100;
	// Durch den Cast mittels (int) betrachten wir nur den ganzzahligen Teil
	gerundet = ((int) gerundet);
	// Das Komma um zwei Stellen nach links verschieben
	gerundet = gerundet / 100.0;
    
    // äquivalent: double gerundet = ((int) ((zahl + 0.005) * 100)) / 100.0;
    
    printf("Gerundet auf zwei Nachkommastellen: %lf", gerundet);
    
    return 0;
}

//Aufgabe 5
int aufgabe5(){
    
   int input;
   int reverse = 0;
   printf("Geben Sie eine Zahl ein.\n");
   scanf("%d", &input);
   
   while(input > 0) {
       reverse = reverse * 10;
       reverse = reverse + input % 10;
       input = input / 10;
   }
   
   printf("%d", reverse);
   return 0;
}

//Aufgabe 6
