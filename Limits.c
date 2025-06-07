#include<stdio.h>

int main() {
    int limit, sum = 0, input[100];
    printf("Enter limit: ");
    scanf("%d", &limit);
    int i = 1;
    do {
        printf("Integer #%d: ", i);
        scanf("%d", &input[i]);
        sum+=input[i];
        i++;

        if (sum % limit == 0) {
            printf("Congratulations!");
        } else if (sum > limit) {
            printf("Sorry, you exceeded the limit.");
        }

    } while (sum < limit);


return 0;
}
