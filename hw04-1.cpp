/*
    จงแสดงผลตัวแปรทั้งหมดเรียงลำดับดังนี้ a b c d

    Output:
        10 20.0 Haha a


int a = 10;
float b = 20;
char c[] = "Haha";
char d = 'a';
printf("_ _ _ _", _, _, _, _); // TODO: #10 Display variable a, b, c and d.
*/
#include <stdio.h>
int main() {
    int a = 10;
    float b = 20;
    char c[] = "Haha";
    char d = 'a';
    printf("%d %.1f %s %c", a, b, c, d);
    return 0;
}