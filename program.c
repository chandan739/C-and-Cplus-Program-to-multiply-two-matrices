#include<stdio.h>
int main()
{
  int r1,c1,r2,c2,sum=0;
  int a[50][50],b[50][50],c[50][50],i,j,k;
  printf("enter the size of rows and column of the matrix a:\n");
  scanf("%d %d",&r1,&c1);
  printf("enter the size of rows and column of the matrix b:\n");
  scanf("%d %d",&r2,&c2);

  //read the matrix a
    printf("enter the matrix a:\n");
for(i=0;i<r1;i++)
  for(j=0;j<c1;j++)
    scanf("%d",&a[i][j]);
//read the matrix b
  printf("enter the matrix b:\n");
if(c1==r2)
{
for(i=0;i<r2;i++)
  for(j=0;j<c2;j++)
    scanf("%d",&b[i][j]);
//for resultant matrix
for(i=0;i<r1;i++)
{
  for(j=0;j<c2;j++)
  {
    for(k=0;k<r2;k++)//(or)for(k=0;k<c1;k++)--ex:-r1(2)*c1(3)=r2(3)*c2(1)--the row of matrix a is equal to column of matrix b
    {
      sum=sum+a[i][k]*b[k][j];
    }
    c[i][j]=sum;
    sum=0;
  }
}
printf("the resultant matrix\n");
for(i=0;i<r1;i++)
{
  for(j=0;j<c2;j++)
    printf("%d\t",c[i][j]);
printf("\n");
  }
}

else
{
printf("multiplication is not possible");
}
return 0;
}
