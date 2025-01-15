#include <stdio.h>
int findLargest(int a, int b) {
    if (a == b) {
        return a; 
    } else if (a > b) {
        return findLargest(a, b + 1); 
    } else {
        return findLargest(a + 1, b); 
    }
}

int main() {
    int num1, num2, largest;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    largest = findLargest(num1, num2);

    printf("The largest number is: %d\n", largest);

    return 0;
}