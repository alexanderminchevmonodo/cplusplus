#include<iostream>
using namespace std;

int main()
{
    const int countGrades=7;
    int grades[countGrades];
    float sum=0;
    float average;
    float maxGrade;

    for (int i=0; i<countGrades; i++)
    {
        cout<<"Enter grades #"<<i+1<<": ";
        cin>>grades[i];
    }
    for(int i=0; i<countGrades; i++)
    {
        cout<<" grades #"<<i+1<<": "<<grades[i]<<"\n";
        sum=sum+grades[i];
    }

    average=sum/countGrades;
    cout<<"Average is "<<average<<"\n";

    maxGrade=grades[0];
    for(int i=1; i<countGrades; i++)
        if(maxGrade<grades[1])
        {

            if(maxGrade<grades[i])
            {
                maxGrade=grades[i];
            }

        }
    cout << "The max grade is "<<maxGrade<<endl;














return 0;

}
