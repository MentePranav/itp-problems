#include<stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d", &n);
    int i;
    int original =n;
    int digits[100];
    for(i=0;n>=1;i++) {
        digits[i]=n%10;
        n=n/10;
    }
    n = original;
    int count=0;
    for (i = 0; n>0; i++) {
        n=n/10;
        count++;
    }
    n=original;
    int powersum = 0;
    for(i=0;i<count;i++) {
        powersum =pow(digits[i], count)+powersum;

    }
    if (powersum == original) {
        printf("TRUE");
    }
    else {
        printf("FALSE");
    }
    return 0;
}

