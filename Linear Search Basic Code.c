#include <stdio.h>

int main() {
    int i, value, position = -1; 
    int arr[] = {10, 20, 30, 40, 50};
    printf("Enter the value that you want to search: ");
    scanf("%d", &value);

    for (i = 0; i < 5; i++) {
        if (value == arr[i]) {
            position = i + 1;
            break;
        }
    }
    
    if (position == -1) {
        printf("Not Found");
    } else {
        printf("The value (%d) is found and the position is: %d", value,position);
    }

    return 0;
}
