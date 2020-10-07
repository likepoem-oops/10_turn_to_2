#include <stdio.h>

int main() {
    int num = 0;
    int i = 1;
    int n = 0;
    printf("请输入10进制数字:");
    scanf("%d",&num);

    while (1){
        int yu = num % 2;
        n = yu*i + n;
        i = i * 10;
        printf("%d ",yu);
        num = num / 2;
        if(num < 2){
            printf("%d ",num);
            n = num*i + n;

            break;
        }
    }
    printf("\n");
    printf("%d",n);
    return 0;
}
