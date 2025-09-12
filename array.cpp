//2-D Array
#include<iostream>
using namespace std;
int main()
{
    int i=3,j=4;
    int array[i][j]={
        {2,5,8,6},
        {4,1,9,3},
        {7,5,3,9}
    };

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}