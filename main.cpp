#include <iostream>
#include <climits>
#include <cfloat>
#include <iomanip>
#include <cmath>


int main() 
{
    int n;
    std:: cin>> n;
    int p=1;
    int n1=n;
    while(n/=10)
        {
           p++;
        }
    int sum=0;
    int q=0;
    for(int i=0; i<p ; i++ )
    {
        int q=n1%10;
        if(q%2!=0)
        {
            sum=sum+q;
        }
        n1=n1/10;

    }
   std::cout<<sum<<std::endl;
}
