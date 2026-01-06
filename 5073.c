// 5073.c

#include <stdio.h>

int main(){
    int a, b, c;
    while(1){
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) break;
        else if ((a + b) <= c || (b + c) <= a || (c + a) <= b){
            printf("Invalid");
            continue;
        }
        else if (a == b || b == c || c || a){
            if (a == b && b == c) printf("Equuilateral");
            else printf("Isosceles");
            continue;
        }
        else printf("Scalene");
    }
    return 0;
}