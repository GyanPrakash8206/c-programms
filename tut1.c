// #include <stdio.h>

// void main()
// {
//     printf("Gyan Prakash\nCSE F\nSRM Institute Of Science & Technology\n");
// }
//                              ****CODE FOR 2 INTEGER INPUT AND THEIR SUM AS OUTPUT*******
// #include <stdio.h>
//  int main() 
// { 
// int testInteger; 
// int a,b,c;

// printf("Enter 1st integer: "); 
// scanf("%d", &a); 
// printf("Enter 2nd integer: "); 
// scanf("%d", &b);
// c=a+b;


// printf("Sum = %d",c);
//  return 0;
//  } 
//                                                      ****** CODE FOR INPUT 5  NOS*****
// #include <stdio.h>
//  int main() 
// { 

//     int a,b,c,d,e,f;

//     printf("Enter 1st integer: "); 
//     scanf("%d", &a);
//     printf("Enter 2nd integer: "); 
//     scanf("%d", &b);
//     printf("Enter 3rd integer: "); 
//     scanf("%d", &c);
//     printf("Enter 4th integer: "); 
//     scanf("%d", &d);
//     printf("Enter 5th integer: "); 
//     scanf("%d", &e); 
//     f=(a+b+c+d+e)/5;


//     printf("Average of 5 nos is = %d",f);
//     return 0;
//  }
//                                                 *************code of area of rectangle************* 
// #include <stdio.h>

//  int main() 
// {   

//     int a,b,c;

//     printf("Enter LENGTH: "); 
//     scanf("%d", &a); 
//     printf("Enter WIDTH: "); 
//     scanf("%d", &b);
//     c=a*b;


//     printf("Area of rectangle = %d",c);
//     return 0;
//   } 
//                                               **********code of area of square*************
// #include <stdio.h>

//  int main() 
// {   

//     float a,c;

//     printf("Enter length of side of square: "); 
//     scanf("%f", &a); 
     
    
//     c=a*a;


//     printf("Area of square = %f",c);
//     return 0;
//  } 
//                                                  ***********code for +ve or - ve int comaprison************
/*#include<stdio.h>
int main()
{
    int a;
    printf("Enter a no=");
    scanf("%d",&a);
    if(a==0)
    {
        printf(" The number is neither +ve nor -ve");
    }
    if (a<0)
    {
        printf(" The -ve number is = %d",a);
    }
    else{
        printf("The number is +ve ",a);
    }
    return 0;
}*/
//                                                    *******************code for comparing greatest no b/w 2*********************
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter the 1st no= ");
//     scanf("%d",&a);
//     printf("Enter the 2nd no= ");
//     scanf("%d",&b);
//     if(a==b)
//     {
//         printf("Both equal");
//     }
//     else if (a>b)
//     {
//         printf(" The greater number is = %d",a);
//     }
//     else{
//         printf("The greater number is =%d ",b);
//     }
//     return 0;
// }
//                                **************code for finding greatest no of 3 input nos*****************
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter the 1st no= ");
//     scanf("%d",&a);
//     printf("Enter the 2nd no= ");
//     scanf("%d",&b);
//     printf("Enter the 3rd no= ");
//     scanf("%d",&c);
//     if((a==b)&&(a==c)&&(b==c))
//     {
//         printf("The nos are equal");
//     }
//     else if((a>b)&&(a>c))
//     {
//         printf("The greatest no is= %d ",a);
//     }
//     else if((b>c)&&(b>a))
//     {
//         printf(" The greater number is = %d",b);
//     }
//     else{
//         printf("The greater number is = %d",c);
//     }
//     return 0;

// }


// }                            *************** code to calculate the area of circle************************
// #include <stdio.h>
// int main()
// {
//     float a,b;
//     printf("Enter the radius of the circle = ");
//     scanf("%f",&a);

//     b= 3.14*(a*a);

//     printf("The area of circle is = %f",b);
//     return 0;
// }
//                                                ******code to dispaly char****************
// #include<stdio.h>
// int main()
// {
//     char a='5';
//     // printf (" Enter a cahracter = ");
//     // scanf("%c",&a);
//     printf("The cahracter entered was = %c",a);
//     return 0;
// }
// 
//                                *********write a c program to calculate the area of triangle********
// #include<stdio.h>
// int main()
// {
//     float a,b,c;
//     printf("Enter base = ");
//     scanf("%f",&a);
//     printf("Enter height = ");
//     scanf("%f",&b);

