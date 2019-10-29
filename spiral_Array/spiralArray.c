#import <stdio.h>
#import <stdlib.h>

int main(){

    int  miniSteps, steps, move, posNum, arrSize, fSize, currPos;
    int *ptr;
    printf("---Spiral Array---\n");
    printf("Size of array (odd number): ");
    scanf("%d", &arrSize);
    printf("\n");
    fSize = arrSize*arrSize;
    ptr = malloc(fSize * sizeof(*ptr));
    int i;
if(ptr!= NULL){

    steps = 1;
    posNum = 1;
    currPos = (fSize-1)/2;
    *(ptr+currPos) = posNum;
    //printf("CurrPos:%d\n", currPos);
    //printf("PosNum:%d\n", posNum);
    move = 1;
    posNum++;

    for(i = 0; posNum<fSize ; i++){
        miniSteps = 1;
        //printf("Entra %d \n",i);
        /*
            0 1 2 3 4      /0 1 2 3 4/ 5 6 7 8 9/ 10 11 12 13 14/ 15 16 17 18 19/ 20 21 22 23 24
            5 6 7 8 9
            1 1 2 3 4
            5 6 7 8 9
            0 1 2 3 24

        */
        if(move==1){
            while(miniSteps<=steps){
                currPos -= 1;
                *(ptr+currPos) = posNum;
                //printf("pos: %d\n", currPos);
                //printf("num: %d\n", posNum);
                posNum++;
                ++miniSteps;
            }
            move++;

        }
        else if(move==2){
            while(miniSteps<=steps){
                currPos -= arrSize;
                *(ptr+currPos) = posNum;
                //printf("pos: %d\n", currPos);
                //printf("num: %d\n", posNum);
                posNum++;
                ++miniSteps;
            }
            move++;
            steps++;
        }
        else if(move==3){
            while(miniSteps<=steps){
                currPos += 1;
                *(ptr+currPos) = posNum;
                //printf("pos: %d\n", currPos);
                //printf("num: %d\n", posNum);
                posNum++;
                ++miniSteps;
            }
            move++;
        }
        else if(move==4){
            while(miniSteps<=steps){
                currPos += arrSize;
                *(ptr+currPos) = posNum;
                //printf("pos: %d\n", currPos);
                //printf("num: %d\n", posNum);
                posNum++;
                ++miniSteps;
            }
            move = 1;
            steps++;
        }
        if((posNum-1)>=(fSize-arrSize)){
            //printf("Entra al check\n");
            steps--;
        }
    }
    for(i = 0; i < fSize; ++i){
    if(*(ptr+i)<=9){
        printf("  %d",*(ptr+i));
    }
    else{
        printf(" %d",*(ptr+i));
    }
    if((i+1)%arrSize==0)
        printf("\n");
    }
    printf("\nEnter any key to exit...\n");
    char input[10];
    scanf("%s", input);

} else{
    printf("Unable to allocate memory...\n");
}


free(ptr);
return 0;
}

