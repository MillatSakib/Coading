
include <stdio.h>
int add(int a,int b){
int result;
result=a+b;
printf("The result is %d+%d=%d",a,b,result);
}

int subtract(int a,int b){
int result;
result=a-b;
printf("The result is %d-%d=%d",a,b,result);
}
int multiply(int a,int b){
int result;
result=a*b;
printf("The result is %d*%d=%d",a,b,result);
}
int divide(int a,int b){
int result;
result=a/b;
printf("The result is %d/%d=%d",a,b,result);
}
int main(){
   int a,b;
   char c;
   printf("Please enter an arithmatic expression: ");
    scanf("%d %c %d",&a,&c,&b);
    if(c=='+'){
       add(a,b);
    }
        else if(c=='-'){
        subtract(a,b);
    }
     else if(c=='*'){
        multiply(a,b);
    }
     else if(c=='/'){
        add(a,b);
    }
    return 0;
}
