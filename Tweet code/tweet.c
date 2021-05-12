#include <stdio.h>
#include <string.h>

int countA(char T[]){ //count @
    int SIZE;
    SIZE=strlen(T);
    int count=0;
    int i;
    for(i=0;i<SIZE;i++){
        if(T[i]=='@'){
        count ++;
        }
    }
    return count;
}

int countH(char T[]){ //count #
    int SIZE;
    SIZE=strlen(T);
    int count=0;
    int i;
    for(i=0;i<SIZE;i++){
        if(T[i]=='#'){
        count ++;
        }
    }
    return count;
}

int letters(char T[], char L){ //count vowels
    int SIZE,i,count=0;
    SIZE=strlen(T);
    for(i=0;i<SIZE;i++){
        if(T[i]==L)
        count++;
    }
    return count;
}

void graphics(int X, char L){ //graphic of occurrences
    int i;//showing until the occurrences are over
    for(i=0;i<X;i++){
        if(i==0)
            printf("%c(%02d) *", L,X); //letter and number of occurrences
        else
            printf("*"); //graphic
    }
    printf("\n");
}

void showH(char T[]){ //showing #
    int count=0, TAM, i;
    TAM=strlen(T);
    for(i=0;i<=TAM;i++){
        if(T[i]=='#'){
        if(count!=0) 
            printf(", "); 
        count++; 
        while(T[i]!=32 && T[i]!=',' && T[i]!='.'){
            printf("%c",T[i]); 
            i++;
    }
    }
}
printf(".\n");
}

void showA(char T[]){ //showing @
    int count=0, TAM, i;
    TAM=strlen(T);
    for(i=0;i<=TAM;i++){
        if(T[i]=='@'){
        if(count!=0) 
            printf(", "); 
        count++; 
        while(T[i]!=32 && T[i]!=',' && T[i]!='.'){
            printf("%c",T[i]); 
            i++;
    }
    }
}
printf(".\n");
}

int main(void) {

    int letter;
    char tweet[1000];
    printf("Type your twwet: ");
    scanf("%[^\n]s", tweet);
    printf("\n");

    //# count
    printf("@: %d\n",countA(tweet));
    //@ count
    printf("#: %d\n",countH(tweet));

    //cont vowels and graphics of occurrences
    printf("Grafico de barras:\n");

    int num;//variable for the number of occurrences
    char l; //start letter

    for(letter=97;letter<=117;letter++){
        //achando vogais
        if(letter==97 || letter==101 || letter==105 || letter==111 || letter==117){ 
            num=0; //occurrences
            l=letter; //letters
            num=letters(tweet, l); //return the number of letters
            graphics(num,l); //showing graphics
        }
    }

    //showing #
    printf("# found(s): ");
    showH(tweet);

    //showing @
    printf("@ found(s): ");
    showA(tweet);

    return 0;
}