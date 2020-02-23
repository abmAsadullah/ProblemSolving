#include <stdio.h>

int main(){
    char ch;
    int r=0;
    while(scanf("%c", &ch) !=EOF){

        if(ch == '"')

        {
            r++;
            if(r%2==1) printf("``");
            else printf("''");
        }
        else printf("%c", ch);
    }
    return 0;
}
