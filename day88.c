//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include<stdio.h>
int main() {
    enum Color {RED, YELLOW, GREEN};
    for (int i = RED; i <= GREEN; i++) {
        switch(i) {
            case RED:
                printf("RED=%d\n", RED);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", YELLOW);
                break;
            case GREEN:
                printf("GREEN=%d\n", GREEN);
                break;
        }
    }
    return 0;
}