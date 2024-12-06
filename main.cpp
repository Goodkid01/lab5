#include <iostream>
#include <climits>
#include <cfloat>
#include <iomanip>
#include <cmath>


int main() 
{
   // int n;
    //std:: cin>> n;
    //int p=1;
    //int sum=0;
    //int q=0;
    //while(n>0)
   // {
     //   int q=n%10;
       // if(q%2!=0)
         //   sum += q;
        //n /= 10;
    
   //std::cout<<sum<<std::endl;
   
// const int x=1000;
// int mas[x];
int maxx=-10000;
int sum=0;
int n;
int maxxi=-1;
std::cin>>n;
int u=0;
for (int i=0;i<n;i++)
    {
    std::cin>>u;
    if((u%10==0) || (u%10==7))
    {
        sum=sum+u;
        if(u>maxx)
        {
            maxx=u;
            maxxi=i;
        }

    }
    }
std::cout<<maxx<<"   "<<maxxi<< "   "<<sum<<std::endl;












}

