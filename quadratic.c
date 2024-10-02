/*  Program:Evaluating the quadratic equation
    Author:Niby Vijayan
    Date:02-10-2024
    Input:coefficients entered by the user
    Output:roots of quadratic quation
*/
#include<stdio.h>
#include<math.h>
void evaluatingQuadraticEquation(float a,float b,float c);
void main()
{
    float a,b,c;
    printf("enter the coefficient of x^2: ");
    scanf("%f",&a);
    printf("enter the coefficient of x: ");
    scanf("%f",&b);
    printf("enter the coefficient of constant term: ");
    scanf("%f",&c);
    evaluatingQuadraticEquation(a,b,c);
}
// function for evaluating quadratic equation
void evaluatingQuadraticEquation(float a,float b,float c)
{
    float res,resOne,resTwo,rootOne,rootTwo,realPart,imaginaryPart;
    res=(b*b)-(4*a*c);  //calculating the discriminant
    if(res>0)   //checking if discriminant>0,so there are two real roots
    {
        resOne=sqrt(res);   
        rootOne=((-b)+resOne)/(2*a);
        rootTwo=((-b)-resOne)/(2*a);
        printf("the roots are %.2f and %.2f ",rootOne,rootTwo);
    }
    else if(res==0)     //checking if discriminant=0,such that there is only one repeated real root
    {
        rootOne=(-b)/(2*a);
        printf("root1=root2=%.2f ",rootOne);
    }
    else    //complex roots
    {   
        resTwo=sqrt(-res);
        float realPart=(-b)/(2*a);
        float imaginaryPart=resTwo/(2*a);
        printf("the root one is %.2f + %.2fi\n",realPart,imaginaryPart);
        printf("the root two is %.2f - %.2fi",realPart,imaginaryPart);
    }
}