#include <iostream>
int main()
{
    int w,h;
    std::cin>>h>>w;
    for (int i = 0; i!=h; ++i)
    {
        for (int j = 0; j!= w; ++j)
        {
            std::cout<<"X.";
        }
        std::cout<<std::endl;
    }
    return 0;
}