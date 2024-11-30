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
    while(n>0)
    {
        int q=n%10;
        if(q%2!=0)
            sum += q;
        n /= 10;
    }
   std::cout<<sum<<std::endl;
   
}
