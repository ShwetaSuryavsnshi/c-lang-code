#include<stdio.h>
int Maximum(int ino1,int ino2)
{
    if (ino1>ino2)
    {
        return ino1;
    }
    else
    {
        return ino2;
    }
}
int main()
{
    auto int ivalue1;
    auto int ivalue2;
    auto int iRet;

    printf("Enter first number\n");
    scanf("%d",&ivalue1);

    printf("Enter second number\n");
    scanf("%d",&ivalue2);

    iRet=Maximum(ivalue1,ivalue2);

    printf("Largest number is %d\n",iRet);

    return 0;
}