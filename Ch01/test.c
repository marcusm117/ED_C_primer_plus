#include <stdio.h>

int main(void){
    int num = 0;

    printf("Please enter an integer: ");
    scanf("%d", &num);
    printf("num = %d\n", num);

    // if the terminal disappears when num is printed, then uncommet the line below, so that the terminmal won't disapper until the user press a key
    // getchar();

    return 0;
}