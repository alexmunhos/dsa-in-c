#include <stdio.h>

struct myStruct {
    int myNum;
    char myLetter;
};

int main() {
    struct myStruct s1;

    s1.myNum = 123;
    s1.myLetter = 'A';

    printf("myNum: %d\n", s1.myNum);
    printf("myLetter: %c", s1.myLetter);

    return 0;
}