#include <stdio.h>

int cnt,n;


int partition(int list[], int left, int right) {
    int pivot, temp;
    int low, high;
    low = left;
    high = right + 1;
    pivot = list[left];
    do {
        do {
            low++;
        } while (pivot < list[low]);
        do {
            high--;
        } while (pivot > list[high]);
        if (low < high) {
            temp = list[low];
            list[low] = list[high];
            list[high] = temp;
        }
    } while (low < high);
    temp = list[high];
    list[high] = list[left];
    list[left] = temp;
    return high;
}

void quicksort(int list[], int left, int right) {
    int q;
    if (left < right) {
        cnt++;
        q = partition(list, left, right);
        printf("%d단계 : ",cnt);
        for(int i=0; i<n; i++){
            printf("%d",list[i]);
        }
        printf("\n");
        quicksort(list, left, q - 1); // 왼쪽 리스트의 left, right 지정
        quicksort(list, q + 1, right); // 오른쪽 리스트의 left, right 지정
    }
}

int main() {
    int list[65];
    int i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        scanf("%d",&list[i]);
    }
    quicksort(list,0,n-1);
    return 0;
}