#pragma once
#include <iostream>
#include "student.h"

// 1의 본인이름학번의 네임스페이스 안에 클래스2를 정의하고 멤버함수들도 모두 인라인으로 구현합니다.


namespace LeeNaKyung2593202 {
    class studentInfo {
        private:
        student s;
        int semester{};

        // private 멤버변수 선언: 클래스1형 객체, 그 외 멤버변수 1개 이상

        public:

        // public 멤버함수 인라인으로 정의
        // -생성자: 모든 멤버변수 초기화, 기본값 설정
        studentInfo():s(), semester{1}{

        }

        void print(){
            std::cout<<s<<std::endl;
            std::cout<<"Semester:"<<semester<<std::endl;
        }
        // -print: 표준스트림출력으로 멤버변수들 출력
        
        student& getStudent(){
            return s;
        }

        int getSemester(){
            return semester;
        }

        void setSemester(int sem){
            semester=sem;
        }
        // -클래스1형 객체의 접근함수를 참조형식으로 구현
    };

}