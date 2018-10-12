#include <stdbool.h>
#include "stdio.h"
int main (){

    int rok = 2007;
    bool przestepny;
    przestepny = !(rok % 4) && rok % 100 || !(rok % 400);
    przestepny ?
    printf("Rok %i jest przestępny", rok):
    printf("Rok %i nie jest przestępny", rok);


}


