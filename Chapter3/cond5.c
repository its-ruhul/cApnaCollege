#include<stdio.h>

int main() {

    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z') {
        printf("LOWERCASE \n");
    }
    else if(ch >= 'A' && ch <= 'Z') {
        printf("UPPERCASE \n");
    }
    else {
        printf("Not English letter. \n");
    }

    return 0;
}