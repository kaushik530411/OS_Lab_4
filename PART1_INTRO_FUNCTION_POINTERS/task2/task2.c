#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int terminate();

int main (void) {
    /* IMPLEMENT ME: Insert your algorithm here */
    int (*ops[5]) (int foo, int bar);
    ops[0] = add;
    ops[1] = subtract;
    ops[2] = multiply;
    ops[3] = divide;
    ops[4] = terminate;
  
    int a, b, user_input_op;
    a = 6;
    b = 3;
    
    printf("Operand ‘a’ : %d | Operand ‘b’ : %d\n", a, b);
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
    scanf("%d", &user_input_op);
        
    int output = (*ops[user_input_op])(a, b);
    printf("x = %d\n", output);
    
    return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) {
  printf("Adding 'a' and 'b'\n");
  return a + b; 
}

int subtract (int a, int b) {
  printf("Subtracting 'b' from 'a'\n");
  return a - b;
}

int multiply (int a, int b) {
  printf("Multiplying 'a' and 'b'\n");
  return a * b;
}

int divide (int a, int b) {
  printf("Dividing 'a' by 'b'\n");
  return a / b;
}

int terminate() {
  exit(0);
}
