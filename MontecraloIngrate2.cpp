
#include<iostream>
#include<cmath>
#include<ctime>
#include<random>

using namespace std;
int main()
{
    srand(time(NULL));
 double r1;
 /*r2 = (double)rand()/RAND_MAX; f(x)=x*/
 int N=0;
 int a=0,b=1,c=0,d=1;
 double x, y,sum=0,cal1,cal2,result;


 for(int i=0;i<=100;i++ )
 {
     r1= (double)rand()/RAND_MAX;
      x = a + (b-a)*r1;
      y=c+ (d-c)*r1;

     cal1 = x;
     sum =sum + cal1;
     N++;
 }
 result = (b-a)*sum/N ;
 cout<<"Ingretion vaule using monte carlo method ="<<result;
return 0;
}
