// 9063.c

#include <stdio.h>

int main(){
    int left, right, top, bottom, n, x, y;
    
    scanf("%d", &n);
    scanf("%d %d", &x, &y);
    left = x;
    right = x;
    top = y;
    bottom = y;
    
    for(int i = 0; i < n - 1; i++){
        scanf("%d %d", &x, &y);
        if(x < left) left = x;
        if(x > right) right = x;
        if(y < bottom) bottom = y;
        if(y > top) top = y;
    }
    
    printf("%d", (right - left) * (top - bottom));
    
    return 0;
}