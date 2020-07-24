// 多继承
#include <iostream>
#include <string>

class Person
{
public:
        Person(std::string theName);

        void introduce();

protected:
        std::string name;
};

class Teacher:public Person
{
public:
        Teacher(std::string theName, std::string theClass);

        void teach();
        void introduce();

protected:
        std::string classes;
};

class Student:public Person
{
public:
        Student(std::string theName, std::string theClass);

        void attendClass();
        void introduce();

protected:

        std::string classes;
};

class TeachingStudent : public Student, public Teacher
{
public:
        TeachingStudent(std::string theName, std::string classTeaching, std::string ClassAttending);

        void introduce();
};


Person::Person(std::string theName)
{
        name = theName;
}

void Person::introduce()
{
        std::cout << "hello, everyone! my name is " << name << ". \n\n";
}


Teacher::Teacher(std::string theName, std::string theClass) : Person(theName)
{
        classes = theClass;
}


void Teacher::teach()
{
        std::cout << name << " teaching " << classes << ". \n\n";
}


void Teacher::introduce()
{
        std::cout << "hello everyone, my name is " << name << ", I teach " << classes << " .\n\n";
}


Student::Student(std::string theName, std::string theClass) : Person(theName)
{
        classes = theClass;
}


void Student::attendClass()
{
        std::cout << name << " join(s) " << classes << " to study. \n\n";
}


void Student::introduce()
{
        std::cout << "hello everyone, my name is " << name << ", I study in " << classes << ". \n\n";
}


TeachingStudent::TeachingStudent(std::string theName, std::string classTeaching, std::string classAttending): Teacher(theName, classTeaching), Student(theName, classAttending)
{
}


void TeachingStudent::introduce()
{
        std::cout << "hello everyone, my name is "<< Student::name << " , I teach " << Teacher::classes << " , ";
        std::cout << "at the same time, I study in " << Student::classes << " . \n\n";
}


int main()
{
        Teacher teacher("Fishc", "cpp_study");
        Student student("Tom", "cpp_study");

        TeachingStudent teachingStudent("Jerry", "cpp_study", "python_study");

        teacher.introduce();
        teacher.teach();
        student.introduce();
        student.attendClass();
        teachingStudent.introduce();
        teachingStudent.teach();
        teachingStudent.attendClass();

        return 0;
}
