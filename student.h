#pragma once
#include <iostream>
#include <cstdlib>

// -본인이름학번 네임스페이스
namespace LeeNaKyung2593202 {
 // 1의 본인이름학번의 네임스페이스 안에 클래스를 정의하고
  class student {
    private:
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

     student()
        : id{1000000}, score{0}, grade{'F'} {
        testId();
        testScore();
        testGrade();
    }

    student(int i, int s, char g)
        : id{i}, score{s}, grade{g} {
        testId();
        testScore();
        testGrade();
    }

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

    // -print: 표준스트림출력으로 멤버변수들 출력
    void print()  const{
        std::cout << "ID: " << id << std::endl;
        std::cout << "Score: " << score << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }

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
        is >> s.id >> s.score >> s.grade;

        s.testId();
        s.testScore();
        s.testGrade();

        return is;
    }

    friend std::ostream& operator<<(std::ostream& os, const student& s){
        os<< s.id<<","<<s.score<<","<<s.grade;

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

