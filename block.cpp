#include <iostream>
int main()
{
    int w,h;
    std::cout<<"Enter number of rows and columns:"<<std::endl;
    std::cin>>h>>w;
    while (w!=0 || h !=0)
    {
    for (int i = 0; i!=h; ++i)
    {
        for (int j = 0; j!= w; ++j)
        {
            std::cout<<"X.";
        }
        std::cout<<std::endl;
    }
    std::cout<<"Enter number of rows and columns:"<<std::endl;
    std::cin>>h>>w;
    }
    return 0;
}