#pragma once
#include <iostream>
#include <cstdlib>
#include <string>

// -본인이름학번 네임스페이스
namespace LeeNaKyung2593202 {
 // 1의 본인이름학번의 네임스페이스 안에 클래스를 정의하고
  class student {
    private:
    std::string name{};
    int id{};
    int score{};
    char grade{};

    //id (7digits),score(0~100), grade ('A',~ 'F')
    // private 멤버함수 정의
    void testId(){
        if (id < 1000000 || id > 9999999){
            std::cout << "Invalid id!" << std::endl;
            std::exit(1);}
    }
    void testScore(){
        if (score < 0 || score > 100){
            std::cout << "Invalid score!" << std::endl;
            exit(1);}
    }
    void testGrade(){
       if (grade < 'A' || grade > 'F'){
         std::cout << "Invalid grade!" << std::endl;
         std:: exit(1);
       }

    }

    public:
     student(const std::string& n="no name yet", int i=1234567, int s=0, char g='F')
        : name{n}, id{i}, score{s}, grade{g} {
        testId();
        testScore();
        testGrade();
    }
    // only uses & when memory exists

    // -input: 표준스트림입력으로 멤버변수들 입력, test함수들 호출
        void input () {
         std::cout << "Enter ID: ";
         std::cin >> id;
         testId();
         
         std::cout << "Enter Score: ";
         std::cin >> score;
         testScore();
         
         std::cout << "Enter Grade: ";
         std::cin >> grade;
         testGrade();

         std::cout<<"Enter name: ";
         std::getline(std::cin>>std::ws, name);
         //std::cin>>std::ws>> name; 
         //input함수 추가
        }
        
    
    // -set 접근함수들: 멤버변수 값 설정 및 test함수 호출

        void setId(int d) {
        id = d;
        testId();
        }

        void setScore(int s) {
        score = s;
        testScore();
        }

        void setGrade(char g) {
        grade = g;
        testGrade();
        }

        void setName(const std::string& n) {
        name = n;
        }


        // -print: 표준스트림출력으로 멤버변수들 출력
        void print()  const{
        std::cout << "ID: " << id << std::endl;
        std::cout << "Score: " << score << std::endl;
        std::cout << "Grade: " << grade << std::endl;
        std::cout << "Name: " << name << std::endl;
        } 
        // print함수 변경: std::string형 멤버변수도 표준스트림으로 출력

        // -get 접근함수들: 멤버변수 값 리턴
        int getId()  const {
        return id;
    }

        int getScore()  const {
        return score;
    }

        char getGrade()  const{
        return grade;
    }

        std::string getName() const {
        return name;
    }

        // -멤버함수로 전위증가연산자, 후위증가연산자 정의
        student& operator++(){
        ++score;
        testScore();

        return *this;
    }
        student operator++(int){
        student temp = *this;
        
        ++score;
        testScore();

        return temp;
    }
    
    // -프렌드함수로서 입력연산자 >>, 출력연산자 <<, 이항연산자 ==, 이항연산자 + 정의
    friend std::istream& operator>>(std::istream& is, student& s){
        is >> s.name>> s.id >> s.score >> s.grade;

        s.testId();
        s.testScore();
        s.testGrade();

        return is;
    }

    friend std::ostream& operator<<(std::ostream& os, const student& s){
        os<< s.name <<","<<s.id<<","<<s.score<<","<<s.grade;

        return os;
    }

    friend bool operator==(const student&s1, const student&s2){
        return s1.id==s2.id&&s1.score==s2.score&&s1.grade==s2.grade;
    }

    friend int operator+(const student&s1, const student&s2){
        return s1.score + s2.score;
    }


 };
}

