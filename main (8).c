/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int find_lcm(int ,int);
int main()
{
    int a,b,lcm;
    printf("input values for a and b");
    scanf("%d%d",&a,&b);
    lcm=find_lcm(a,b);
    printf("lcm of %d and %d is:%d",a,b,lcm);
    return 0;
}
int find_lcm(int a,int b)
{
    static int temp=1;
    if(temp%a==0 && temp%b==0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}