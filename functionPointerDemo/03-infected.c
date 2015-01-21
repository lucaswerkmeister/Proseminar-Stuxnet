#include <stdio.h>
#include <stdlib.h>

void printA() { printf("a\n"); }
void printB() { printf("b\n"); }
void printC() { printf("c\n"); }

void (*table1[2]) () = { printA, printB };
void (*table2[1]) () = { printC }; // Eine weitere Tabelle

void decide(int which) {
  
  table1[which]();
}

void main() { decide(2); }
