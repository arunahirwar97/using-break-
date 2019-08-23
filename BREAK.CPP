#include<iostream.h>
#include<conio.h>
int  main()
 {
 int a;
 cout<<"Enter any value ::"<<endl;
 cin>>a;
 cout<<endl;
 for( int i=a;i>=1;i--)
 {for(int j=i;j>=1;j--)
 if(i<
 j)

 break;

 else
 {
 cout<<i*j <<"";
 }
 cout<<endl;
  }

 getch();
 return 0;
 }