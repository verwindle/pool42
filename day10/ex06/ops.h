#ifndef OPS_H
#define OPS_H

typedef int(*t_op) (int, int);

int add(int a, int b);

int subtract(int a, int b);

int multiply(int a, int b);

int divide(int a, int b);

int modulo(int a, int b);

#endif