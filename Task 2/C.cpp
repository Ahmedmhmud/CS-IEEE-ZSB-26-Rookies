#include <stdio.h>

int main() {
    int t;
    char s[101];
    scanf("%d", &t);
    int count;
    for(int j = 0; j < t; j++){
        count = 0;
        scanf("%s", s);
        for(int i = 0; s[i] != '\0'; i++)
            count ++;
        if(count > 10)
            printf("%c%d%c\n", s[0], count-2, s[count-1]);
        else
            printf("%s\n", s);

    }
}
