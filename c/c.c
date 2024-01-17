//#include<stdio.h>
//int main(){
//    printf("jai shree ram");
//    return 0;
//}


// #include<stdio.h>
// int main(){
//     printf("hello\n");
//     int x;
//     x=18;
//     printf("%d",x);
//     printf("\n");
//     x=x+5;
//     printf("%d\n",x);
//     x=x-20;
//     printf("%d",x);
//     return 0;
// }


// #include<stdio.h>
// int x=18;
// int y=7;
// int main(){
//     printf("%d\n",x+y);
//     printf("%d",x*y);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     float x = 18;
//     float y = 7;
//     float z = x / y;
//     printf("%f",z);
//     return 0;
// }


// volume of a sphere:
// #include <stdio.h>
// int main(){
//     int r = 5;
//     float v = 4 * 3.14 * r * r * r / 3;
//     printf("The Volume is : %f",v);
//     return 0;
// }


//area of circle
// #include <stdio.h>
// int main(){
//     int r=4;
//     float a = 3.14 * r * r;
//     printf("The area of circle is %f",a);
//     return 0;
// }

//calculate prcentage of 5 subjects;
// #include <stdio.h>
// int main(){
//     float x1=92;
//     float x2=93;
//     float x3=90;
//     float x4=95;
//     float x5=99;
//     float percent=(x1 + x2 + x3 + x4 + x5)/5;
//     printf("%f",percent);
//     return 0;
// }

//write a program to find percentage of 5 subjects out of 40;
// #include <stdio.h>
// int main(){
//     float x1=35;
//     float x2=36;
//     float x3=30;
//     float x4=29;
//     float x5=39;
//     float percent=(x1 + x2 + x3 + x4 + x5)/200*100;
//     printf("%f",percent);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     float p = 10;
//     float r = 5;
//     float t = 2;
//     float si = (p * r * t)/100;
//     printf("sinple interset is %f",si);
//     return 0;
// }

// code of taking input-
// #include <stdio.h>
// int main(){
//     float radius;
//     printf("Enter the Radius : ");
//     scanf("%f",&radius);
//     float pi=3.14;
//     float area = pi * radius * radius;
//     printf("The area is: %f",area);
//     return 0;
// }


// sum of 2 numbers by taking input-
// #include<stdio.h>
// int main(){
//     float x;
//     printf("Enter the value of x: ");
//     scanf("%f",&x);
//     float y;
//     printf("Enter the value of y: ");
//     scanf("%f",&y);
//     float z = x + y;
//     printf("The sum is: %f",z);
//     return 0;
// }


//Take 2 integers a nad b and find the remainder when a is divisible by b-
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the Dividend:");
//     scanf("%d",&a);
//     printf("Enter the divisor:");
//     scanf("%d",&b);
//     int q = a/b;
//     int r = a - b*q;
//     printf("the Remainder when %d is divisible by %d is : %d",a,b,r);
//     return 0;
// }


//take integer as input and print half of it-
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the input: ");
//     scanf("%d",&x);
//     int y = x/2;
//     printf("Half of the  number is :%d",y);
    
//     return 0;
// }


//ascii value-
// #include<stdio.h>
// int main(){
//     char ch='E';
//     printf("%d",ch);
//     return 0;
// }


//check whether a number is even or odd-
// #include <stdio.h>
// int main(){
//     int x;
//     printf("Enter a number:");
//     scanf("%d",&x);
//     if(x%2==0){
//         printf("Even numer");
//     }
//     else{
//         printf("odd number");
//         return 0;
//     }
// }


//take an input and check it is divisible by 5 or not-
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number:");
//     scanf("%d",&x);
//     if(x==5){
//         printf("Number is divisible by 5");
//     }
//     else{
//         printf("Number is not divisible by 5");
//         return 0;
//     }
// }


//leap year or not-
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter any year:");
//     scanf("%d",&x);
//     if(x%400==0){
//         printf("%d is a leap year",x);
//     }
//     if((x%4==0) && (x%100!=0)){
//         printf("%d is a leap year",x);
//     }
//     else{
//         printf("%d is not a leap year",x);
//         return 0;
//     }
// }


