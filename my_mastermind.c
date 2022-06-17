#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "my_mastermind.h"

int main(int argc, char** argv){
    char secrNum[4]; 
    int attempt = 10, noinput = 0, randNumb; 
    for (int i = 0; i < argc; i++){     //this loop checks if there is input and copies it
        if (my_strcmp(argv[i],"-c")==0){    //comp function used from another c file using header  
            for (int j = 0; j < 4; j++){
                secrNum[j] = argv[i+1][j];
            }
            noinput++;
        }
        if (my_strcmp(argv[i],"-t")==0){ 
            attempt = atoi(argv[i+1]);
        } 
    }        
    if (noinput == 0){  //this part creates random code if there was no input 
        srand(time(0));
        int i = 0;
        while (i < 4){
            randNumb = (rand()%8) + 48;
            int repeated = 0;
            for (int j = 0; j < i; j++){
                if (secrNum[j] == randNumb){
                    repeated = 1;
                    break;
                }
            }
            if (repeated == 0){
                secrNum[i] = randNumb;
                i++;
            }
        }
    }
    char inputNum[4];
    for (int i = 0; i < attempt; i++) {
        int wplaced = 0, mplaced = 0, wronginput = 1;
        printf("\n---------------\nRound %d ", i+1);
        while (wronginput == 1){    //get guesses from user and checks for correctness of input
            wronginput = 0;
            printf("\nEnter a 4 digit number\n");
            scanf("%s", inputNum);
            for (int k = 0; k < 4; k++){
                if (inputNum[k] < 48 || inputNum[k] > 55){
                    printf("\n!wrong input!\n");
                    wronginput = 1;
                    break;
                }
                for (int l = 0; l < k; l++){
                    if (inputNum[l] == inputNum[k]){
                        printf("\nwrong input: repeated numbers\n");
                        wronginput = 1;
                        break;
                    }
                }
            }
        }
        for (int ii = 0; ii < 4; ii++){ //this loop checks well places and misplaced pieces
            for (int is = 0; is < 4; is++){
                if (is == ii && secrNum[is]  == inputNum[ii]){
                    wplaced ++;                 
                }else if (secrNum[is]==inputNum[ii]){
                    mplaced ++;
                }
            }
        }
        if (wplaced == 4){
            printf("Congratulations! YOU WIN!\n");
            break;
        }
        printf("%d well placed piece(s)\n%d misplaced piece(s)\n", wplaced, mplaced);
        if (i == attempt - 1){
            printf("\nsorry, you've wasted all attempts\n");
            break;
        }      
    }
}