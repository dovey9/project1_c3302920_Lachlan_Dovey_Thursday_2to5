/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int menuChoice = 9;
    while((menuChoice < 1 || menuChoice > 6) && (menuChoice != 26155)) {
        printf("Please enter a number between 1 and 6:");
        scanf("%d", &menuChoice);
        if(menuChoice < 1 || menuChoice > 6) {
            printf("\n***** Please enter a valid number between 1 and 6 *****\n\n");
        }
    }
/*<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>*/

    
/*********************************************************************************************/
//Program Question 1
/*********************************************************************************************/

    if(menuChoice == 1) { // executes problem 1
        
        //integer variables declaration
        int rotations = 0;
        int x = 0;
        int i;
        int current;
        int tempNum;
        
        //character variables declaration
        char sentence[200] = "";
        char codedSentence[200] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
        char letter;
        
        printf("\n> Please enter letters until finished.\n");
        printf("> To add a space, enter a lowercase 's'.\n");
        printf("> To finish entering letters, enter a lowercase 'e'.\n\n");
        
        while(x != 200) {
            printf("Enter a letter: ");
            scanf("%s", &letter);
            if(letter == 101){
               x = 200; 
            }
            else if(letter == 115){
                sentence[x] = 32;
                x++;
            }
            else{
                sentence[x] = letter;
                x++;
            }
        }
        printf("You have Entered: %s\n", sentence);
        
        printf("Please enter the number of rotations: ");
        scanf("%d", &rotations);
        
        for (i = 0; i < 200; i++){
            //printf("%d", decodedSentence[i]);
            current = sentence[i];
            if (sentence[i] == ' ') {
                codedSentence[i] = sentence[i];
            }
            else{
                tempNum = current + rotations;
                if (tempNum > 90) {
                    tempNum = tempNum - 26;
                    
                }
                codedSentence[i] = tempNum;
                tempNum = 0;
            }
            
        }
        printf("Your sentenced encrypted is: %s", codedSentence);
        
    }
    
/*********************************************************************************************/
//Program Question 2
/*********************************************************************************************/
 
    else if(menuChoice == 2) {// executes problem 2
        
        //integer variables declaration
        int rotations = 0;
        int x = 0;
        int i;
        int current;
        int tempNum;
        
        //character variables declaration
        char sentence[200] = "";
        char decodedSentence[200] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
        char letter;
        
       // printf("Please enter the encrypted message: ");
        //scanf("%s", sentence);
        printf("\n> Please enter letters until finished.\n");
        printf("> To add a space, enter a lowercase 's'.\n");
        printf("> To finish entering letters, enter a lowercase 'e'.\n\n");
        while(x != 200) {
            printf("Enter a letter: ");
            scanf("%s", &letter);
            if(letter == 101){
               x = 200; 
            }
            else if(letter == 115){
                sentence[x] = 32;
                x++;
            }
            else{
                sentence[x] = letter;
                x++;
            }

        }
        printf("You have Entered: %s\n", sentence);
       // scanf("%s", sentence);
//An alternative is to use a loop that repeatedly reads in characters using scanf("%c",&c)
//, stores them in an array, and stops when a newline is found (and terminates the string 
//with a '\0').         
        printf("Please enter the number of rotations: ");
        scanf("%d", &rotations);
        
        //dwjdiowjdiwjdiowjd
        for (i = 0; i < 200; i++){
            //printf("%d", decodedSentence[i]);
            current = sentence[i];
            if (sentence[i] == ' ') {
                decodedSentence[i] = sentence[i];
            }
            else{
                tempNum = current - rotations;
                if (tempNum < 65) {
                    tempNum = tempNum + 26;
                    
                }
                decodedSentence[i] = tempNum;
                tempNum = 0;
            }
            
        }
        printf("Your sentenced decrypted is: %s", decodedSentence);
        
        
    }

    
