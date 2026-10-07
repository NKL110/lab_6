#include "student.h"
#include "student2.h"
#include <array>

  namespace LeeNaKyung2593202 {
     void printStudentArray (const student arr[], const int size){
        for (int i=0; i<size;i++){
            std::cout<<arr[i]<<std::endl;
        }}}

int main(){
    using namespace LeeNaKyung2593202;

    const int n{4};
    student a[n];

    

    //배열의 첫번째 원소는 생성자를 이용하여 원하는 값으로 초기화합니다. 
    //배열의 두번째 원소는 set함수들을 호출하여 원하는 값을 넣어줍니다. 

    //배열의 세번째 원소는 input멤버함수를 호출하여 원하는 값을 넣어줍니다. 

    //배열의 네번째 원소는 입력연산자를 이용하여 표준스트림으로 원하는 값을 입력합니다. 

    
    a[0]=student{"KimPro", 1234567,99,'A'};
    a[1].setName("LeePro"); a[1].setId(2345678); a[1].setScore(89); a[1].setGrade('B');
    a[2].input();
    std::cin>>a[3];

    //print클래스Array 함수에 배열과 상수를 넣어 호출합니다. 
    printStudentArray(a,n);
    std::array<student, n> sa;
     // a의 원소를 std::array에 각각 할당
    for (int i = 0; i < sa.size(); i++) {
        sa.at(i) = a[i];
    }

     // for each를 이용하여 print()
    for (const student& s : sa) {
        s.print();
    }

    return 0;
}