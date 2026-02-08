#include <stdio.h>

int main() {
    char data;

    printf("Li-Fi PC Receiver\n");
    printf("Enter 1 or 0:\n");

    while (1) {
        scanf(" %c", &data);

        if (data == '1')
            printf("Light Detected : 1\n");
        else if (data == '0')
            printf("No Light : 0\n");
    }
    return 0;
}
