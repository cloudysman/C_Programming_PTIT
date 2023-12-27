#include <stdio.h>
#include <string.h>

int main() {
    char number[10];
    scanf("%s", number);
    int length = strlen(number);
    
    if (length > 1) {
        char temp = number[0];
        number[0] = number[length - 1];
        number[length - 1] = temp;
        
        if (number[0] == '0') {
            for (int i = 0; i < length; i++) {
                number[i] = number[i + 1];
            }
        }
    }
    
    printf("%s\n", number);
    return 0;
}

