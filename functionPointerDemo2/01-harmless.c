#include <stdio.h>

static int op_add      (int i1, int i2) { return i1+i2; }
static int op_subtract (int i1, int i2) { return i1-i2; }
static int op_multiply (int i1, int i2) { return i1*i2; }
static int op_divide   (int i1, int i2) { return i1/i2; }

#define plus 0
#define minus 1
#define times 2
#define divide 3
static int (*ops[])(int,int)
  = { op_add, op_subtract, op_multiply, op_divide };

int execute(int operation, int operand1, int operand2) {
%\Hilight%  return ops[operation](operand1, operand2);
}

int main(int argc, char* argv[]) {
  // imagine some calculator UI here
  printf("%i %s %i = %i\n", 1, "+", 2, execute(plus, 1, 2));
  // output: 1 + 2 = 3
}
