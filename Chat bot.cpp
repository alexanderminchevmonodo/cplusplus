#include<iostream>
using namespace std;

int main ()
{
    string FirstName;
    string surname;
    string lastname;
    int age;
    int bornYear;
    string pupil;
    int grade;
    string food;
    cout << "Hello! What is your first name?" << endl;
    cin >> FirstName;
    cout << "Nice to meet you " << FirstName << endl;
    cout << "What is your surname" << endl;
    cin >> surname;
    cout << "What is your last name?";
    cin >> lastname;
    cout << "I understand. Your name is "<<FirstName<<" "<<surname<<" "<<lastname<<". \n";
    cout << "How old are you?\n";
    cin >> age;
    if(age<0)
    {
        cout << "No way! This is false!!!\n";


    }

    if(age==0)
    {
        cout<< "Are you a baby?!\n";
    }

    if(age>150)

    {
        cout << "You look younger!\n";
    }


    bornYear = 2022-age;
    cout << "You are born in "<<bornYear<<" year.\n";





    cout << "Are you a pupil?\n";
    cin >> pupil;


    if(pupil=="yes")
    {
        cout << "In which grade?\n";
        cin >> grade;

    }










    cout << "Bye,"<<FirstName<<" \n";






    return 0;
}
