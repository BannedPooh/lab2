#include <iostream>
int main(){
    int n1, n2, n3;
    int a1, a2, a3;
    std::cin>>n1>>n2>>n3;
    
    if (n1 >= n2 && n1 >= n3)
    {
        a1 = n1;
        if (n2 >= n3)
        {
            a2 = n2;
            a3 = n3;
        }
        else{
            a2 = n3;
            a3 = n2;
        }
    }
    else if(n2 >= n1 && n2 >= n3)
    {
        a1 = n2;
        if (n1 >= n3)
        {
            a2 = n1;
            a3 = n3;
        }
        else{
            a2 = n3;
            a3 = n1;
        }
    }
    else
    {
        a1 = n3;
        if (n1 >= n2)
        {
            a2 = n1;
            a3 = n2;
        }
        else{
            a2 = n3;
            a3 = n1;
        }
    }
    std::cout<<a1<<" "<<a2<<" "<<a3<<std::endl;
}