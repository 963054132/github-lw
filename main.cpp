#include<iostream>
#include<string>
#include<time.h>
using namespace std;
void main()
{
  int a[6],b=0,c,e;
  string str="+-*/";
  for(b=0;b<30;b++)
  {
	  for(int i=0;i<6;i++)
     {
     	  a[i]=rand();
          while( a[i]<1||a[i]>=100)
		  a[i]=rand();
      }
      while(a[0]>a[1])
     {
          c=a[0];
		  a[0]=a[1];
		  a[1]=c;
     }
     while(a[3]>a[4])
     {
          c=a[3];
		  a[3]=a[4];
		  a[4]=c;
     }
     c=a[2]%4;
     e=a[5]%2;
	 if(e==0)
     cout<<a[1]<<" "<<str[c]<<" "<<a[4]<<" "<<"="<<endl;
	 else
	 cout<<a[0]<<"/"<<a[1]<<" "<<str[c]<<" "<<a[3]<<"/"<<a[4]<<" "<<"="<<endl;
  }
}
