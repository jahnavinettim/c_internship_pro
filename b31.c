#include<string.h>
void main(){}


void fun()
{
int number[30];
int i,j,a,n,counter,ave;
puts("\n enter values of Number\n");
scanf("%d",&number);
puts("\n enter number\n");
for (i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
    if(number [i]<number[j])
    {
        a=number[i];
        number[i]=number[j];
        number[j]=a;
    }
}
}
printf("\n number in descending order ");
for(i=0;i<n;i++)
{
    printf("\n second largest number %d",1);
    printf("\n second smallest number %d",(n-1));
}

}
