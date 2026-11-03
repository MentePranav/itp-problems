#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++) {
        int count=0;
        int repeating=0;
        for (int j=0;j<i;j++) {
            if (a[j]==a[i]) {
                repeating = 1;
                break;
            }
        }
        if (repeating==1) {
            continue;
        }
        for (int j=0;j<n;j++) {
            if (a[j]==a[i]) {
                count++;
            }
        }
        printf("%d occurs %d times\n",count,repeating);
    }
}