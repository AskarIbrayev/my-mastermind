#include <stdio.h>
#include <string.h>
int my_strcmp(char* param_1, char* param_2){
    int a = 0;
    for (int i = 0; i < 2; i++){
        if (param_1[i] == param_2[i]){
            a = 1;
        }else {
            a = 0;
            break;
            
        }
    }
    if (a == 1){
        return 0;
    }else return 1;
}
/*
int main(){
    printf("%d",my_strcmp("-c","-c"));
    return 0;
}
*/
