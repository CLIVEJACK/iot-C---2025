# iot-C++-2025
 C++공부
- C++
    - C++의 헤더파일 `#include <iostream>`[C++](./Day1/Hello.cpp)
    - 출력문 
        - cout는 표준출력 객체이고 시작하는 단위이다
        - endl은 끝을나타내는 것이며 자동개행이있다
        - 출력문은 자료형에 상관없이 출력이 가능하다
        - 변수 선언 == (객체를 만들었다는의미) `int num(10)`으로 선언하면
            int 객체에 num이라는 함수를 만들어라는 의미


        ```c++
        {	/*cout(시작하는) <<(밀어넣어라) "이걸"<<endl(끝나는)도 넣어라 */
            std::cout << "Hello World!!" << std::endl;		// C++의 출력: cout는 시작(출력)| endl은 끝을 나타냄 
            printf("abcd");

            return 0;
        }
        ```
    - 입력문 [C++](./Day1/cin.cpp)
        - cin 입력을 담담하는 객체
            선언: `cin >> inVal`
            예도 저장변수가 필요함 
        ```C++
        int inVal;      // 변수 저장
        cin >> inVal;   // cin(출력을) >>(방향)으로 inVal 로 넣겠다 
        std::cout << "inVal: " << inVal << std::endl;

        ```

    - 함수의 다형성
        - 함수 오버로딩(함수의 다중정의): c언어는 이름이 달라야 다른 언어지만 c++은 함수이름 매개변수의 타입이나 변수의   갯수 까지 같아야 같은문임 [C++](./Day1/overloding.cpp)
        - 함수 오버라이딩(함수의 재정의) --> 상속  
    - 함수를 명시하여 사용 
        - 여러가지 함수가 있으면 그중에서 명시하여 사용가능 [C++](./Day1/namesp.cpp)
        ```C++
        #include <stdio.h>

        namespace aName {
            void func() {
                printf("aName::func()\n");
            }
        }
        namespace bName {
            void func() {
                printf("bName::func()\n");
            }
        }
        namespace cName {
            void func() {
                printf("cName::func()\n");
            }
        }

        using namespace cName;

        int main()
        {
            aName::func();			// func()앞에 aName::을 사용하여 위에있는 함수를 명시적으로 사용가능
            bName::func();
            func();					// using namespace cName;를 사용하여 func()만으로 출력이가능

            return 0;

        }
        ```
        - 선언 
            - `namespace 함수명 {조건식}`으로 지정후
                `함수명::` 으로 출력    

    - 디폴트 매개변수 [C++](./Day1/default.cpp)
        - 함수 선언부분에 매개변수 값에 0을 넣으면 만들어짐
        - 함수 정의부분에서 선언할수 없음 
        - 디폴트 매개변수를 쓰려면 호출부분에 입력이 없어야함
        - 디폴트 매개변수를 여러개 적용할 때는 맨 오른쪽부터 작성한다 [C++](./Day1/default2.cpp)
        - 함수 오버로딩중에서 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을때 입력없는 함수는 호출불가능[C++](./Day1/default3.cpp)

    - class [C++](./Day1/scope.cpp), [C++](./Day1/scope.h)
        - 파일을 가지고와서 내것처럼 사용

    - 메모리 동적할당 [C++](./Day1/new2.cpp)
        - new -delete를 쓴다
        - new는 생성자를 호출한다 > 초기화도 가능
        - new는 객체를 생성하고 초기화하는 특별한 메서드다
        - 객체를 생성하기 위해서는 생성자를 호출해야한다
        - 선언    
            - 자료형 포인터 = new 자료형(크기)  > 자료형은 기본형의 크기를 가지고있다 
    
    - ref.cpp 부터작성
