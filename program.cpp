#include<iostream>
using namespace std;
int main()
{
  int r1,c1,r2,c2,sum=0;
  int a[50][50],b[50][50],c[50][50],i,j,k;
  cout<<"enter the size of rows and column of the matrix a:"<<endl;
  cin>>r1>>c1;
  cout<<"enter the size of rows and column of the matrix b:"<<endl;
  cin>>r2>>c2;

  //read the matrix a
    cout<<"enter the matrix a:"<<endl;
for(i=0;i<r1;i++)
  for(j=0;j<c1;j++)
    cin>>a[i][j];
//read the matrix b
  cout<<"enter the matrix b:"<<endl;
if(c1==r2)
{
for(i=0;i<r2;i++)
  for(j=0;j<c2;j++)
      cin>>b[i][j];
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
cout<<"the resultant matrix:"<<endl;
for(i=0;i<r1;i++)
{
  for(j=0;j<c2;j++)
    cout<<"\t"<<c[i][j];
cout<<endl;
  }
}

else
{
cout<<"multiplication is not possible"<<endl;
}
return 0;
}