//     c=0.5*a*b;
//     printf("The area of triangle is = %f",c);
//     return 0;
//  }
/* Flow chart 
        start 
        initialise a,b,c 
        input a,b
        caluculate c=0.5*a*b
        print area of triangle
        end
*/
//************************code to show volume of box********************
// #include<stdio.h>
// int main()
// { 
//     float a,b,c,d;
//     printf("Enter length  of cube = ");
//     scanf("%f",&a);
//     printf("Enter height  of cube = ");
//     scanf("%f",&b);
//     printf("Enter base  of cube = ");
//     scanf("%f",&c);
//     d=a*b*c;
//     printf("The volume of cube is = %f",d);
//     return 0;
// }
//*****code for area ofcube************
// #include<stdio.h>
// int main()
// { 
//     float a,b;
//     printf("Enter side  of cube = ");
//     scanf("%f",&a);
//     b=a*a*a;
//     printf("The volume of cube is = %f",b);
//     return 0;
// }
//*************code for volume of cylinder*******************
// #include<stdio.h>
// int main()
// { 
//     float r,h,v;
//     printf("Enter radius of cylinder = ");
//     scanf("%f",&r);
//     printf("Enter height of cylinder = ");
//     scanf("%f",&h);
//     v=r*r*h*3.14;
//     printf("The Volume of cylinder is = %f",v);
//     return 0;
// }
//                                    ******************** code for quadratic equation ********************* 
// #include<stdio.h>
// #include <math.h>
// int main()
// {
//     int a,b,c,d,x,z;
//     printf("Enter 1st digit= ");
//     scanf("%d",&a);
//     printf("Enter 2nd digit= ");
//     scanf("%d",&b);
//     printf("Enter 3rd digit= ");
//     scanf("%d",&c);
//     d=sqrt ((b*b)-(4*a*c));
//     if (d>0)
//     {
//         printf("The roots are real and unequal");
//         x=(-b+d)/2*a;
//         z=(-b-d)/2*a;
//         printf("\n The roots of the equation are = %d,%d",x,z);
//     }
//     else if(d<0)
//     {
//         printf("The roots are unequal and imaginary");

//     }
    
    

//     else if(d==0)
//     {
//         printf("The roots are equal and real");
//         x=(-b+d)/2*a;
//         z=(-b-d)/2*a;
//         printf("\n The roots of the equation are = %d,%d",x,z);
//     }
    
//     return 0;

// }
// **************code to check the number is odd or even, if number is even then display the number and print odd id odd**************
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number = ");
//     scanf("%d",&a);
//     if (a%2==0)
//     {
//         printf("The number is even = %d",a);
//     }
//     else {printf("The number is odd");}
//     return 0;

// }
// *** ***************check if teh number is divisible by 5 & 11 or not****** ****************
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number = ");
//     scanf("%d",&a);
//     if(a%5==0 && a%11==0)
//     {
//         printf("Yes the number is divisible by 5 & 11");
//     }
//     else{
//         printf("The number is not divisible by 5 & 11");

//     }
//     return 0;
// }    




// #include <stdio.h>
// int main()
// {
//    float a;
//    double b;
//    long double c;
//    printf("%d\t",sizeof(a));
//    printf("%d\t",sizeof(b));
//    printf("%d\t",sizeof(c));

   
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i =1,sum=0;
//     while(i<=10)
//     {
//         sum=sum + i;
//         i++;
     
