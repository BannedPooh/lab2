#include <iostream>
#include <cmath>
int main()
{
    int term = 1;
    double pivalue = 0;
    
    std::cout<<"Enter the number of terms to approximate (or zero to quit):"<<std::endl;
    std::cin>>term;
    while (term != 0)
    {
        double s = 1;
        for (int i = 1; i<= term; ++i)
        {
            if (i%2 == 1)
            {
                s -= 1/(2*double(i)+1);
            }
            else{
                s += 1/(2*double(i)+1);
            }
        }
        std::cout<<"The approximation for Leibniz's Formula is "<<4*s<<" using "<<term<<" terms."<<std::endl;
        std::cout<<"Enter the number of terms to approximate (or zero to quit):"<<std::endl;
        std::cin>>term;
    }
}