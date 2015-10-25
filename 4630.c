#include<stdio.h>
#include<math.h>
double area (double T[3][2])
{
    double p,s,a,b,c;
    a=sqrt(pow(T[0][0]-T[1][0],2)+pow(T[0][1]-T[1][1],2));
    b=sqrt(pow(T[0][0]-T[2][0],2)+pow(T[0][1]-T[2][1],2));
    c=sqrt(pow(T[2][0]-T[1][0],2)+pow(T[2][1]-T[1][1],2));
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