//take integer value and print absolute value ot that number(if number is negative then print positive of that number)-
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     if(n<0){
//         n=n*(-1);
//     }
//     printf("The absolute number is : %d",n);
//     return 0;
// }


//
// #include<stdio.h>
// int main(){
//     int cp;
//     printf("The cost price of the product is: ");
//     scanf("%d",&cp);
//     int sp;
//     printf("The selling price of the product is: ");
//     scanf("%d",&sp);
//     int x=sp-cp;
    
//     if (sp>cp){
//         printf("There is a profit of rupees %d",x);
//     }
//     if(sp=cp){
//         printf("There is no loss and no profit");
//     }
//     else{
//         printf("There is a loss of rupees %d",x);
//         return 0;
//     }
    
// }


//given length and breadth of a rectangle write a program to fnd whetehr area of rectangle is greater then its perimeter-
// #include<stdio.h>
// int main(){
//     float l;
//     printf("The length of rectangle is :");
//     scanf("%f",&l);
//     float b;
//     printf("The breadth of rectangle is :");
//     scanf("%f",&b);
//     float perimeter;
//     perimeter = 2*(l+b);
//     printf("The perimeter is:%f\n",perimeter);
//     float area;
//     area=l * b;
//     printf("The area is %f\n",area);
//     if(area>perimeter){
//         printf("The area is greater then perimeter");
//     }
//     else{
//         printf("No The area is not greater than perimeter");
//         return 0;
//     }
// }

//take integer input and tell if it is divisible by 5 and 3 both-
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number:");
//     scanf("%d",&x);
//     if(x%5==0 || x%3==0){
//     printf("Yes divisible");
//     }
//     else{
//         printf("Not divisible");
//         return 0;
//     }
// }


//take 3 integers and print greatest of them-
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter value of x:");
//     scanf("%d",&x);
//     int y;
//     printf("Enter value of y:");
//     scanf("%d",&y);
//     int z;
//     printf("Enter value of z:");
//     scanf("%d",&z);
//     if(x>y && x>z){
//         printf("x is greater");
//     }
//     if(y>z && y>x){
//         printf("y is greater");
//     }
//     if(z>x && z>y){
//         printf("z is greater");
//         return 0;
//     }
//}


//take input percentage of a student and print grade according to marks-
//#include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the marks:");
//     scanf("%d",&x);
//     if(x>=91 && x<=100){
//         printf("Excellent");
//     }
//     else if(x>=81 && x<91){
//         printf("Very Good");
//     }
//     else if(x>=71 && x<81){
//         printf("Good");
//     }
//     else if(x>=61 && x<71){
//         printf("Can do better");
//     }
//     else if(x>=51 && x<61){
//         printf("Average");
//     }
//     else if(x>=40 && x<51){
//         printf("Average");
//     }
//     else if(x<40){
//         printf("Fail");
//         return 0;
//     }
// }


//Give a point (x,y) write a program to find out if it lies  on x-axis and y-axis or at origin-
// #include<stdio.h>
// int main(){
//     int x;
//     int y;
//     printf("Enter the coordinates:");
//     scanf("%d  %d",&x,&y);
//     if(x==0 && y==0){
//     printf("The point (%d,%d) lies on the origin",x,y);
//     }
//     else if(y==0){
//         printf("The point (%d,%d) lies on x-axis",x,y);
//     }
//     else if(x==0){
//         printf("The point lies on y-axis");
//     }
//     else{
//         printf("The poitn (%d,%d) does nor lie on any axis and neither origin",x,y);
//         return 0;
//     }
// }


// #include<stdio.h>
// int main(){
//     for (int i=1;i<=5;i=i+2){
//         printf("AK\n");
//     }
// }


//print numbers from 1 to 50-
// #include<stdio.h>
// int main(){
//     for(int x=1;x<=50;x=x+1){
//         printf("%d  ",x);
//     }
//     return 0;
// }


//print all even numbers from 1 to 100-
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i=i+1){
//         if(i%2==0){
//             printf("%d  ",i);
//         }

//     }
//     return 0;
// }


//print all odd numbers from 1 to 100-
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i=i+1){
//         if(i%2!=0){
//             printf("%d  ",i);
//         }

//     }
//     return 0;
// }


//print table of 19-
// #include<stdio.h>
// int main(){
//     for(int i=19;i<=190;i=i+19){
//         printf("%d ",i);
//     }
//     return 0;
// }


//print table of n here n is an input which is input by user
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Multiplication Table for %d:\n", n);
//     for (int i = 1; i <= 10; ++i) {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }

//     return 0;
// }


//print table of n here n is an integer which user will input-
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i=i+1){
//         printf("%d ",a);
//         a=a+3;
//     }
//     return 0;
// }

 

 //display this GP-1,2,4,8,16,32 upto n terms-
//  #include<stdio.h>
//  int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i=i+1){
//         printf("%d ",a);
//         a=2*a;
//     }
//     return 0;
//  }


 //Display this AP-100,97,94 upto all positive terms-
//  #include<stdio.h>
//  int main(){
//     // int n;
//     // printf("Enter a number:");
//     // scanf("%d",&n);
//     int a = 100;
//     for(int i=1;a>0;i=i+1){
//         printf("%d ",a);
//         a=a-3;
//     }
//  }


//wrte a program to check if a number is prime or not-
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n-1;i=i+1){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        printf("The number is prime");
    }
    else{
        printf("The number is composite");
    }
    return 0;
}