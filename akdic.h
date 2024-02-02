#include<stdio.h>

int m = 0;
char key[100];
int val[100];

void ak_put(char c, int n){
    int f = 0;
    for (int i = 0; i < m; i++)
    {
        if(key[i] == c){
            printf("AK_WARNING !!! %c is already a key",c);
            f = 1;
            break;
        }
    }

    if(f == 0){
        *(key + m) = c; 
        *(val + m) = n; 
        m++;
    }
}

int ak_get(char c){
    for (int i = 0; i < m; i++)
    {
        if(key[i] == c){
            return val[i];
        }
    }

    printf("AK_WARNING !!!%c is not any key",c);
    return -1;    
}

char ak_getkey(int n){
    return key[n];
}

char ak_getval(int n){
    return val[n];
}

char* ak_keys(){
    return key;
}

int* ak_vals(){
    return val;
}

void ak_put_again(char c, int n){
    
       for (int i = 0; i < m; i++)
    {
        if(key[i] == c){
            *(key + i) = c;
            *(val + i) = n;
        }
    }
}