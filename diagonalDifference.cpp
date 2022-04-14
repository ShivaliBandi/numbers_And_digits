#include<iostream>
using namespace std;
int diagonaldifference(int **arr,int irows,int icolumns)
{
   int diag1=0,diag2=0;
   for(int i=0;i<irows;i++)
{
    for(int j=0;j<icolumns;j++)
    {
        if(i==j)
        {
            diag1+=arr[i][j];
        }
        if(i+j==irows-1)
        {
            diag2+=arr[i][j];
        }
    }
    
}
if(diag1-diag2<0)
    return diag2-diag1;
return diag1-diag2;

}
void AcceptArray(int **arr,int irows,int icolumns)
{
    for(int i=0;i<irows;i++)
    
        for(int j=0;j<icolumns;j++)
            cin>>arr[i][j];
}
void DisplayArray(int **arr,int irows,int icolumns)
{
    for(int i=0;i<irows;i++)
    {
        for(int j=0;j<icolumns;j++)
            cout<<arr[i][j]<<"\t";
        cout<<endl;

    }
        
}
int main()
{
    int **arr,irows=0,icolumns=0;

    cout<<"enter size  of row"<<endl;
    cin>>irows;
    arr=new int*[irows];
    cout<<"enter size  of column"<<endl;
    cin>>icolumns;
    for(int i=0;i<irows;i++)
        arr[i]=new int[icolumns];
    cout<<"enter matrix values";
    AcceptArray(arr,irows,icolumns);
    DisplayArray(arr,irows,icolumns);
    cout<<"Diagonal difference is-->"<<diagonaldifference(arr,irows,icolumns)<<endl;
    
}