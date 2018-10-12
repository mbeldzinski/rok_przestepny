#include <stdbool.h>
#include "stdio.h"
int main (){

    int rok = 2007;
    bool przestepny;
    przestepny = !(rok % 4) && rok % 100 || !(rok % 400);

    printf("%i", przestepny);


}


