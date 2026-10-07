#include "student.h"
#include "student2.h"
  namespace LeeNaKyung2593202 {
     void printStudentArray (const student arr[], const int size){
        for (int i=0; i<size;i++){
            std::cout<<arr[i]<<std::endl;
        }}}

int main(){
    using namespace LeeNaKyung2593202;

    const int n{4};
    student a[n];
    a[0]=student{"KimPro", 1234567,99,'A'};
    a[1].setName("LeePro"); a[1].setId(2345678); a[1].setScore(89); a[1].setGrade('B');
    a[2].input();
    std::cin>>a[3];

    printStudentArray(a,n);
    return 0;
}