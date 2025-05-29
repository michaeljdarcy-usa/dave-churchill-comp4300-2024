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

    int getAvg()
    {
        return m_average;
    }

    int getID()
    {
        return m_id;
    }

    std::string getFirst()
    {
        return m_first;
    }

    std::string getLast()
    {
        return m_last;
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

    std::cout << s3.getLast() << "\n"; 

    return 0;
}