/*********************************************************************************************/
//Program Question 3
/*********************************************************************************************/
    
    else if(menuChoice == 3) {// executes problem 3
        
        //letter variables declaration - kept seperate from other char variables for simplicity
        //char a = "A", b = "B", c = "C", d = "D", e = "E", f = "F", g = "G", h = "H", i = "I", j = "J", k = "K", l = "L", m = "M", n = "N", o = "O", p = "P", q = "Q", r = "R", s = "S", t = "T", u = "U", v = "V", w = "W", x = "X", y = "Y", z = "Z";
        //char alphaCode[200] = "________________________________________________________________________________________________________________________________________________________________________________________________________";
        char alphaCode[200] = "                                                                                                                                                                                                        ";
 
        //integer variables declaration
        int x = 65;//65
       // int c = 0;
        int i;
        int current;
        int tempNum;
        
        //character variables declaration
        char sentence[200] = "";
        char codedSentence[200] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
        char letter;
        
        printf("\n> Please input substituted letters as promted.\n");
        
        while(x != 91){
            printf("Please enter letter: ");
            scanf("%s", &letter);
            alphaCode[x] = letter;
            x++;
        }
        
        printf("\n> Now you will enter the sentence you wish to decrypt.\n");
        printf("> Please enter letters until finished.\n");
        printf("> To add a space, enter a lowercase 's'.\n");
        printf("> To finish entering letters, enter a lowercase 'e'.\n\n");
        x = 0;
        while(x != 200) {
            printf("Enter a letter: ");
            scanf("%s", &letter);
            if(letter == 101){
               x = 200; 
            }
            else if(letter == 115){
                sentence[x] = 32;
                x++;
            }
            else{
                sentence[x] = letter;
                x++;
            }

        }
        printf("You have Entered: %s\n", sentence);
        
        for (i = 0; i < 200; i++){
            //printf("%d", decodedSentence[i]);
            current = sentence[i];
            if (sentence[i] == ' ') {
                codedSentence[i] = sentence[i];
            }
            else{
                codedSentence[i] = alphaCode[current];
                //tempNum = current - rotations;
                //if (tempNum < 65) {
                //    tempNum = tempNum + 26;
                    
                //}
                //decodedSentence[i] = tempNum;
                //tempNum = 0;
            }
            
        }
        printf("Your sentenced encrypted is: %s", codedSentence);
    }
    
/*********************************************************************************************/
//Program Question 4
/*********************************************************************************************/
    
    
    else if(menuChoice == 4) {// executes problem 4
        
        //letter variables declaration - kept seperate from other char variables for simplicity
        char alphaCode[200] = "                                                                                                                                                                                                        ";
        
        //integer variables declaration
        int x = 65;
        int i;
        int c = 65;
        int current;
        int tempNum;
        
        //character variables declaration
        char sentence[200] = "";
        char codedSentence[200] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
        char letter;
        
        printf("\n> Please input substituted letters as promted.\n");
        
        while(x != 91){
            printf("Please enter letter: ");
            scanf("%s", &letter);
            alphaCode[letter] = c;
            c++;
            x++;
        }
        
        printf("\n> Now you will enter the sentence you wish to decrypt.\n");
        printf("> Please enter letters until finished.\n");
        printf("> To add a space, enter a lowercase 's'.\n");
        printf("> To finish entering letters, enter a lowercase 'e'.\n\n");
        x = 0;
        while(x != 200) {
            printf("Enter a letter: ");
            scanf("%s", &letter);
            if(letter == 101){
               x = 200; 
            }
            else if(letter == 115){
                sentence[x] = 32;
                x++;
            }
            else{
                sentence[x] = letter;
                x++;
            }

        }
        printf("You have Entered: %s\n", sentence);
        
        for (i = 0; i < 200; i++){
            //printf("%d", decodedSentence[i]);
            current = sentence[i];
            if (sentence[i] == ' ') {
                codedSentence[i] = sentence[i];
            }
            else{
                codedSentence[i] = alphaCode[current];
                //tempNum = current - rotations;
                //if (tempNum < 65) {
                //    tempNum = tempNum + 26;
                    
                //}
                //decodedSentence[i] = tempNum;
                //tempNum = 0;
            }
            
        }
        printf("Your sentenced encrypted is: %s", codedSentence);

    }
    
/*********************************************************************************************/
//Program Question 5
/*********************************************************************************************/

    else if(menuChoice == 5) {// executes problem 5
        char sentence[200] = "XIFO EPFT B DBU TMFFQ";
        char decodedSentence[200] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
        char decodedSentenceTwo[200] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

        //scanf("%s", sentence)
        
        //integer variables declaration
        int x; //initializing x for use in loop to find single letter in sentence
        int i;
        int test;
        int decode;
        int newNum;
        int altLetter;
        
        //character variables declaration
        char sLetter;
        
        
        x = 0;//prepares variable x for use in the loop
        while(x != 200) {//loop to find a single letter in the inputed text
            if (sentence[x] == ' '){
                if (sentence[x+2] == ' ') {
                    sLetter = ("%c", sentence[x+1]);
                }
            }
            x++;
        }
    
    
        
    /*********************************************************************************************/
        decode = sLetter - 65;
    
        for (i = 0; i < 200; i++){
            //printf("%d", decodedSentence[i]);
            test = sentence[i];
            if (sentence[i] == ' ') {
                decodedSentence[i] = sentence[i];
            }
            else{
                newNum = test - decode;
                if (newNum < 65) {
                    newNum = newNum + 26;
                    
                }
                decodedSentence[i] = newNum;
                
            }
            
            newNum = 0;
        }
        
        printf("Was this decoded correctly: %s\n", decodedSentence);
        printf("yes = 0/no = 1: ");
        scanf("%d", altLetter);
        
        if(altLetter == 1){
            decode = sLetter - 73;
            for (i = 0; i < 200; i++){
                //printf("%d", decodedSentence[i]);
                test = sentence[i];
                if (sentence[i] == ' ') {
                    decodedSentenceTwo[i] = sentence[i];
                }
                else{
                    newNum = test - decode;
                    if (newNum < 65) {
                        newNum = newNum + 26;
                        
                    }
                    decodedSentenceTwo[i] = newNum;
                    
                }
                
                newNum = 0;//resets newNum for reuse in the loop
            }
        }
    }
    
