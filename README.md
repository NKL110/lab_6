# lab_6

[환경 설정]

1. github.com에 본인 github ID로 로그인하세요. 

2. 본인의 숙제2 repository [https://github.com/cppclass-2026-37275/cppclass-2026-37275-03-assignment2-본인githubID(username)]에 가서 클래스1.h , 클래스2.h 파일을  다운로드 합니다.  

3. 🟩[New] repository를 만든 후 우측상단 Add file -> Upload files로 다운로드 받은 클래스1.h, 클래스2.h 파일을 Drag&Drop한 후 🟩[Commit changes...]를 누릅니다. 

4. 오른쪽 상단의 🟩[Code] -> 🟩[Codespaces]를 눌러 💻코딩 환경을 만드세요.

5. 탐색기에서 새 파일을 만들고 파일이름은 main.cpp로 하세요. 

6. [실습6] 내용을 ⌨️코딩, 🛠️컴파일 및 ▶️실행해 보세요.



[컴파일 및 실행 방법]

-⌨️ 📟터미널에서 아래 명령어로 컴파일하고 실행해보세요.

g++ main.cpp -o main && ./main



[실습6]

1. 본인이름학번의 네임스페이스

-본인이름학번 네임스페이스 예: 이름이 김프로이고 학번이 3727500일 경우 KimPro3727500

using 지시자는 cpp파일에서는 영역 { block } 안에서 사용, 헤더파일엔 using 지시자는 사용하지 않고 네임스페이스 지정자를 사용합니다.

-using 지시자 예: { using namespace std; cout << "Enter your id: "; }

-네임스페이스 지정자 예: std::cout << "Enter your id: ";



2. 클래스1.h 혹은 클래스2.h: 지난 실습에서 만든 클래스에 다음을 추가 

1의 본인이름학번의 네임스페이스 안에 클래스를 정의합니다. 

private

-std::string형 멤버변수

public

-생성자 변경: std::string형 멤버변수를 초기화

-print함수 변경: std::string형 멤버변수도 표준스트림으로 출력

-input함수 추가: std::string형 멤버변수는 std::string의 getline함수와 입력조작기 std::ws를 사용

-입력연산자 추가

-출력연산자 추가

-접근함수 추가: std::string형 멤버변수 접근함수 (get, set)



3. main.cpp: 테스트

1의 본인이름학번의 네임스페이스안에 print클래스Array 함수를 정의하세요. 리턴은 없고, 매개변수는 const 클래스형 배열과 const int형 배열크기이고, for구문을 이용하여 배열원소를 하나씩 표준스트림으로 출력연산자를 이용해 출력하세요.

-main

상수를 4로 선언하세요. 

클래스형을 상수개 갖는 배열을 선언합니다. 

배열의 첫번째 원소는 생성자를 이용하여 원하는 값으로 초기화합니다. 

배열의 두번째 원소는 set함수들을 호출하여 원하는 값을 넣어줍니다. 

배열의 세번째 원소는 input멤버함수를 호출하여 원하는 값을 넣어줍니다. 

배열의 네번째 원소는 입력연산자를 이용하여 표준스트림으로 원하는 값을 입력합니다. 

print클래스Array 함수에 배열과 상수를 넣어 호출합니다. 



클래스형이 상수개인 std::array를 선언합니다. 

for구문을 이용하여 std::array의 각 원소에 배열의 각 원소를 각각 할당합니다. (size(), at() 멤버함수 사용)

for each 구문을 이용하여 std::array의 각 원소에서 print함수를 호출합니다. 



[커밋 및 푸시]

-🖱🔀[소스제어]에 가서 변경 내용을 적고 커밋 및 푸시하세요.

(변경 내용을 적지 않으면 커밋이 되지 않으니 꼭 변경 내용을 적으세요!)

(📸 Commit: 현재 전체 상태를 기록, ⬆️ Push: 서버에 올리기)

-⌨️git 명령어를 이용한 커밋 및 푸시 방법

📟터미널에서 git add . && git commit -m "message" && git push

"message"는 커밋 내용 (예: ✅과제완료, 🐛수정내용, ✨추가, 🔥삭제, 🚀제출 등등)

-📦github에서 직접 커밋하는 방법]🟩[Codespaces]에서 ✅[Commit & Push]가 안 될 경우, 직접 📦github repository의 main.cpp에서 코드를 ✏️편집한 후 🟩[Commit changes...]하세요.

-💥 github repository에서 codespace를 만들어서 로컬에서 작업 후, 커밋&푸시하지 않은 상태에서 github repository에서 직접 commit하여 브랜치가 갈라질 경우 (diverged)

git add . && git commit -m "local changes": 로컬 변경 사항 커밋

git pull --rebase: 원격 커밋 위에 로컬 커밋

git add . && git rebase --continue: 충돌 발생 시 재배치

git push



************************************************

* 실습실 컴퓨터 이용시 실습 종료 후 github 로그아웃! *

************************************************

최종 수정 일시: 2026-10-07 10:55
