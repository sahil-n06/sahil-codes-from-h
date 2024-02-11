#include <stdio.h>

int main() {
    int n, num;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number whose sum you want to see: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if (sum == num) {
                int check = 0;
                for (int k = 0; k < i; k++) {
                    if ((arr[k] == arr[i] && arr[k + 1] == arr[j]) || (arr[k] == arr[j] && arr[k + 1] == arr[i])) {
                        check = 1;
                        break;
                    }
                }
                if (!check) {
                    printf("[%d %d] ", arr[i], arr[j]);
                }
            }
        }
    }

    return 0;
}