/*********************************************************************************************/
//Program Question 6
/*********************************************************************************************/
    
    else if(menuChoice == 6) {// executes problem 6, however it is unavailable
        printf("Program not available.");
    }
    
/*********************************************************************************************/
// Program for testing ignore
/*********************************************************************************************/

    else if(menuChoice == 26155) {
        char sentence[200] = "XIFO EPFT B DBU TMFFQ";
        char decodedSentence[200] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
        //scanf("%s", sentence)
        
        //integer variables declaration
        int x;
        int i;
        int test;
        int decode;
        int newNum;
        
        //character variables declaration
        char sLetter;
        
        x = 0;
        while(x != 200 /*&& sLetter != NULL*/) {
            if (sentence[x] == ' '){
                if (sentence[x+2] == ' ') {
                    sLetter = ("%c", sentence[x+1]);
                    //printf("%c", sLetter);
                }
            }
            x++;
        }
    
    
        
    /*********************************************************************************************/
        decode = sLetter - 65;
    
        for (i = 0; i < 200; i++){
            //printf("%d", decodedSentence[i]);
            test = sentence[i];
            if (sentence[i] == ' ') {
                decodedSentence[i] = sentence[i];
            }
            else{
                newNum = test - decode;
                if (newNum < 65) {
                    newNum = newNum + 26;
                    
                }
                decodedSentence[i] = newNum;
                //printf("%d", newNum);
                /*if(newNum == 65){
                    decodedSentence[i] = 65;
                    
                }
                else if(newNum == 66){
                    decodedSentence[i] = 67;
                    
                }
                else if(newNum == 67){
                    decodedSentence[i] = "C";
                    
                }
                else if(newNum == 68){
                    decodedSentence[i] = "D";
                    
                }
                else if(newNum == 69){
                    decodedSentence[i] = "E";
                    
                }
                else if(newNum == 70){
                    decodedSentence[i] = "F";
                    
                }
                else if(newNum == 71){
                    decodedSentence[i] = "G";
                    
                }
                else if(newNum == 72){
                    decodedSentence[i] = "H";
                    
                }
                else if(newNum == 73){
                    decodedSentence[i] = "I";
                    
                }
                else if(newNum == 74){
                    decodedSentence[i] = "J";
                    
                }
                else if(newNum == 75){
                    decodedSentence[i] = "K";
                    
                }
                else if(newNum == 76){
                    decodedSentence[i] = "L";
                    
                }
                else if(newNum == 77){
                    decodedSentence[i] = "M";
                    
                }
                else if(newNum == 78){
                    decodedSentence[i] = "N";
                    
                }
                else if(newNum == 79){
                    decodedSentence[i] = "O";
                    
                }
                else if(newNum == 80){
                    decodedSentence[i] = "P";
                    
                }
                else if(newNum == 81){
                    decodedSentence[i] = "Q";
                    
                }
                else if(newNum == 82){
                    decodedSentence[i] = "R";
                    
                }
                else if(newNum == 83){
                    decodedSentence[i] = "S";
                    
                }
                else if(newNum == 84){
                    decodedSentence[i] = "T";
                    
                }
                else if(newNum == 85){
                    decodedSentence[i] = "U";
                    
                }
                else if(newNum == 86){
                    decodedSentence[i] = "V";
                    
                }
                else if(newNum == 87){
                    decodedSentence[i] = "W";
                    
                }
                else if(newNum == 88){
                    decodedSentence[i] = "X";
                    
                }
                else if(newNum == 89){
                    decodedSentence[i] = "Y";
                    
                }
                else if(newNum == 90){
                    decodedSentence[i] = "Z";
                    
                }*/
            }
            //decodedSentence[i] =
            
            newNum = 0;
        }
        printf("%s", decodedSentence);
    }
/*********************************************************************************************/
//My notes
/*********************************************************************************************/

    
    /*
    if(sLetter < 109) {
        if(sLetter == 98) { //b
            
        }
    }
    -------------------------------------------------------------------------------------------
    else if(sLetter < 123) {
        printf("Second half");
        printf("%d", sLetter);
    }*/
    //65
    //M = 77
    //90
/*********************************************************************************************/

    //printf("%s\n", sentence);
    //printf("hi\n");
    //printf("%c test", sentence[3]);
    return 0;
}
/*
 for (x = 0; x < 200; x++){
        if (sentence[x] == ' '){
            if (sentence[x+2] == ' ') {
                sLetter = sentence[x+1];
            }
        }
    }

*/
