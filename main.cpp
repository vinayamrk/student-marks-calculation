#include <iostream>

using namespace std;

class stud
{
    char name[20];
    char USN[10];
    int marks[3];

public:
        stud()
        {
            cout<<"Enter the name of stud"<<endl;
            cin>>name;
            cout<<"Enter the USN"<<endl;
            cin>>USN;
            cout<<"Enter the marks in three subjects"<<endl;
            for(int i=0;i<3;i++)
                cin>>marks[i];
                cout<<endl;
        }

        void calculate()
        {
            int tot;
            float per;
            tot=marks[0]+marks[1]+marks[2];
            per=(float)tot/3;
            cout<<"Name : "<<name<<endl;

            cout<<"Total marks obtained: "<<tot<<endl;

            cout<<"Percentage obtained: "<<per<<endl;


            if(per>=80)
                cout<<"Grade obtained : A"<<endl;
            else if(per>=70 && per<80)
                cout<<"Grade obtained : B"<<endl;
            else if(per>=60 && per<70)
                cout<<"Grade obtained : C"<<endl;
            else if(per>=50 && per<60)
                cout<<"Grade obtained : D"<<endl;
            else
                cout<<"Grade obtained : F"<<endl;
        }

};

int main()
{
    int n;
    cout<<"Enter the number of students : "<<endl;
    cin>>n;
    stud s1[n];
    for(int i=0;i<n;i++)
{
    s1[i].calculate();
    cout<<endl;
}

    return 0;
}
