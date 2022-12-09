#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define note "Please Enter the valid operation seing the Operation List"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void sine();
void cose();
void tane();
int main(){
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int choice;
    printf("\n******* Press 0 to quit the program ********\n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6 for Power \n");
    printf("Enter 7 for Factorial \n");
    printf("Enter 8  for square \n");
    printf("Enter 9  for cube \n");
    printf("Enter 10 for squareroot\n");
    printf("Enter 11 for Sine\n");
    printf("Enter 12 for Cose\n");
    printf("Enter 13 for Tane\n\n");

    while(1){
    printf("\n\nEnter the operation you want to do: ");

    scanf("%d",&choice);
    printf("\n");

    switch(choice)
    {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    modulus();
                    break;
                case 6:
                    power();
                    break;
                case 7:
                    factorial();
                    break;
                case 8:
                    square();
                    break;
                case 9:
                    cube();
                    break;
                case 10:
                    squareroot();
                    break;
                case 11:
                    sine();
                    break;
                case 12:
                    cose();
                    break;
                case 13:
                     tane();
                     break;
                case 0:
                    exit(0);
                default:
                    printf("\n%s\n",note);
        }

    }
    return 0;
}

void addition(){
    int n;
    double x,sum=0;
    printf("You want to How many Numbre Summation:  ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("%dth Number :",i);
        scanf("%d",&x);
        sum+=x;
    }
    printf("Total Number of Summation is %.3lf\n",sum);
}
void subtraction(){
    int n;
    double x,sub=0;
    printf("You want to How many Number Subtraction: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("%dth Number :",i);
        scanf("%lf",&x);
        sub-=x;
    }
    printf("Total Number of Subtraction is %.3lf\n",sub);
}
void multiplication(){
    int n;
    double x,mul=1;
    printf("You want to How many Numbre Multiplication:  ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("%dth Number :",i);
        scanf("%lf",&x);
        mul*=x;
    }
    printf("Total Number of Multiplication is %.3lf\n",mul);
}
void division(){
    double x,y,division;
    printf("Enter the 1st Number ");
    scanf("%lf",&x);
    printf("Enter the 2nd Number ");
    scanf("%lf",&y);
    division=x/y;
    printf("Tow Number of Division is %.3lf\n",division);
}
void modulus(){
    printf("Enter the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void factorial(){
    int n,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
}
void power(){
    double b;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&b,&p);
    double e=pow(b,p);
    printf("The power is %lf",e);
}
void square(){
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
}
void cube(){
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}
void squareroot(){
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    double s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
}
void sine(){
    double calculation,x;
    printf("Enter the number is ");
    scanf("%lf",&x);
    calculation=sin(x);
    printf("sin value is the %.3lf",calculation);
}
void cose(){
    double calculation,x;
    printf("Enter the number is ");
    scanf("%lf",&x);
    calculation=cos(x);
    printf("Cos value is the %.3lf",calculation);
}
void tane(){
    double calculation,x;
    printf("Enter the number is ");
    scanf("%lf",&x);
    calculation=tan(x);
    printf("Tan value is the %.3lf",calculation);
}
