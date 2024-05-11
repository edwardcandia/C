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
    
    Student Mariana;
    
    Mariana.insertData("Mariana Garcia Aguiar", 21, 9, 3213999);
    Mariana.showData();
    
    return 0;
}
