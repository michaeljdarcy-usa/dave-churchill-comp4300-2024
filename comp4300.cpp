#include <iostream>
#include <vector>

// using namespace std;

class Student
{
    std::string m_first   = "First";
    std::string m_last    = "Last";
    int         m_id      = 0; 
    float       m_average = 0;

public:

    Student() {}

    Student(std::string first, std::string last, int id, float avg) 
        : m_first   (first)
         , m_last   (last)
        , m_id      (id)
        , m_average (avg)
    {

    }

    int getAvg() const
    {
        return m_average;
    }

    int getID() const
    {
        return m_id;
    }

    std::string getFirst() const
    {
        return m_first;
    }

    std::string getLast() const
    {
        return m_last;
    }

    void print() const
    {
        std::cout << m_first << " " << m_last << " ";
        std::cout << m_id << " " << m_average << "\n";
    }

};

class Course
{
    std::string m_name = "Course";
    std::vector<Student> m_student;

public:

    Course() {}

    Course(const std::string& name)
        : m_name(name)
    {

    }

    void addStudent(const Student& s)
    {
        m_student.push_back(s);
    }

    const std::vector<Student> getStudents() const
    {
        return m_student;
    }

    void print() const
    {
        for (auto& s : m_student)
        {
            s.print(); 
        }
    }
};

int main(int argc, char * argv[])
{
    /*
    int age{36};
    std::string first = "Michael";
    std::string last  = "Joseph";
    std::string name  = first + " " + last;
    std::cout << name << std::endl;

    std::vector<float> vec;
    vec.push_back(42.2f);
    vec.push_back(10.0f);
    vec.push_back(11.1f);

    for (int i=0; i<vec.size(); i++)
    {
        std::cout << vec[i] << "\n";
    }

    for (auto a : vec)
    {
        std::cout << a << "\n";
    }
    */

    Student s1;
    Student s2("Dave", "Churchill", 1, 3.14);
    Student s3("Jane", "Doe", 202200001, 99.9);

    Course comp4300("COMP 4300");
    comp4300.addStudent(s1);
    comp4300.addStudent(s2);
    comp4300.addStudent(s3);
    comp4300.addStudent(Student("Billy", "Bob", 3, 50.2));

    comp4300.print();

    return 0;
}
 