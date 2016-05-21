#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define BRWSR "chrome"
#define NBRWSR "iexplorer"

int main()
{
    char str[30];
    char browser[20];


    printf("-------------------------------\n");
    printf("|          WebsiteVisit       |\n");
    printf("|                             |\n");
    printf("|          by AlpeRoot        |\n");
    printf("|                             |\n");
    printf("-------------------------------\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Please enter the link you want to open : ");
    scanf("%s" , str);

    printf("\nPlease choose your web browser. Type chrome or iexplorer \n");
    scanf("%s" , browser);


    if(strcmp(browser, BRWSR) == 0) {
        ShellExecute(NULL,"open","C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe", str,NULL,SW_SHOWNORMAL); }

    if(strcmp(browser, NBRWSR) == 0) {
        ShellExecute(NULL,"open","C:\\Program Files\\Internet Explorer\\iexplore.exe", str,NULL,SW_SHOWNORMAL); }

/*
    Unused Chrome Direct Function

    ShellExecute(NULL,"open","C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe", str,NULL,SW_SHOWNORMAL);

*/
    return 0;

}
