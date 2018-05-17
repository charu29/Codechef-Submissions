#include <iostream>

using namespace std;

int main()
{
    int nv[20],n=0,i,j,a[20][200000];
    cout<<"Enter input";
    for(i=0;i<20;i++)
    {
        cin>>nv[i];    //i'th input
        if(nv[i]==0)
        {
            n=i;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<nv[i];j++)
           a[i][j]=j+1;
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<nv[i]<<" - ";
        for(j=0;j<nv[i];j++)
          cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    int t[20];
    for(i=0;i<n;i++)
        t[i]=0;
    for(i=0;i<n;i++)
    { 
        for(int k=0;k<6;k++)
        {
            for(j=0;j<nv[i];j++)
                a[i][j]=a[i][j+1]; // for erasing
            a[i][nv[i]-1]=a[i][0]; //for shifting at end
            for(j=0;j<nv[i];j++)
                a[i][j]=a[i][j+1];
            
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<nv[i]<<" - ";
        for(j=0;j<nv[i];j++)
          cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
