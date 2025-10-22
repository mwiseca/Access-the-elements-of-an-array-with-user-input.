//Copyright 2024 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20     

#include <stdio.h>
#include <string.h>

void flush(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}


int main(){
    char keys [5] [20] = {"a","b","c","d","e"};
    char values [5] [20] = {"walk","bike","ebike","bus","car"};
    char select [20];

    while(1){
        printf("Enter,a,b,c,d,e to get a mode of transport x to exit.\n");
        while(fgets(select,sizeof(select),stdin) == NULL) {
            clearerr(stdin);
            printf("\nInvalid input.\n\n");
        }
        select[strcspn(select,"\n")]=0;
        if(strlen(select) >= 19) {
            flush();
        }
        if(strcmp(select,"x")==0){
            break;
        }
        int number = -1;
        for(int i = 0 ; i < 5; i++){
            if(strcmp(select, keys[i])==0){
                number = i;
            }
        }
        if(number == -1) {
            printf("\nEnter a b c or d only.\n\n");
            continue;
        }
        printf("%s\n",values[number]);
    }
    return 0;
}

