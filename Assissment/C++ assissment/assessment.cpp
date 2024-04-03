#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Lecture {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numOfLectures;

public:
    
    Lecture(string lecturer, string subject, string course, int numLectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numOfLectures = numLectures;
    }

    
    void addLectureDetails(string lecturer, string subject, string course, int numLectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numOfLectures = numLectures;
    }

    
    void displayLectureDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numOfLectures << endl;
    }
};

int main() {
    vector<Lecture> lectures;

    
    lectures.push_back(Lecture("John Doe", "Computer Science", "Introduction to Programming", 10));
    lectures.push_back(Lecture("Jane Smith", "Mathematics", "Calculus", 12));
    lectures.push_back(Lecture("Alice Johnson", "Physics", "Quantum Mechanics", 8));
    lectures.push_back(Lecture("Bob Williams", "History", "World War II", 15));
    lectures.push_back(Lecture("Emily Brown", "Literature", "Shakespearean Plays", 9));

  
    cout << "Lecture Details:" << endl;
    for (int i = 0; i < lectures.size(); ++i) {
        cout << "Lecture " << i + 1 << ":" << endl;
        lectures[i].displayLectureDetails();
        cout << endl;
    }

    return 0;
}
