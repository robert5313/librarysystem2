/*
    Project: COUNTY LIBRARY MANAGEMENT SYSTEM
    Author: ROBERT KIMAIYO
    Date: March 2022
    Compiler: GNU GCC
    Language: C89
    License: MIT
*/
#include <stdio.h>
#include <stdlib.h>

int menu() {
    int action;
   printf("Select an action below\n");
   printf("1. Add a new patron\n");
   printf("2. View all patron\n");
   printf("3. View all books\n");
   printf("4. Add new book\n");
   printf("Your action:");
   scanf("%d",&action);
   if(action < 1 || action > 4) {
    printf("invalid action. Try again\n");
   }
   return action;
}

void execute_action(int action) {
    switch(action) {
    case 1:
        printf("1. Add a new patron\n");
        break;
    case 2:
        printf("List of all patrons\n");
        break;
    case 3:
        printf("List of all books\n");
        break;
    case 4:
        printf("Adding a new book\n");
        break;
    default:printf("invalid action.\n");
    }
}

int main()
{
    printf("\t County Library System\n");
    printf("Welcome Mr. Robert!\n");
    execute_action(menu());
    return 0;
}
