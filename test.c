/*
    C-Bas Demo

*/
#include <stdio.h>
#include "cbas.h"

int main(int argc, const char **argv){
    /* Intro Portion */
    PrintString("This is a test of CBAS");
    PrintString("A small library that lets you make");
    PrintString("BASIC-like code in C");
    BlankLine();
    /* Display some colors */
    PrintString(Red "This is text in RED" ColorReset);
    PrintString(Green "This is text in GREEN" ColorReset);
    PrintString(Yellow "This is text in YELLOW" ColorReset);
    PrintString(Blue "This is text in BLUE" ColorReset);
    PrintString(Magenta "This is text in MAGENTA" ColorReset);
    PrintString(Cyan "Cyan?");
    BlankLine();
    PrintString(Red "Why " ColorReset Green "not " ColorReset Blue "them " ColorReset Yellow "all?\n" ColorReset
                Magenta "That would be pretty " ColorReset Cyan "cool\n" ColorReset);
    Pause();
    Clear();
    Beep();
    PrintString("Features some simple functions so far like");
    Pause();
    PrintString(Blue "Beep()" ColorReset
                "This is just a simple beep command");
    Pause();
    PrintString(Green "Pause()" ColorReset
                "This function simply pauses the program and waits for the Enter" Italic "(or Return)" ColorReset" key to be pressed ");
}