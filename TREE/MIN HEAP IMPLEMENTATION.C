#include <stdio.h>
int main() {
    int heap[10], size = 0;
    int value, i;
    int n;
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for (int j = 0; j < n; j++) {
        scanf("%d", &value);

        heap[size] = value;
        i = size;
        size++;

       
        while (i > 0 && heap[(i - 1) / 2] > heap[i]) {
            int temp = heap[i];//3
            heap[i] = heap[(i - 1) / 2];
            heap[(i - 1) / 2] = temp;
            i = (i - 1) / 2;
            
        }
    }

    printf("Min Heap: ");
    for (int k = 0; k < size; k++)
        printf("%d ", heap[k]);

    return 0;
}
