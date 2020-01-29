#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
 int a[10][10],b[10][10],c[10][10];
 int choice,r1,c1,r2,c2;
 void getdata(int [][10],int,int);
 void putdata(int [][10],int,int);
 void transpose(int [][10],int,int);
 void lowermatrix(int [][10],int,int);
 void uppermatrix(int [][10],int,int);
 void addtwomatrix(int [][10],int [][10],int [][10],int,int);
 void subtwomatrix(int [][10],int [][10],int [][10],int,int);
 void multwomatrix(int [][10],int [][10],int [][10],int,int,int);
 clrscr();
 printf("First Matrix \n");
 printf("Enter the row of first matrix : ");
 scanf("%d",&r1);
 printf("Enter the column of first matrix : ");
 scanf("%d",&c1);
 getdata(a,r1,c1);
 printf("\nSecond Matrix \n");
 printf("Enter the row of second matrix : ");
 scanf("%d",&r2);
 printf("Enter the column of second matrix : ");
 scanf("%d",&c2);
 getdata(b,r2,c2);
 putdata(a,r1,c1);
 putdata(b,r2,c2);
 while(1)
 {
  printf("Menu\n1.Transpose of matrix\n2.Upper diagonal\n3.Lower deagonal\n4.Addition of two matrix\n5.Subtraction of two matrix\n6.Multiplication of two matrix\n7.Exit\n");
  printf("Enter your choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
	putdata(a,r1,c1);
	printf("Transpose matrix : \n");
	transpose(a,r1,c1);
	 break;
   case 2:
	printf("Upper matrix : \n");
	uppermatrix(a,r1,c1);
	break;
   case 3:
	printf("Lower matrix : \n");
	lowermatrix(a,r1,c1);
	break;
   case 4:
	printf("Addition of two matrix : \n");
	if( r1==r2 && c1==c2)
	addtwomatrix(a,b,c,r1,c1);
	break;
   case 5:
	printf("Subtraction of two matrix : \n");
	if( r1==r2 && c1==c2)
	subtwomatrix(a,b,c,r1,c1);
	break;
   case 6:
	printf("Multiplication of two matrix : \n");
	if(c1==r2)
	multwomatrix(a,b,c,r1,c2,c1);
	break;
   case 7:
	exit(0);
  }
  getch();
 }

}
void getdata(int x[10][10],int r,int c)
{
 int i,j;
 printf("Enter the element of matrix : \n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d",&x[i][j]);
  }
 }
}
void putdata(int x[10][10],int r,int c)
{
 int i,j;
 printf("Element of matrix : \n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",x[i][j]);
  }
  printf("\n");
 }

}
void lowermatrix(int x[10][10],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {
  for(j=0;j<=i;j++)
  {
   printf("%d\t",x[i][j]);
  }
  printf("\n");
 }
}
void uppermatrix(int x[10][10],int r,int c)
{
  int i=0,j,k=0;

 for(i=0;i<r;i++)
 {
  for(j=0;j<i;j++)
  {
   printf(" ");
  }
  for(j=0;j<r-i;j++)
  {
   printf("%d",x[i][j]);
  }
  printf("\n");
 }
}
void transpose(int x[10][10], int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",x[j][i]);
  }
  printf("\n");
 }
}
void addtwomatrix(int x[10][10],int y[10][10],int z[10][10],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   z[i][j]=x[i][j]+y[i][j];
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",z[i][j]);
  }
  printf("\n");
 }
}
void subtwomatrix(int x[10][10],int y[10][10],int z[10][10],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   z[i][j]=x[i][j]-y[i][j];
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",z[i][j]);
  }
  printf("\n");
 }
}
void multwomatrix(int x[10][10],int y[10][10],int z[10][10],int r1,int c2,int c1)
{
 int i,j,k;
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c2;j++)
  {
  z[i][j]=0;
  for(k=0;k<c1;k++)
  {
   z[i][j]=z[i][j]+x[i][k]*y[k][j];
  }
  }
 }
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c2;j++)
  {
   printf("%d\t",z[i][j]);
  }
  printf("\n");
 }
}
