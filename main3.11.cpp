#include <iostream>
#include <string>
using namespace std;

class GradeBook1
{
public:

    void setcoursename( string name1)
    {
        coursename = name1;
    }

    string getcoursename() const
    {
        return coursename;
    }
    void displaymessage() const
    {
        cout<<"welcome to the grade book for\n"<<getcoursename()<<"!"
        <<endl;
    }
private:
    string coursename;
};

class GradeBook2
{
public:
    void setteachername( string name2 )
    {
        teachername = name2;
    }
    string getteachername() const
    {
        return teachername;
    }
    void displaymessage() const
    {
        cout<<"This course is presented by:"<<getteachername()<<"!"
        <<endl;
    }
private:
    string teachername;
};

int main()
{
    string nameofcourse;
    GradeBook1 myGradeBook1;

    cout<<"�γ̵�����Ϊ:"<<myGradeBook1.getcoursename()
    <<endl;

    cout<<"������γ̵�����:"<<endl;
    getline( cin,nameofcourse );
    myGradeBook1.setcoursename( nameofcourse );
    cout<<endl;
    myGradeBook1.displaymessage();

    string nameofteacher;
    GradeBook2 myGradeBook2;

    cout<<"��ʦ��������:"<<myGradeBook2.getteachername()
    <<endl;

    cout<<"��������ʦ������:"<<endl;
    getline( cin, nameofteacher );
    myGradeBook2.setteachername( nameofteacher );
    cout<<endl;
    myGradeBook2.displaymessage();
}


