/*
              !*********!
              !* C-BAS *! 
              !*********!

A C Library that let's you write BASIC code
    Author: jdm [itst3k] 
    File: cbas.h
    Date: 25/09/15
    File Version: 001c
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/* ANSI Color Codes */
#define Red         "\033[31m"
#define Green       "\033[32m"
#define Yellow      "\033[33m" 
#define Blue        "\033[34m"
#define Magenta     "\033[35m"
#define Cyan        "\033[36m" 
#define ColorReset  "\033[0m"
/* ANSI Text Codes */
#define Italic      "\e[3""\e[0m"
/*
*****************************************
*   S I M P L E    F U N C T I O N S    *
*****************************************
*/

    void PrintString(const char *txtstring){
        printf("%s\n", txtstring);
    }
    void BlankLine(){
        printf("\n");
    }
    void Beep(){
        printf("\a");
    }
    void Pause(){
        printf("Paused...\n");
        getchar();
    }
    void Clear(){
        printf("\033[2J\033[H");
    }