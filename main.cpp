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
    int sum=0;
    int q=0;
    int q1=1;
    q1=n%10;
    if(q1%2!=0)
    {
        sum=sum+q1;
    }
    while(n/=10)
        {
        int q=n%10;
        if(q%2!=0)
        {
            sum=sum+q;
        }
        }
    std::cout<<n<<std::endl;
    

   std::cout<<sum<<std::endl;
}
