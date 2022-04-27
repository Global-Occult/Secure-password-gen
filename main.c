//Learning to write C
//My first C code

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
    char regex[62];
    char randompassword[15];
    int random_number;
    int i;
    char random_character ;
    //The regex should be bigger
    strcpy(regex , "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890");
    srand(time(0));
    printf("Random password -");
    for(i = 0; i<15; i++)
    	//15 character length should be good enough
        printf("%c", regex[rand() % (62)]);

}