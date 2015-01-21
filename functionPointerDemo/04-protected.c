#include <stdio.h>
#include <stdlib.h>

void printA() { printf("a\n"); }
void printB() { printf("b\n"); }
void printC() { printf("c\n"); }

void (*table1[2]) () = { printA, printB };
void (*table2[1]) () = { printC };

void decide(int which) {
  if (which < 0 || which >= 2) { exit(1); } // Boundary check
  table1[which]();
}

void main() { decide(2); }
