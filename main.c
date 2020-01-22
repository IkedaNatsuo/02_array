#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    int n = 10;
    int*a = malloc(sizeof(int)*n);
    
    int count = 0;
    
    while(fgets(str, sizeof(str), stdin)){
        int value = scanf("%f",str);
        if(value >= 0) {
            a[count] = value;
            count++;
        } else {
            printf("%s", a[value]);
        }
    }

    return 0;
}
