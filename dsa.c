/*#include<stdio.h>
void add(int *a,int *b,int *c,int *d){
     int real= *a + *b ;
     int im= *c+ *d;
     printf("%d %di",real,im);
}

void sub(int *a,int *b,int *c,int *d){
     int real= *a - *b ;
     int im= *c - *d;
     printf("%d %di",real,im);
}

void mul(int *a,int *b,int *c,int *d){
     int real= *a* *c - *b* *d ;
     int im= *b + *c + *d + *a;
     printf("%d %di",real,im);
}










int main(){
    int r1,r2,i1,i2;
    int n;
    printf("Enter n1");
    scanf("%d %d",&r1,&i1);
    printf("Enter n2");
    scanf("%d %d",&r2,&i2);
    printf("Enter 1.Addition\n 2.Subtraction\n 3.Multiplication\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        add(&r1,&r2,&i1,&i2);
        break;

        case 2:
        sub(&r1,&r2,&i1,&i2);
        break;
    
        case 3:
        mul(&r1,&r2,&i1,&i2);
        break;

        default:
        printf("Check your input");
    }
}
*/


#include<stdio.h>
int fact(int *a){
int b =1;
    if(*a=0){
        return 1;
    }
    else{
        for(int i=1;i<=*a;i++){
        b=b*i;
        }
        return b;
    }
}

int pow(int *x,int *y){
int b=1;
for(int i=1;i<=*y;i++){
    b=b* *x;
}
return b;
    
}




int main(){
int n;
int a;
int b;
int c;
printf("1.Factorial\n2.Power\n3.Compute\n");
scanf("%d",&n);
switch(n){
    case 1:
    scanf("%d",&a);
    c=fact(&n);
    printf(c);
    break;

    case 2:
    scanf("%d %d",&a,&b);
    c=pow(a,b);
    printf(c);
    break;
}
}
