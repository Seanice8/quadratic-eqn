#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int function(int a, int b, int c) {
    int d =b*b - (4*a*c);
    return d;
}





int main()

{
    int a,b,c;
    printf("enter a, b and c \n");
    scanf("%d %d %d", &a,&b,&c);

    int discriminant = function(a,b,c);
    if(a!=0){
        if(discriminant>0){
        float x1,x2;
        x1 = (-b + sqrt(discriminant))/2*a;
        x2 = (-b - sqrt(discriminant))/2*a;

        printf("x1 = %.2f \n x2 = %.2f",x1,x2);
        }
        else if(discriminant==0){
            float x =(-b)/2*a;
            printf("the root is %f",x);
        }
        else{
            printf("Roots are complex");
        }
}    else{
        printf("Enter a number for a");
    }

    return 0;
}
