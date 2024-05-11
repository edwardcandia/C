#include <iostream>

using namespace std;

int main()
{
    struct Student{
    
    string name;
    int age, grade, id;
    
    void insertData(string aName, int aAge, int aGrade, int aId){
        name = aName;
        age = aAge;
        grade = aGrade;
        id = aId;
    }
    
    void showData(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "ID: " << id << endl;
    }
    
    };
    
    Student *ADS = new Student[3];
    Student st1, st2, st3;
    
    st1.insertData("Mariana", 20, 10, 1230);
    st2.insertData("Kevin", 18, 7, 1233);
    st3.insertData("George", 32, 8, 1240);
    
    ADS[0] = st1;
    ADS[1] = st2;
    ADS[2] = st3;
    
    for(int i=0; i<3; i++){
        ADS[i].showData();
    }
    return 0;
}
