#include <stdio.h>
#include <stdlib.h>

int retorna_num_mais10(int num){
    return num + 10;
}

void aumentadez(int *num){
    *num=*num+10;
}

int main() {
    int a=5;
    printf("%d\n",a);

    a= retorna_num_mais10(a);
    printf("%d\n",a);
    aumentadez(&a);
    printf("%d\n",a);
    return 0;
}