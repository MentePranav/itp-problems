
    #include <stdio.h>
    int maxArr(int a[], int n) {
        int max=a[0];
        for (int i=0;i<n;i++){
            if (a[i]>=max) {
                max=a[i];
            }
        }
        return max;
    }
    int main() {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }
        int maxx = maxArr(a,n);
        printf("%d",maxx);
    }
