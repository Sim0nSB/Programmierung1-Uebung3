#include <stdio.h>
#include <stdlib.h>


int aufgabe1(), aufgabe2(), aufgabe3(), aufgabe4(), aufgabe5(), aufgabe6();

int main(void) {

  //aufgabe1();
  aufgabe2();
  //aufgabe3();
  //aufgabe4();
  //aufgabe5();
  //aufgabe6();
  //aufgabe7();

}

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

 // ------Müllll-----
  /*if(zahl1 <= zahl2){
    if(zahl2 <= zahl3){
      //schon richtig sortiert 
    }else if(zahl2 > zahl3){
      //tausche zahl2 und zahl3
      temp = zahl2;
      zahl2 = zahl3;
      zahl3 = temp;
    }
  }else if(zahl1 > zahl2){
    //tausche zahl1 und zahl2
    temp = zahl1;
    zahl1 = zahl2;
    zahl2 = temp;
    if(zahl2 <= zahl3){
      // fertig sortiert
    }else if(zahl2 > zahl3){
      //tause zahl2 und zahl3
      temp = zahl2;
      zahl2 = zahl3;
      zahl3 = temp;
    }
  }else if(zahl1 > zahl2){
    //tausche zahl1 und zahl2
    temp = zahl1;
    zahl1 = zahl2;
    zahl2 = temp;
  }
  */
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