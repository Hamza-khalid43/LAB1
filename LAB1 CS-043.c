#include <stdio.h>
#include <stdlib.h>

//QUESTION 1

int main() {
   int ID;
   printf("enter your id:");
   scanf("%d",&ID);
   printf("ID is %d\n",ID);
   int workh;
   printf("enter your work hour:");
   scanf("%d",&workh);
   printf("hour is:%d\n",workh);
   float amount;
   printf("enter your amount per hour:","\n");
   scanf("%f",&amount);
   printf("amount is: %.2f\n",workh*amount);
   return 0;
}


//QUESTION 2
       int height,width;
       printf("enter height\n");
       scanf("%d",&height);
       printf("Enter width\n");
       scanf("%d",&width);
       int area,perimeter;
       printf("Area:%d\n",height*width);
       printf("Perimeter:%d\n",2*(height+width));

//QUESTION 3

void height() {
   int h;
   printf("enter your height:");
   scanf("%d",&h);
   if (h<150) {
       printf("dwarf");
   }else if (h==150) {
       printf("average");
   }else if (h<=165) {
       printf("tall");
   }
}
int main() {
   height();
   return 0;
}



//Q4 Write a c program to convert decimal to binary using functions.
void decimaltobinary(int n){
           if (n>0){
            decimaltobinary(n/2);
            printf("%d",n%2);
 }          }
int main()
{
       int decimalnumber;
       printf("Enter number:");
       scanf("%d",&decimalnumber);
       if (decimalnumber==0){
        printf("Binary:0\n");
       }else{
           printf("Binary:");
           decimaltobinary(decimalnumber);
            printf("\n");
       }



//QUESTION 5

#include <stdio.h>

int fibonacci(int x) {
    if (x > 1) {
        return fibonacci(x - 1) + fibonacci(x - 2);
    } else if (x == 0) {
        return 0;
    } else if (x == 1) {
        return 1;
    }
}
void printFibonacciSeries(int n, int current) {
    if (current < n) {
        printf("%d\n", fibonacci(current));
        printFibonacciSeries(n, current + 1);
    }
}

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error");
    } else {
        printFibonacciSeries(num, 0);
    }
    return 0;
}



//task 1

void function() {
   int number;
   printf("enter any number: ");
   scanf("%d",&number);
   if (number % 2 ==0) {
       printf("even");
   } else {
       printf("odd");
   }
}
int main() {
   function();
   return 0;
}


//task 2

void value() {
    int num1;
    printf("enter 1st num \n");
    scanf("%d",&num1);
    int num2;
    printf("enter 2nd num \n");
    scanf("%d",&num2);
    if (num1>5 && num2>5) {
        int num=num1+num2;
        printf("the value is %d\n",num);

    }else if (num1>5 || num2>5) {
        int num=(num1*num2);
        printf("the value is %d\n",num);
    }else if (num1<5 && num2<5) {
        int num1=num1+1;
        int num2=num2+1;
        printf("the values are %d\n",num1,"and",num2);

    }else {
        printf("hello world");
    }
}
int main() {
    value();
    return 0;
}


//task 3

void positive(int num,int i) {
    if (i<=10) {
        if (num>0) {
                printf("%d * %d = %d\n",num,i,num*i);
                positive(num,i+1);
        }else {
            printf("error");
        }
    }
}
int main() {
    int i=1;
    int num1,num2;
    printf("enter 1st number:");
    scanf("%d",&num1);
    printf("enter 2nd number:");
    scanf("%d",&num2);
    positive(num1,i);
    positive(num2,i);
    return 0;
}






