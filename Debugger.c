//Created by Isaac Ogunfolaju
//CSC/2016/0033
//Debugger of a compiler

#include <stdio.h>

void main()
{
    int err =0;
    char input[6];
    printf("Hello!\nPlease enter mathematical operations \n\n e.g c=b+c \n\n");
    gets(input);
    char first = input[0];

    if( (first>='a' && first<='z') || (first>='A' && first<='Z'))
    {
    }

    else
    {
        err = 1;
        printf(" \nSyntax Error In The Mathematical Operation . Eroor Code : 1\n");
    }

    char second = input[1];
    if(second == '=')
    {

    }
    else
    {
        err = 2;
        printf("\nSyntax Error In The Mathematical Operation . Eroor Code : 2\n");
    }

    char third = input[2];
    if( (third>='a' && third<='z') || (third>='A' && third<='Z'))
    {
    }
    else
    {
        err = 3;
        printf(" \nSyntax Error In The Mathematical Operation . Eroor Code : 3\n");
    }

    char forth = input[3];
    if( (forth == '+') || (forth == '-') || (forth == '/') || (forth == '*'))
    {
       
    }
    else
    {
        err = 4;
        printf(" \nSyntax Error In The Mathematical Operation . Eroor Code : 4\n");
    }


    char fift = input[4];
    if( (fift>='a' && fift<='z') || (fift>='A' && fift<='Z'))
    {
    }
    else
    {
        err = 5;
        printf(" \nSyntax Error In The Mathematical Operation . Eroor Code : 5\n");
    }

    if(err < 1)
    {
        printf("\n Congratulations, The Syntax Analyzer Phase Completed Successfully Without Any Error. Now Producing Syntax Tree \n\n");
    }
}
