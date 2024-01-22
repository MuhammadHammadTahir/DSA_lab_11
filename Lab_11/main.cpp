#include <iostream>
#include <list>
#include <string>

using namespace std;

struct Student_information              //structure node
{
    string name;
    int age;
    void print() const                      //for printing node
    {
        cout<<endl<<"NAME : "<<name;
        cout<<endl<<"AGE : "<<age;
    }
};

bool compare(const Student_information& s1 ,const Student_information& s2);  //this function is required fro the proper working of Sort()

int main()
{

    list<Student_information> Data_list;     //list object
    char op='1';                            //check for insertion ending

    while(op!='2')
    {
        Student_information New_data;
        cout<<endl<<"Enter the name of the student : ";
        cin>>New_data.name;
        cout<<endl<<"Enter the age of the student : ";
        cin>>New_data.age;
        Data_list.push_back(New_data);           //insertion in the last of the list
        cout<<endl<<"Do you want to enter another student data ? Press 1 for (YES)   Press 2 for (NO) : ";
        cin>>op;
    }
    Data_list.sort(compare);            //passes the function as argument for the sorting of the data

    cout<<"Sorted Data by Age :"<<endl;
    list<Student_information>::const_iterator itrator = Data_list.begin();      //iterator is required to iterate through the list ADT it is working as (currptr)
    while(itrator != Data_list.end())
    {
        itrator->print();
        itrator++;
    }
    return 0;
}

bool compare(const Student_information& s1 ,const Student_information& s2)
{
    if(s1.age < s2.age)             //sort on the bases of age
        return true;
    else
        return false;
}
