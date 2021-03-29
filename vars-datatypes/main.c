#include <stdio.h>
#include <stdbool.h>

int main() {
//  const
    const int adminLog;

//  ! Data Types

//  Boolean
    bool is_a_human = true;
//  -32 768 / 32 768
    short s_num = 32000;    
//  -0 / 64 000
    unsigned short us_num = 64000;
//  -2 million / 2 million
    int num = 1;    
    num = 4;
//  Very large numbers
    long l_num = 32000000;
    long long ll_num;
//  Float numbers
    float f_num = 4.5f;
    double df_num = 4.6217384f;
//  Chars
    char sym = 'a';

//   Base Math

    int x = 5, y = 10, res = -1;

//  x = x + y
    x += y;

//  res += 1
    res++;

    res = x + y;
    res = x - y;
    res = x / y;
    res = x * y;


    printf("Variable: %d + %d = %d \n", x, y, res);
    return 0;
}