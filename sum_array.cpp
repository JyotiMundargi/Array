#include<iostream>
using namespace std;
int main()
{
    int i=3,j=3,rowsum,colsum;
    int array[i][j]={
        {2,5,8},
        {4,1,9},
        {7,5,3}
    };

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<array[i][j]<<" ";
    
        }
        cout<<endl;
    }

    cout<<"Sum of each row and column in a matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        rowsum=0;
        colsum=0;
        for(j=0;j<3;j++)
        {
            rowsum += array[i][j];
            colsum += array[j][i];
        }
        cout<<"sum of row: "<<rowsum << "\t sum of column: "<<colsum<<endl;
    }


    return 0;
}

