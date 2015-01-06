#include <stdio.h>
#include <stdlib.h>

void printA() { printf("a\n"); }
void printB() { printf("b\n"); }
void printC() { printf("c\n"); }

void (*table[2]) () = { printA, printB };


void decide(int which) {
  
  table[which]();
}

void main() { decide(2); }
