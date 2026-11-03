#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++) {
        int repeated =0;
        for (int j=0;j<i;j++) {
            if (a[j]==a[i]) {
                repeated =1;
                break;
            }
        }
        if (repeated ==0) {
            int count=0;
            for ( int j=0;j<n;j++) {
                if (a[i]==a[j]) {
                    count++;
                }
            }
            printf("%d is repeated %d times\n", a[i], count);

        }
    }
    return 0;
}
