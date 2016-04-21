#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    char str[20];
    char browser;

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

    ShellExecute(NULL,"open","C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe", str,NULL,SW_SHOWNORMAL);


/*    printf("\nPlease choose your web browser. Type chrome or iexplorer \n");
    scanf("%s" , browser);

    if(browser == 'chrome') {
        ShellExecute(NULL,"open","C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe", str,NULL,SW_SHOWNORMAL); }

    if(browser == 'iexplorer') {
        ShellExecute(NULL,"open","C:\\Program Files\\Internet Explorer\\iexplore.exe", str,NULL,SW_SHOWNORMAL); }

----------------------------------------------------------------------------------------------------------------------------------

    if (strcmp(browser, "chrome") == 0) {
        ShellExecute(NULL,"open","C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe", str,NULL,SW_SHOWNORMAL); }

    if (strcmp(browser, "iexplorer") == 0) {
        ShellExecute(NULL,"open","C:\\Program Files\\Internet Explorer\\iexplore.exe", str,NULL,SW_SHOWNORMAL); }

 */
    return 0;

}
