#include<iostream>
using  namespace std;

int main()
{
    int sizeF;
    cout<<"Which size do you want?\n";
    cin>>sizeF;



    for(int row=0;row<sizeF;row++)
    {
        for(int stars=0;stars<sizeF;stars++)
        {
            if(stars==sizeF/2||
               row==sizeF/2||
               stars==row||
               row+stars==sizeF-1)
            {
                cout<<"@  ";
            }
            else
            {
                cout<<"*  ";
            }
        }
        cout<<endl;
    }





    return 0;
}