//     }
//        printf("Sum of ten number is = %d",sum);
//      return 0;
// }
// #include<stdio.h>
// int main(){
//     float a;
//     printf("Enter the teperature = ");
//     scanf("%f",&a);
//     if (a<0)
//     {
//         printf("Freezing Weather");
//     }
//     else if ((a>=0)&&(a<=10))
//     {
//         printf("Very cold weather");
//     }
//     else if ((a>10)&&(a<=20))
//     {
//         printf("Cold weather");
//     }
//     else if ((a>20)&&(a<=30))
//     {
//         printf("Normal  weather");
//     }
//     else if ((a>30)&&(a<=40))
//     {
//         printf("Hot weather");
//     }
//     else 
//     {
//         printf("Very Hot weather");
//     }
//      return 0;
// }
// ********************************code for ascending****************
// #include<stdio.h>
// void main()
// {
//     int i,j,a,n, number[30];
//     printf("Enter the value of N\n");
//     scanf("%d",&n);
//     printf("Enter the numbers\n");
//     for (i=0;i<n;i++)
//     scanf("%d\n",&number[i]);
//     for (i=0;i<n;i++)
//     {
//         for (j=i+1;j<n;j++)
//         {
//             if(number[i]>number[j])
//             {
//                 a=number[i];
//                 number[i]=number[j];
//                 number[j]=a;
//             }
//         }
//     }printf("The numbers arranged in ascending order\n ");
// for(i=0;i<n;i++)
// printf("%d\n",number[i]);

// }    
// #include<stdio.h>
// void main()
// {
//     int i;
    
//     printf("Enter the size of array\n");
//     scanf(" %c",&i);
//     char ch[10];
//     printf("Enter the array elements\n");
//      scanf(" %c",&ch[10]);
    
//     for (i=0;i<10;i++)
//     {
//        printf(" The elements of the array are = %c\n",ch[10]);
//     }
// }
//                                        **********************************code for string***************************************
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[50],str2[50];
//     printf("Enter your message = ");
//     gets(str1);
//     strcpy(str2,str1);
//     strrev(str1);
//     printf("The copy string is = %s\n  ",str2);
//     printf("The reverse string is = %s\n  ",str1);
//     printf("%d",strlen(str1));
    
//      return 0;
// }
// ********************code for pallindrome

// #include <stdio.h>
// int main() {
//     int n, reversedN = 0, remainder, originalN;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     originalN = n;

//     // reversed integer is stored in reversedN
//     while (n != 0) {
//         remainder = n % 10;
//         reversedN = reversedN * 10 + remainder;
//         n /= 10;
//     }

//     // palindrome if orignalN and reversedN are equal
//     if (originalN == reversedN)
//         printf("%d is a palindrome.", originalN);
//     else
//         printf("%d is not a palindrome.", originalN);

//     return 0;
// }
// **************function calling**********************
// #include<stdio.h>
// void xyz(float a, float b)
// {
//     float p,ar;
//     p=2*(a+b);
//     ar=a*b;
//     printf("Perimeter is %f\n Area is %f\n",p,ar);
// }
// void main()
// {
//     float ar,p;
//     printf("Enter the sides = ");
//     scanf("%f\n %f",&p,&ar);
//     xyz(ar,p);

// }
//                                                               ********************* code for factorial of number**********************
// #include<stdio.h>
//  int fact(int);
 
// void main()
// {
//  int no,factorial;
 
//   	printf("Enter a number to calculate it's factorial\n");
//   	scanf("%d",&no);
//   	factorial=fact(no);
//     printf("Factorial of the num(%d) = %d\n",no,factorial);

// }
//   int fact(int n)
// {
//     int i,f=1;
//     for(i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//     return f;
// }
// 
//                                              *************************code for swapping numbers***************************
// #include<stdio.h>

// void main()
// {
//     int a,b,x;
    
//     printf("Enter the 1st number = ");
//     scanf("%d", &a);
//     printf("Enter the 2nd  number = ");
//     scanf("%d", &b);
    

    
    
//     x=a;
//     a=b;
//     b=x;
    
//     printf("\nThe value of a after swapping is = %d", a);
//     printf("\nThe value of b after swapping is = %d", b);




// }

//                            *****************************code for function calling*********************
// 
// 
#include<stdio.h>
int average(int a, int b)
{
    int avg;
    avg=(a+b)/2;
    printf("The avg of two numbers is = %d ",avg);
}

int sum(int a, int b)
{
    int sum;
    sum=a+b;
    printf("The sum of two numbers is = %d ",sum);
}
int main()
{
    int a,b,c;
    printf("Enter the two numbers for sum = ");
    scanf("%d",&a);
     scanf("%d",&b);

    sum(a,b);
    average(a,b);
    
     return 0;
}
