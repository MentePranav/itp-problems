#include<stdio.h>

int main(){
    double calcarea(double length, double width)
    {
        return length * width;
    }
    double length, width, area;

    printf("enter length: ");
    scanf("%lf", &length);
    printf("enter width: ");
    scanf("%lf", &width);
    area = calcarea(length, width);
    printf("area is %lf", area);
    return 0;
}
