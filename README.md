# iot-C++-2025
 C++공부
 ## 1일차
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
    
    - 지역변수 [C++](./Day1/ref.cpp)
        - 함수 호출전과 호출후의 값이 다르게하려면 [C++](./Day1/ref.cpp)
            - 함수 선언에서 `*`포인터를 사용하여 호출된 값만 주는 방식
    - 레퍼런스 [C++](./Day1/ref2.cpp)
        - 레퍼런스는 참조한다는 뜻
        - 또다른 이름, 보이지 않는 포인터, 메모리를 사용하지 않는다
        - 레퍼런스도 지역변수처럼 사용하면됨
        - 선언
            ```C++
            void chFunc(int& rn){ // int&로 선언
                rn = 20;
            }
            ```

        - 레퍼런스는 선언과 동시에 초기화 해야한다. 간접참조해서 가져옴[C++](./Day1/ref3.cpp)
            - 선언
            ```C++
            int num = 10, num2 = 100;       // 변수값 초기화
            int& ref = num;                 // 선언과동시에 초기화
            ```
        - 레퍼런스는 상수도 참조 가능하다 [C++](./Day1/ref4.cpp)
            - 이럴경우에는 상수 레퍼런스로 선언하면 임시객체를 저장할 수 있는 공간이 생성된다
            - 선언
            ```C++
            const int& ref = 10;        // 상수 레언하면 리터럴도 참조할 수 있다 
            ```
        - 출력인경우 
            - 일반 변수 출력타입에 맞춰서 변수를 설정하는 방법 [C++](./Day1/ref5.cpp)
            - 레퍼런스 출력타입에 맞춰서 변수를 설정하는 방법 [C++](./Day1/ref6.cpp)
        - 입력인경우
            -
    - 구조체
        - C 구조체의 기본[C++](./Day1/st_c.cpp)
        - C++ 구조체의 기본 [C++](./Day1/st_c2.cpp)
        - class의 기본 [C++](./Day1/st_c3.cpp)   

## 2일차
- 클래스 
    - 구조체로 부터 발전됨
    - 클래스를 구성하는 3가지
    1. 접근제어 지시자(private, public, protected): 접근지시자를 통해 접근 유무가 가능해짐 
        - private : 접근 불가능
        - public : 아무나 접근가능
        - protected: 상속받은 것만 접근가능 (자신만 접근)
    2. 멤버변수 - 속성: private 영역
    3. 멤버함수(메서드) - 기능: public 영역
    - 객체와 인스턴스는 비슷한 뜻이다
    - 클래스의 중점으로 하면 인스턴스  
    - 어떤 인스턴스로 만드냐면 클래스 
    - 선언 [C++](./Day2/class.cpp)
        ```C++
        class A{            // class 첫문자는 대문자 {} 라는 형태로 작성
            public:         // 접근지시자 
            int m_num;      // 맴버 변수. m_이라는 키워드는 멤버변수이다

            void set(int num){      // 맴버 함수 또는 메서드라고 불림
                m_num = num;
            }

            void print(){           // 맴버 함수 또는 메서드라고 불림
                cout << "나는 A클래스의 인스턴스 입니다. " << "num: "<<m_num << endl;
            }
        }

        int main()
        {
            A obj;          // 객체를 생성 > 호출. A라는 타입 obj라는 변수
            obj.print();    // 맴버접근 연산자'.'을 사용해서 print를 출력
            obj.set(10);    // obj의 set를 불러와 10넣기
            obj.print();        
            return 0;
        }
        ```
- 생성자 constructor [C++](./Day2/class3.cpp)  
    - 클래스 이름과 동일한 메서드가 있으면 생성자
    - 생성자는 클래스의 인스턴스가 생성될때 자동으로 호출되는 특별한 함수입니다.
    - 클래스는 생성자 호출로 객체가 만들어진다. 
    - 생성과 동시에 초기화 하려면 맴버함수를 만들어야함 > 객체 생성시 구조에 맞는 생성자가 없으면 객체는 생성되지 않는다
    - 생성자는 초기화 기능에 사용한다.
    - 생성자는 오버로딩이 가능하다.
    - 프로그래머가 생성자를 작성하면 더이상 디폴트 생성자는 제공되지 않는다.
    - 생성자는 
        - `클래스 이름과같은 (초기화할 입력값){조건}`으로 만듬
        - 선언
            ```C++
            class MyClass {
            private:
                int m_num1;
                int m_num2;
            public:
                MyClass() {}		// main에 MyClass obj; 디폴트로 생성하면 이런식으로 디폴트로 생성하면 가능하다 
                MyClass(int num1, int num2) {				//명시함	// 클래스 이름과 같아야함(입력){조건} / 생성자(입력받는두개 받는 값)
                    m_num1 = num1;
                    m_num2 = num2;
                }
                void printData() {
                    cout << "나는 MyClass의 인스턴스 입니다.";
                    cout << "m_num1: "<< m_num1 << "m_num2: "<< m_num2<< endl;
                    cout << "m_num1: " << m_num1 << "m_num2: " << m_num2 << endl;

                }
            };
            int main()
            {
                MyClass obj;		// 디폴트 생성자를 받기때문에 문제없이 작동해야하지만 명시적으로 생성자를 생성하면 디폴트 생성자는 호출되지 않는다
                MyClass obj2(100, 200);		// 생성과 초기화는 같이 못하지만 2개의 초기화를 받는 걸 생성해야 가능
                obj2.printData();	

                return 0;
            }
            ```
- 문자열 처리하기 [C++](./Day2/문자열처리하기.cpp)
    - 문자열은 주소니까 포인터를 쓴다고 생각
    - 선언
        ```C++
        int main()
        {
            char str[20] = "웅나나";
            cout << str << endl;

            char str2[20];
            //str2 = "김영희";		// 배열이름은 주소다 > 주소에 문자열을 못넣음
            strcpy(str2, "김영희");	// 변수 선언 후 상수나 변수로 문자를 입력받으면 복사해서 넣으면 됨.
            cout << str2 << endl;


            //char* str3 = nullptr;  // 이런식으로는 못함
            char str3[100];			//  문자열을 저장하는 공간
            cout << "이름입력 >> ";
            cin >> str3;
            cout << str3 << endl;

            const char* name;		// 포인터로 문자열 입력 const
            name = "김철수";		
            cout << name << endl;

            //	name = str2			char str2[] = "김영희";

            return 0;
        }
        ```
- 변수 초기화 [C++](./Day2/init.cpp)
    - 선언 
        ```C++
        int main()
        {
            int num = 3;			// c 스타일 . 복사 초기화 : 3을 복사해서 num에 넣기
            int num2(30);			// C++ 스타일. 직접 초기화 : 함수 호출 같은모양
            int num3{ 300 };		// 중괄호 직접 초기화: 함수 모양같아서 이래만듬?
            int num4 = { 3000 };	// 중괄호 복사 초기화 

            int x = 3.14;
            int x1{3.14};

            cout << num << endl;
            cout << num2 << endl;
            cout << num3 << endl;
            cout << num4 << endl;
            cout << x << endl;
            cout << x1 << endl;

            return 0;
        }
        ```
- 멤버 초기화 - 콜론초기화 사용 [C++](./Day2/init4.cpp)
    - 콜론초기화 : 메서드가 실행되기전에 선언부분에서 초기화가 된다.
        - 멤버-> 클래스와 관련된 개념
            - 멤버를 매개변수로 초기화해라
        1. 상수 멤버변수 초기화 : const는 상수취급이라 값이 변경이 불가능하다 그래서 선언과 동시에 초기화 
        2. 레퍼런스 초기화 : `int& ref` 이런식도 써야함
        3. 객체를 멤버로 가지는 경우
        - 선언
            ```C++
            class ConstClass {
            private:
                int m_value;
                const int m_value2;			// const는 상수취급이라 값이 변경이 불가능하다 그래서 선언과 동시에 초기화해야한다
                                            // 상수 멤버변수는 객체 생성되기 전에 반드시 초기화가 되어야 한다. --> 콜론 초기화
            public:
                ConstClass(int value, int value2) : m_value2(value2){ m_value = value;}		// 생성전에 초기화
                                // ": m_value2(value2)" 가 초기화 
                                // 맴버변수m_value2를 매개변수value2로 초기화해라
                                // { m_value = value;} 이것도 초기화임 ㅇㅇ
                void showValue() {
                    printf("value: %d, m_value2: %d\n", m_value, m_value2);
                }
            };
            ```
## 3일차
- 생성자
    - 복사 생성자 
        - 생성자에서 자동적으로 하는 기능으로 생성문을 1개만 만들어도 호출은 여러번 가능하다 [C++](./Day3/copyconstructor.cpp)
        - 자신과 같은 타입의 객체를 인자로 받는다.
        - 복사 생성자가 정의되어 있지 않다면 디폴트 복사 생성자가 생성된다.
        - 복사 생성자는 객체를 `&`으로 참조한다 [C++](./Day3/copyconstructor2.cpp)
        - 선언
            ```C++
            Person(const Person& other) {		// 복사생성자 / 객체를 복사해서 새로운 (함수)를 만든다/ Person&은 객체를 참조한다
            printf("copy constructor!!\n");		// 이게 실행되면 복사생성자가 만들어짐
            this->age = other.age;			
            strncpy(this->name, other.name, strlen(other.name) + 1);
            ```
    - 변환 생성자
        - 다른 타입의 객체로 변환될때 호출되는 생성자. 타입을 한개만 가지는 생성자 [C++](./Day3/변환생성자1.cpp)
        - 선언 
            ```C++ 
                explicit MyClass(int value) {					// explicit 묵시적으로 변환이 일어나는걸 방지함
                printf("변환 생성자 호출!!");
                this -> value = value;			// 변환생성자 int인데 MyClass로 바뀌었는데 정수형 10이 나온다
            }   // int타입의 클래스가 마이클래스 타입으로 바뀜 > 타입이 같아야 호출이 되지만 타입을
                // 마이클래스로 바꿔서 위에있는 마이클래스가(변환생성자가) 작동함
            int main(){
                //MyClass obj = 10;		// 변환생성자 호출 -- 객체의 변환이 일어남 / explicit를 썼기때문에 오류가남
	            //obj.printMyClass();	// 
                
                MyClass obj2 {10};		// 인자 값을 하나만 받는 것 
                obj2.printMyClass();		// obj가 value 값이 된다 > 10
            }
            ```
        - 묵시적 변환을 통해 임시 객체가 생성될 가능성을 가지고 있다 > 
	    - 묵시적 변환: 어떠한 함수가 있을때 이 함수의 매개변수의 자료형이 객체라면 실인수의 값은 자료형에 맞는 객체를 대입해야 정상적으로 작동하는데 
	       변환 생성자의 경우 묵시적 변환을 통해서 그 객체가 아닌 객체가 가지고 있는 멤버의 타빙으로도 생성자의 호출이 이루어지는 경우를 말한다.
    - 이동 생성자 [C++](./Day3/moveCon2.cpp)
        - 이동생성자는 `&&`참조 연산자로 상수를 호출할 수있다 
        - 선언 
            ```C++
                class Human {
                char name[10];
                int age;
            public:
                Human(Human&& other) noexcept {	//noexcept 예외를 발생할수없는 함수 / &&을 붙여서 사용
                    printf("이동 생성자 호출\n");
                    strcpy(this->name, other.name);
                    this->age = other.age;
                }
                	void printHuman() {
                    printf("name: %s, age: %d\n", this->name, this->age);
                }
            };
            int main()
            {

                Human h3(move(h));		// 이동생성자를 통해서 출력 - 선언: (std::move(h)); 
                h3.printHuman();		// 복사랑 다르게 마냥 이동만해서 빠르다.?
            }
            ```
- 지역변수 
    - static: 클래스 맴버이다 this 포인터가 없다. [C++](./Day3/static.cpp)
    - 스테틱은 객체들에서 공유후 모든 객체들이 바뀐다.
    - 선언  
        ```C++
        class StaticTest {
        public:
            int n;
            static int static_n;			//static 멤버 변수
            StaticTest();
            void print();
        };
        int StaticTest::static_n = 10;// 스테딕테스트에 있는 스테틱엔을 넣어라 / static멤버 변수 초기화는 클래스 외부에서 이루어져야한다.
        StaticTest::StaticTest() {
            n = 20;
            //static_n = 10;
        }
        void StaticTest::print() {
            cout << "Static_n: " << static_n << "n: " << n << std::endl;
        }

        int main()
        {
            StaticTest ob1, ob2;
            ob1.print();      // Static_n: 10  n: 20
            ob2.print();      // Static_n: 10  n: 20
            ob2.static_n = 1000;    // 스테틱 값변경
            ob2.n = 50;             // 스테틱 값변경
            ob2.print();	// Static_n: 1000  n: 50		
            ob1.print();    // Static_n: 1000  n: 20  여기n은 스테틱에 포함되어있지 않아서 변경이 안됨

            return 0;
        }
        ```
    - 다중정의
        - 연산자 오버로딩 [C++](./Day3/operator.cpp) 
            - 클래스에서 연산자를 정의하고 
            - 복사 생성자와 유사함 (중요)
            - 
        - add메서드와 복사 생성자를 만들기 [C++](./Day3/operator2.cpp) 
        - 선언  
            ```C++
            #include <iostream>

            class Point {
            public:
                int x, y;
                Point(int ax = 0, int ay = 0): x{ ax }, y(ay) {
                    printf("constructor coll!\n");
                }
                void showPoint() {
                    printf("x: %d, y: %d\n", x, y);
                }
                Point add(const Point& other) {
                    printf("add() call!!\n");
                    return Point(x + other.x, y + other.y);
                }
            };

            int main()
            {
                Point obj(10, 20);
                obj.showPoint();

                Point obj2(30, 40);
                obj2.showPoint();

                Point obj3;		        //obj객체가 생성
                obj3 = obj.add(obj2);	// 포인터 타입의 출력이있어서 포인터를 쓴다 받으려면 참조가 필요하다
                obj3.showPoint();		

                return 0;
            }
            ```

## 4일차
- 다중연산자 계속...

    - 오버로딩 (다중성) : 다중정의 생성자 [C++](./Day4/operator.cpp)
        - 연산자 오버로딩 (다중성)[C++](./Day4/operator.cpp)
            - 아무조건 없이 내가 만든 객체에 대해서 복사해서 다른 객체에거 넣는것 `ex) obj = obj2`
        - 객체를 더하는 함수 자성 [C++](./Day4/operator2.cpp)
        - 객체가 가리키는 값(참조를 리턴)을 더할수도있다 [C++](./Day4/constructor3.cpp)
            - 멤버함수 연산자 오버로딩 p1 `operator 연산자(p2)` > p1객체를 p2에 더한다  예시 `ex) p1 operator+(p2)` 
            - 사용자가 만든 객체가 객체를 대입 가능 한건 오버로딩으로 가능하다
            - 객체의 값과 객체의 값을 더하는건 불가능하다 
            - 참조를 리턴한다면 생성이나 복사가 이루어지지 않고 가상의 공간에서 더해지거나 만들어진다
        - 오버로딩을 할수 없는 연산자 : '::', '.' , '*', sizeof 는 생성불가능하다
- 전역함수
    - 전역함수 오버로딩 [C++](./Day4/operator5.cpp)
        - 지역변수와는 다르게 전역변수는 받은 값만 출력됨 
        - 전역변수는 어디에도 속하지 않음 단지 선언한 부분에만 적용
        - static(지역변수)처럼 값을 바꾸면 연동되어있는 값까지바뀌는거와 달리 각가의 선언문들은 연동되어있지 않다
        - oprator앞에 inline을 붙여서 전역변수를 한번 사용하고 다시 사용할수 있게 하준다 
        - oprator 선언 
            ``` C++
            inline Point operator+(int n, const Point& other) { // 전역함수		  //inline은 함수를 내부의 코드를 다시 실행가능 
	        return Point(n + other.x, n + other.y); 
            ```
        - oprator 선언해서 객체와 정수값을 더하는게 가능 [C++](./Day4/operator6.cpp)
         
        	/*함수 원형에 friend 선언을 하면 private또는 protected 멤버의 접근이 허용된다.*/
	        friend Complex operator*(int n, const Complex& other);		
	        friend std::ostream& operator<<(std::ostream& out, const Complex& other);
- 매크로 함수 [C++](./Day4/inline.cpp), inline:  [C++](./Day4/inline2.cpp)
    - 매크로함수는 전처리가 처리하며 속도가 컴파일 보다 빠르다 
    - 매크로 함수는 `#`전처리가 하지만 `inline`함수는 컴파일러가 처리한다.
    - 매크로 함수는 대부분 대문자로 작성한다.
    - 선언
        ```C++
        #include <iostream>

        #define ADD(a, b)	# a"+" #b			//#은 매크로기능이다, 전처리
        #define PI			3.14				// 전처리는 매우빠르다
        #define MSG(x, y, z)	x ## y ## z
        int main()	
        {
            printf("ADD(a, b) %s\n", ADD(10, 20));
            printf("MSG(x, y, z): %s\n", MSG("macro+", "orperator", "test"));

            return 0;
        }
        ```
    - 함수 탬플릿
        - 여러가지 자료형을 템플릿 인자로 받아 함수 내부에서 활용한다.
        - 다형성과 재활용이 특징이다 
        - 탬플릿은 선언과 함수정의가 분리 될수 없다.
        - 탬플릿에 typename를 작성하지 않으면 출력부분에 명시적으로 타입을 작성해야함
        - 탬플릿의 매개변수가 여러개인경우는 typename를 넣을갯수만큼 만든다
        - 선언 
            ```C++
            /*템플릿 적용*/
            template <typename T>		// T를 템플릿해서 인자를 
            T Add(T a, T b) {           // 윗줄처럼 탬플릿 선언과 동시에 함수를 정의해야한다.
                return a + b;
            }
            int main()
            {
                std::cout << Add(10, 20) << std::endl;
                std::cout << Add(1.1, 2.2) << std::endl;

                return 0;
            }
            /*특수한 경우의 탬플릿*/
            template <typename T>			//템플릿 선언(일반화) 선언 : template <typename 선언이름>
            T func(T a, T b) {				// 템플릿 함수
                cout << "type: T" << endl;
                return a + b;
            }
            ```
        - typename 를작성하지 않은경우
        - 선언
            ```C++
            /*typename 를작성하지 않은경우*/
            template <>							// 내가 지정하고 싶은 타입이 있으면 typename 을 아지않고  출력에서 명시한다 
            int func <int>(int a, int b) {		// 템플릿 특수화 - 템플릿 일반화중 특별한 타입만 처리할 경우 // 
                cout << "type: <int>" << endl;	// 명시적으로 인트가 자료형으로 포함되어있음
                return a + b;					
            }

            int manin()
            {
                cout << func(10, 20) << endl;
                cout << func(10.5, 20.5) << endl;

                cout << func<double>(10.1, 20.2) << endl;	// 이게 원칙적으로 
                cout << func<char>(100, 10) << endl;		// 명시적으로 <타입>으로 작성해도됨

                return 0;
            }
            ```
        - 템플릿 매개변수가 여러개인경우
        - 선언
            ```C++
            #include <iostream>
            using namespace std;

            template <typename T, typename T2>	// 템플릿이 여러개인 경우 typename을 붙인다
            void func(T a, T2 b) {				// 매개변수 이름은 'T a'는 rhs 'T b'는 lhs
                cout << a << endl;
                cout << b << endl;
            }
            int main()
            {
                func(10, 3.14);
                func("Template", 3.14);
                func<const char*, double>("Hello", 3.1415);


                return 0;
            }
            ```
        - 클래스 템플릿 : 탬플릿을 자료형으로 변경해두려면 이런식으로 작성해야함
        - 기존 클래스와 동일한 구조로 작성함
            - 선언
                ```C++
                #include <iostream>

                template <typename T>       // 탬플릿은 함수 선언과 동시에 함수를 정의해야함
                class CTemplate {           //클래스 형태로 작성해서 
                private:
                    T data;
                public:
                    CTemplate(T d) { data = d; }		// T타입에 d를 넣음  함수 선언과 정의를 같이함
                    T getData() { return data; }
                };

                int main()
                {
                    CTemplate<int> obj(100);
                    printf("data: %d\n", obj.getData());

                    CTemplate<std::string> obj2("클래스 템플릿 테스트");
                    std::cout << obj2.getData() << std::endl;

                    return 0;
                }
                ```

        - 클래스 탬플릿 선언시 typename를 작성해야한다
            - 선언 
                ```C++
                #include <iostream>

                template <typename T>       // 기본적으로 작성하는 방법
                class CTest {
                private:
                    T num;
                public:
                    CTest(T n): num(n){}
                    T getData() { return num; }
                };

                template <>				//클래스 템플릿의 특수화
                class CTest<char> {		// <타입> 특수한 타입
                private:
                    char data;
                public:
                    CTest(char d) : data(d) {}
                    char getData() { return data; }
                };

                int main()
                {	
                    CTest<int> obj(10);		//클래스 템플릿은 반드시 인스턴스 생성시 typename을 작성해야한다.  <int>를 꼭 작성해야한다
                    std::cout << obj.getData() << std::endl;

                    CTest<int> obj2('a');		//클래스 템플릿은 반드시 인스턴스 생성시 typename을 작성해야한다.  <int>를 꼭 작성해야한다
                    std::cout << obj2.getData() << std::endl;
                    return 0;

                }
                ```
        - 탬플릿 매개변수: 쓰기기능이 있는 함수
        - 템플릿 매개변수는 직접 초기화도 가능하다 `int, char,....`
            ```C++
            #include <iostream>
            using namespace std;

            template <typename T, int sz>	// 매개변수는 직접 초기화가 가능하다
            class CTest {
            private:
                T ary[sz];
            public:
                T& operator[](int idx) {		// 쓰기 가능 인덱스
                    if (idx < 0 || idx >= sz) {
                        cout << "Error" << endl;
                        exit(1);
                    }
                    return ary[idx];
                }
                void getData() {
                    for (int i = 0; i < sz; i++) {
                        cout << ary[i] << endl;     // 배열의 첫번째 주소는 이름이다
                    }
                }
            };

            int main()
            {
                CTest<int, 5> obj;
                obj.operator[](0) = 10;			// 10의 값을 읽어들어옴
                obj[1] = 20;
                obj[2] = 30;
                obj[3] = 40;
                obj[4] = 50;
                
                obj.getData();

                cout << obj[0] << endl;

                return 0;
            }
            ```

    - 단항연산자 
        - 단항연산자 오버로딩: 반환형 > `operator[연산자]()` 이런식으로 쓴다
            - 선언 
                ```C++
                #include <iostream>

                class Money {
                private:
                    int money;
                public:
                    Money(int m = 0): money(m){}        
                    int operator()() {      // 반환형 연산자
                        return money;
                    }
                    void operator()(int m) {
                        money += m;
                    }
                };

                int main()
                {
                    Money m;
                    printf("money: %d\n", m.operator()());
                    m(1000);					//출력을 이래해도됨
                    printf("monet: %d\n", m.operator()());	
                    m.operator()(1000);			// 이게 정석임 
                    printf("monet: %d\n", m.operator()());		

                    return 0;
                }
                ```
## 5일차 

- Inheritance(상속) : 부모에서 부터 자식에게 물려준다 [C++](./Day5/inheritance.cpp)
    - 클래스를 생성할때 `: 접근제어자 상속받을클래스` 로 설정하다.
    - 자식 클래스의 인자는 부모에서 부터 받는 인자와 사신의 인자를 같이 작성한다 
    - 접근 제어자를 private로 설정하면 자식클래스에서 호출해서 사용이 불가능하지만 [C++](./Day5/inheritance2.cpp)
        prorected를 사용하면 자식 클래스에서도 호출이 가능하다.
    - 상속관계에서는 이니셜라이즈를 사용하는게 좋다 [C++](./Day5/inheritance3.cpp)
        - 선언 : `class 기본클래스(부모클래스) : 접근지시자 파생클래스 (자식클래스){}`
        ```C++
        public:
        Car(int ag) : gasolineGaug(ag) {}		// 콜론초기화(이니셜라이즈) gasolineGaug(ag)는 ag로 초기화한다 
        int getGasGauge() { return gasolineGaug;
        ```
    - 상속관계에서 객체 생성은 생성이 끝난후에 소멸이 일어난다 [C++](./Day5/inheritance4.cpp)
        - 객체를 생성할때 호출되는 생성자와 생성자의 샐행은 다르다 즉 생성자의 호출과 생성의 실행은 다르다
    - 객체 포인터: 포인터다 > 객체를 가리키는 포인터이다 [C++](./Day5/objPointer.cpp)
        - 객체 포인터에 접근하려면 ->(에로우)로 함수를 지정하여 값을 출력한다 
            - 선언 : `객체-> 함수()` 이러면 객체로 함수의 값을 출력한다 
    - 객체의 동적 생성 [C++](./Day5/objPointer2.cpp)
        - 객채의 동적생성 - 선언은 `클래스* 객체 = new 클래스이름{};` 식으로 한다 
    - 포인터를 통해서 접근할때는 `->(애로우)`를 쓰거나 `역참조(*ptr).` 를 써야한다 [C++](./Day5/objPointer3.cpp)
        - ex `ptr->` 과 `(*ptr)` 은 같은 뜻이다
    - 객체 포인터를 초기화하는 방법 [C++](./Day5/objPointer4.cpp)
        - nullptr로 초기화하면 가독성과이 좋아지고 오류가 덜난다 
    - 상속에서 객체 포인터 [C++](./Day5/objPointer5.cpp)
        - 오버라이딩이 가능
        - 업캐스팅: 부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업캐스팅 된다. [C++](./Day5/objPointer5.cpp)
            - 예시로 부모는 자식을 손가락질 해도되지만 자식을 부모를 손가락질하면 안됨 하지만 출력은 부모의 객체에있는걸 출력함
        - 다운캐스팅: 자식 포인터로 부모 객체를 가릴킬 수는 없다 [C++](./Day5/objPointer6.cpp)
            - 부모타입을 일시적으로 자식으로 만들어서 가리키는건 가능하다 
        objPointer7부터 하면됨

- 가상클래스 virtual function [C++](./Day5/virtual.cpp)
    - 메서드 작성시에 작성함 
    - virtual을 사용하면 포인터 타입에 따른 함수가 아니라 저장한 객체의 함수를 호출하도록 할 수있는 것
    - virtual이라는 키워드가 있으면 가상에만 존재하고 상속되어있는 값을 넘어간다.
    - 파생클래스에서 재정의할 것을 약속받은 멤버함수를 말하며 Base 클래스의 멤버 함수에 virtual 키워드를 사용하여 만든다.
    - 객체 포인터의 다형성으로 기초 클래스 타입의 포인터로 파생 클래스의 객체를 가리키면 접근은 기초 클래스 멤버로 제한된다.
        애때 오버라이딩된 파생 클래스의 멤버를 사용하기 위해서는 기초 클래스의 멤버 함수를 가상함수로 만들면 된다.
        이것은 컴파일시 포인터형으로 바인딩되지 못하고 런타임에서 포인터가 어떤 객체를 가리키고 있는지에 따라서 바인딩할 함수를 결정한다.
    - 선언 
        ```C++
        class Base {
        public:
            virtual void func1() { cout << "B::func1()" << endl; }		// 가상함수화 : virtual이라는 키워드를 앞에 붙이면 됨
            virtual void func2() { cout << "B::func2()" << endl; }		// 가상함수화
            void func3() { cout << "B::func3()" << endl; }
        };
        class Derived : public Base {
            void func1() override{ cout << "D::func1()" << endl; }		// override키워드는안써도되지만 가상함수를 재정의하는 멤버함수를 나타낸면 가시성이 좋아진다
            void func3() { cout << "D::func3()" << endl; }
            void func4() { cout << "D::func4()" << endl; }
        };

        int main()
        {
            Base b;
            Derived d;
            Base* bptr = new Derived();			// 업케스팅 / 자식타입을 동적할당 정의를 하고 부모타입의 포인터 타입으로 불러옴 / 이러면 문제없음

            bptr->func1();			//base클래스의 func1() 은 가상함수로 선언되어 Derived 클래스의 fucn1() 호출된다./ D::func1()
            bptr->func2();			//base클래스의 func1() 은 가상함수로 선언되었지만 오버라이딩(재정의)이 되지 않았다./ B::func2()
            bptr->func3();			//포인터 타입의 호출 함수가 결정된다. /B::func3()

            //bptr->func4();		//객체 포인터가 가리키는 값을 벗어난다.

            delete bptr;
            bptr = &b;
            bptr->func1();          //B::func1()
            bptr->func2();          //B::func2()
            bptr->func3();          //B::func3()

            return 0;
        }
        ```
    - virtual Class [C++](./Day5/virtual2.cpp)
        - 순수 지정자: 
            - 순수 지정자를 가지는 메서드를 순수 가상 함수라 하며, 이 순수 가상 함수를 가지는 클래스
            - 또한 추상클래스는 객체를 생성 할수 없다 - 순수가상 함수 대문에 
            - 순수 가상함수는 상속 받은 클래스는 오버로라이딩(재정의)가 필수다!!!!
        - 선언
            ```C++
            #include <iostream>

            class Cinterface {
            public:
                Cinterface() { std::cout << "CInerface constructor" << std::endl; }
                virtual void getData() const = 0;	//메서드 작성/ 순수 가상 함수> =0 /const = 0;는 몸통자체가 없다 == 객체를 생성할 수없다.
                                                    // 순수 가상함수는 몸체가 없어서 오버라이딩을 꼭해서 작성해라 라는 뜻

            };
            class CinSub : public Cinterface {		// 순수 가상함수 == 상속한놈은 나를 재정이하라 
            public:
                CinSub() { std::cout << "Cinsub constructor" << std::endl; }
                void getData() const override {				// 순수 가상함수는 오버라이딩을 꼭해야한다/ 재정의를 해야 출력이 가능하다 
                    std::cout << "Pure Virtual function()" << std::endl;
                }
            };

            int main()
            {
                //Cinterface obj;
                CinSub obj;
                obj.getData();
                return 0;
            }
            ```
    - 추상 자료형
        - 추상 자료형을 이용해서 동적 할당된 객체를 참조할때는 메모리 해제 시 참조 타입의 소멸자만 호출되어 메모리 누수가 발생한다
            따라서 상위 클래스의 소멸자를 가상으로 만들어 실타입의 소멸자 호출을 유도한다 
            - 선언 
                ```C++
                #include <iostream>
                using namespace std;

                class CTest {
                private:
                    int num;
                public:
                    CTest(int anum) : num(anum) { cout << num << " CTest consturctor" << endl; }
                    virtual ~CTest() { cout << num << " CTest destructor" << endl; }		// 가상 소멸자 - 앞에다가 virtual을 넣어 메모리 누수를 막을수있다
                    virtual void Vfunc() { cout << "CTest virtual function()" << endl; }
                    void func() { cout << "CTest function()" << endl; }
                };
                class CTestSub :public CTest {
                private:
                    int subN;
                public:
                    CTestSub(int an1, int an2) : CTest(an1), subN(an2) { cout << subN << " CTestSub cnostructor" << endl; }
                    ~CTestSub() { cout << subN << " CTestSub destructor" << endl; }
                    void Vfunc() { cout << "CTestSub function() override" << endl; }
                };

                int main()
                {

                    CTest obj(1);
                    cout << "=======================================" << endl;
                    CTestSub obj2(2, 22);
                    cout << "=======================================" << endl;
                    obj.func();
                    obj.Vfunc();
                    cout << "=======================================" << endl;
                    obj2.func();			// 자식 클래스의 함수가 없으면 부모클래스의 func()함수를 물려받아서 출력하고 
                    obj2.Vfunc();			
                    cout << "=======================================" << endl;

                    CTest* ptr = new CTestSub(3, 33);		// 객체 동적할당시 생성은 이루어지지만 삭제가 이루어지지않음 (제대로 삭제가 안됨 문제 발생) - 메모리 누수
                                                            // 메모리 누수가 발생시 삭제 메개변수앞에 virtual을 넣는다
                    delete ptr;

                    return 0;
                }
                ```
    - 스테틱  [C++](./Day5/static_cast.cpp)
        - static_cast은 기본적으로 형변환을 하기위해 사용함 
        - 또한 업캐스팅과 다운캐스팅으로 부모자식간의 상속을 좀더 원활하게 하기위해서다.

        - `static_cast<type-id>` 으로 선언 : 기본 자료형의 형변환으로 컴파일 타임에 타입을 변환 
            ```C++
            #include <iostream>

            int main()
            {
                char ch;
                int i = 100;
                float f = 3.14;
                double d = 2.345;

                ch = static_cast<char>(i);				//int -->> char 변환 / 정수의 해당하는 i인 100이 아스키코드의 문자로 변경되면 'd'가 나온다 
                std::cout << ch << std::endl;
                ch = (char)i;							// C언어 스타일
                std::cout << ch << std::endl;


                d = static_cast<double>(f);				// float타입의 f인 3.14를 double타입으로 변경함
                std::cout << d << std::endl;

                i = static_cast<int>(d);
                std::cout << i << std::endl;			// 3이 나온다 자기보다 높은 값이 나오면 뒤는 안나온다 

                std::cout<< typeid(ch).name() << std::endl;		// 타입을 알고 싶을때 ch의 타입이 뭐냐 
                std::cout << typeid(d).name() << std::endl;

                return 0;
            }
            ```
    - static_cast 업,다운 캐스팅 [C++](./Day5/static_cast2.cpp)       
    - 업캐스팅:  부모클래스 포인터로 자식클래스 객체를 가리키는 것 (일반적으로 가능) ex) `부모클래스-> 자식클래스` 이건 가능 
    - 다운캐스팅: 자식클래스 객체가 부모클래스를 가리키지는 못하나 동일한 타입의 포인터가 동일한 타입을 가리키는 것 ex)`자식클래스 -> 부모클래스` 이건 불가능


### 6일차

- dynamic_cast [C++](./Day6/dynamic.cpp)
    - 기봄클래스를 참조하는 lvalue를 파생된 클래스에 대한 참조로 변환
    - 상속관계에서 안전하게 형변환을 지원한다. 업캐스팅
    - 다운캐스팅의경우는 다형성을 위해서 virtual 메서드가 꼭있어야한다
    - dynamic_cast은 static_cast이랑 같은 내용이지만 static보다 좀더 안정적으로 변환이 가능하다
        - dynamic의 다운캐스팅의 경우 가상함수가 있어야한다 
- const_cast [C++](./Day6/const_cast.cpp)
    - const 선언을 해제한다.
    - const_cast를 선언하여 const는 상수화시킨 값을 해지한다
    - class로 const를 가리킬때 
        - 선언 
            ```C++
            #include <iostream>
            using namespace std;

            class MyClass {
            private:
                int num;
            public:
                void setNum(int n) { num = n; }
                void printf()const {
                    cout << "Befoer: " << num;
                    //num++;						// const 메서드로 이루어진 메서드여서 못씀
                    const_cast<MyClass*>(this)->num--; //const_cast 키워드는 const를 해제시켜서 포인터로 접근해서 값을 감소시킴
                    cout << " after: " << num <<endl;
                }
            };

            int main()
            {
                MyClass obj;
                obj.setNum(10);
                obj.printf();

                return 0;
            }
            ```
- reinterpret_cast [C++](./Day6/reinterpret.cpp)
    - 포인터-> 포인터, 포인터를 -> 변수, 변수-> 포인터로 변환함. 주로 포인터 관련 연산자.
        - 선언 
            ```C++
            int main()
            {
                int* ip = new int{ 10 };
                long lg = reinterpret_cast<long>(ip);				// int* --> long
                unsigned int ui = reinterpret_cast<int>(ip);		// int* --> uint 
                printf("ip: %u, lg: %u, ui: %u\n", ip, lg, ui);

                //int* p = reinterpret_cast<int*>(lg);			//long-->int* 다운캐스팅은 64비트에서는 안됨
                int* p1 = reinterpret_cast<int*>(ui);			// 위에있는 64비트를 84로 바꾸면 가능 문법사으이 오류는 없는음 버전이 넘어가면 바뀐거라 문제는 없음
                printf("p: %d\n",*p1);				

                int* p = new int{ 100 };
                char* pc = reinterpret_cast<char*>(p);
                printf("c: %c\n", *pc);					// int* --> char*

                //delete p;

                int* p2 = reinterpret_cast<int*>(pc);	// char* -->int*
                printf("p: %d\n", *p);

                return 0;
            }
            ```
    - tempobj 
        - 임시객체 [C++](./Day6/tempobj.cpp)
            - 임시객체는 이름이 없는 객체다.
            - 변경이나 명시하지 않으면 바로 다음행에서 사라진다.
            - 또한 임시객체는 참조를 사용할 수 없다.
                - 선언
                    ```C++
                    int main()
                    {	
                        MyClass obj{ 10 };                  // 기본적인 객체 선언 /MyClass 라는 타입의 obj객체를 10으로 지정한다 라는 뜻
                        MyClass obj2 = MyClass{ 20 };		// MyClass{ 20 }은 이름(객체)없는 임시객체를 복사해서 저장한다는 뜻임
                        MyClass{ 30 };						// MyClass{ 30 }은 30이라는 임시객체
                                                            // 이름없는 객체는 변경하거나 명시하지 않으면 바로 다음행이 실행되거나 바로다음행으로 넘어가면 삭제됨
                        cout << "bye~~" << std::endl;

                        return 0;
                    }

                    ```
        - 임시객체 참조 불가능 [C++](./Day6/tempobj2.cpp)
            - 선언 
                ```C++
                int main()
                {
                    //MyClass* ptr = &MyClass{ 10 };
                    //MyClass& obj2 = MyClass{ 20 };			// 애는 참조가 안된다 /임시객체는 참조를 사용할 수 없다.

                    MyClass obj = MyClass{ 10 };				// 임시객체주소를 바로 참조해서 사용해서 삭제는 바로 삭제는 안된다 
                    obj.setData(20);							// 일이 다끝나고 20이라는 값을 삭제한다.

                    MyClass&& obj2 = MyClass{ 20 };			// &&는 rvalue를 참조한다는 소리
                    obj2.setData(22);						//

                    const MyClass obj3 = MyClass{ 30 };     
                    //obj3.setData(33);						// 상수참조를 하므로 값변경은 불허한다. 그래서 setData가 안됨

                    cout << "Bye~~" << endl;				// 임시객체를 변경하거나 참조했기때문에 바로 삭제 되지않고 일이 다 끝난후에 삭제된다.
                    
                    return 0;
                }
                ```
        - 임시객체 copy는 그냥 보면될듯? [C++](./Day6/tempobj3.cpp)

    - 스마트포인터 : unique_prt [C++](./Day6/unique_prt.cpp)
        - 객체의 생명주기를 객체에 맡김으로 프로그래머와의 메모리 관리 부담을 줄여준다 
        - 스마트 포인터를 메모리를 동적으로 할당되어있는 값을 자동으로 해지시켜준다
            - 선언 
                ```C++
                #include <iostream>
                using namespace std;

                class MyClass {
                public:
                    MyClass() { cout << "MyClass() 호출" << endl; }
                    ~MyClass() { cout << "~MyClass() 호출" << endl; }
                };
                int main()
                {
                    unique_ptr<MyClass> ptr(new MyClass{});	//스마트 포인터 선언 cast선언자와 비슷한 구조로 선언 /unique_ptr<MyClass>키워드를 선언하면 동적할당인 new를 선언후에 해제를 하지 않아도된다.
                    unique_ptr<MyClass> ptr2= move(ptr);

                    return 0;
                }
                ```
    - 객체 공유
        - make_shared와 shared_ptr [C++](./Day6/shared_ptr.cpp)
            - make_shared: 객체와 참조 카운트를 하나의 메모리블록에 같이 할당시킨다. shared_ptr을 생성하는 함수다 
            - shared_ptr: 참조 카운트를 통해 객체 의 소유권을 공유한다. 여러개의 shared_ptr이 객체를 참조할수 있으며 레퍼런스 
                카운트가 0이되면 메모리가 자동해제 된다.
                - 참조 카운트 : 객체가 자기자신을 가리키는 포인터를 세는카운트. 이게 0이면 객체를 삭제한다.
        - weak_ptr [C++](./Day6/weak_ptr.cpp)
            - 레퍼런스(&) 카운트에 영향을 주지않는 스마트 포인터
        - weak_ptr의 순환참조 [C++](./Day6/weak_ptr2.cpp)
            - 두개의 객체가 서로를 참조하고 둘가 shared_ptr을 사용하여 참조를 유지하는 경우에 발생이경우에는 서로가 서로를 참조하여
                0이되지 거나 끝나지 않아 메모리 누수가 발생한다
            - 두개중의 하나의 shared_ptr를 weak_ptr로 바꿔주면 순환 참조가 발생하지 않는다 
                - 선언
                    ```C++
                    #include <iostream>

                    struct B;
                    struct A {
                        std::shared_ptr<B> b_ptr;
                    };
                    struct B {
                        //std::shared_ptr<A> a_ptr;		// 이래쓰면 객체가 소멸되지 않고 계속돈다 
                        std::weak_ptr<A> a_ptr;		//weak_ptr 를 쓰면 순환참조가 끊어진다 
                    };
                    int main()
                    {
                        std::shared_ptr<A> a(new A());
                        std::shared_ptr<B> b(new B());

                        a->b_ptr = b;			// 순환참조
                        b->a_ptr = a;

                        return 0;
                    }
                    ```
    - 스텐다르 표준탬플릿 은 보다 더 C++을 사용하기 쉽게 하는 템플릿이다.
    - 탬플릿이라고 말하면 다형성이 먼저 나와야한다. 
    - STL(Standard Template Library)
        - container : 객체를 저장하고 관리하는 자료구조 
            - conrainer(컨테이너) 종류
                1. 시퀀스 컨테이너 - 선형적으로 데이터를 저장(순서)
                    대표적인거: vector,list,queue ex) 배열, 리스트
                2. 연관 컨테이너 - 일정한 규칙으로 저장 
                    대표적인거: set,multiset,map, multimap ex) 키,벨류
                3. 컨테이너 어댑터(참고만하자) - 변형
            

            - vector : 다루기 쉬운 배열 
            for (auto i : v3 ) // 범위기반 for문 / v백터 v3의 값을 auto i의 값에 다가 저장한다 하는 뜻
            - [C++](./STL/vector.cpp)
                vector.size(): 원소 크기(갯수)를 반환 
                vector.begin(): 첫번째의 주소를 반환한다
                vector.end(): 마지막 주소의 다음주소를 반환한다

            - [C++](./STL/vector2.cpp)
                v.push_back(10): 마지막 원소 뒤에 10을 추가한다.
                v.insert(idx, val): idx번쨰 위치에 val을 넣는다.
                v.capacity(): 벡터에 할당된 메모리 크리를 리턴한다. - v.size()
                v.pop_back(): 마지막 원소제거 

                
            - vector container 출력 [C++](./STL/vector3.cpp)

                ```C++


                /* 출력 1 */
                for (auto i = 0; i < v.size(); i++) {
                    cout << v[i] << endl;
                    cout << v.at(i) << endl;	// at이라는 메서드를 호출하는 법. 함수호출처럼 가능/ 이게 좀더 안전하지만 느림
                }
                cout << endl<< endl; 

                /* 출력 2 */
                for (vector<int>::size_type i = 0; i < v.size(); i++) {  //벡러 라이브러리에있는 인트에 싸이즈타입 i를 쓴다
                    cout << v[i] << endl;
                }
                cout << endl << endl;

                /* 출력 3 */
                vector<int>::iterator iter;		// interator 반복자를 사용해서 출력
                for (iter = v.begin(); iter != v.end(); iter++) {
                    cout << *iter << endl;
                }
                cout << endl << endl;
                /* 출력 4 */
                for (auto i : v) {			// 인텍스 값출력 못하는거 빼면 편함
                    cout << i << endl;
                }
                ```
        
        - vector coniner - 삽입, 삭제, 참조 
            - 선언 
                ```C++
                void main()
                {
                    vector<string> v;
                    list<int> li;


                    v.push_back("tiger");
                    v.push_back("lionl");
                    v.push_back("웅나나");
                    v.push_back("방부웅나");
                    v.push_back("horse");

                    cout << "v.front(): " << v.front() << endl;		// front()는 맨첫번쨰 원소를 참조한다
                    cout << "v.back(): " << v.back() << endl;		// back()는 마지막 원소 출력
                    cout << "v.capacity: " << v.capacity() << endl;
                    cout << endl;

                    vector<string>::iterator iter;				//vector<템플릿>::iterator iter 템플릿만 바꾸면 다른 값도 적용가능하다.
                    for (iter = v.begin(); iter != v.end(); iter++) {
                        cout << *iter << "/";
                    }
                    cout << endl;
                    v.pop_back();				// 마지막꺼 삭제 
                    for (iter = v.begin(); iter != v.end(); iter++) {
                        cout << *iter << "/";
                    }
                    cout << endl;

                    for (iter = v.begin(); iter != v.end(); iter++) {
                        if (*iter == "웅나나") {
                            v.erase(iter); break;			//erase은 조건이 맞으면 삭제 
                        }
                    }
                    cout << endl;

                    for (iter = v.begin(); iter != v.end(); iter++) {
                        cout << *iter << "/";
                    }

                }
                ```
        - vector iterator : 순방향 반복자 
            - 선언 
                ```C++
                #include <iostream>
                #include <vector>
                using namespace std;

                void main()
                {
                    vector<int> v = { 10, 20, 30, 40, 50 };

                    vector<int>::iterator it;
                    for (it = v.begin(); it != v.end(); it++) {
                        cout << *it << endl;
                    }
                    cout << endl;

                    for (auto it = v.begin(); it < v.end(); it++) {		// it는 포인터이다 자동으로 어떤형태인지 해준다
                        cout << *it << endl;
                    }
                }
                /*
                    vector<int>::iterator iter은 순방향 반복자 선언.
                    근데 이놈을 생략하고 auto선언해도 된다.
                */
                ```
        - vector reverse_iterator: 역방향 반복자 선언
            - 선언 
                ```C++
                #include <iostream>
                #include <vector>
                using namespace std;


                void main()
                {
                    vector<int> v = { 10, 20, 30, 40, 50 };

                    vector<int>::reverse_iterator rit;		// 역으로 출력된다.
                    for (rit = v.rbegin(); rit != v.rend(); rit++) {
                        cout << *rit << endl;
                    }
                    cout << endl;

                    for (auto rit = v.rbegin(); rit != v.rend(); rit++) {
                        cout << *rit << endl;
                    }
                }

                /*
                    vector<int>::reverse_iterator rit - 역방향 반복자 선언 
                    이놈을 생략하고, auto로 선언해도 된다.
                    rbegin()은 마지막 주소, rend()은 처음 원소의 이전주소
                */
                ```

## 미니프로젝트 

### 깃허브 엑션(Github Action)
    - 이건 Workflow를 자동화 할 수 있도록 도와주는 도구 

    - Workfolw의 대표적인 예 
        1. Test Code 
            - ex) 특정 함수의 return 값이 어덯게 나오는지 확인하는 테스트 코드
            - ex) df의 타입이 pd.DataFrame이 맞는가?
            - ex) value1에 특정 값이 들어가는가?
            - 쿼리를 날리고 데이터가 맞는지 정합성 체크하는 것도 일종의 테스트 

        2. 배포
            - 서버에 새로운 기능 버전 등을 배포

        3. 기타 자동화하고 싶은 스크립트 
            - 주기적으로 데이터를 수집해서 처리

        4. 다양한 DIV버전에서 실행되는지 확인 

        CI/CD 랑 소프트 웨어를 배포하고 자동으로 업데이트 한다는 개념으로 알고있으면 됨
        CI(Continuous Intergration) : 지속적인 통합
        CD(Continuous Delivery)    : 지속적인 배포

#### Github Action Core 개념

- 이게 배포 목적인가 (메인)
- 아님 코드에 문제가 있냐 없냐는거 차선

- Github Action을 이해하기 위해서 알아야 하는 개념은 Workflow, Event, Job, Step, Action, Runner 등이 있음

    1. Workflow (요리책 (자장면을 만들수있는 레시피)) Event에서 발생한 처리를 어떻게 할건지 목록을 봄
        - 여러 job으로 구성되고 Evnest에 의해 트리거 될 수 있는 자동화된 프로세스 
        - 최상위 개념
        - Workflow 파일은 YAML으로 작성되고, Github Repository의 `.Github/workflows` 폴더 아래에 저장됨 

    2. Event (짜장면이 먹고싶다) 특정 이벤트가 발생하면 처리를 Workflow에 줌
        - WorkFlow를 Trigger(실행)하는 특정 활동이나 규칙
        - ex) 특정 브랜치로 push하거나 pull Requst하거나 특정 시간대에 반복(Cron)
        - Webhook을 사용해 외부 이벤트를 동해 실행 

    3. Jobs Workflow에서 받은 목록에서 어떻게 실행할껀지 보는거 
        - Job은 여러 Steo으로 구성되고 가상환경의 인스턴스에 실행됨
        - 다른 Job에 의존 관계를 가질 수 있고 독립적으로 병렬 실행도 가능함

    4. Step
        - Task들의 집합으로 커맨드를 날리거나 action을 실행할 수 있음 

    5. Actions : 깃허브에서 제공하는 명령어 
        - Workflow의 가장 작은 블럭(smallest portable building block)
        - Job을 만들기 위해 Step들을 연결할 수 있음 
        - 재사용이 가능한 컴포넌트
        - 개인적으로 만든 Action을 사용할 수도 있고, Marketplace에 있는 공용 Action을 사용 할 수 있음

    6. Runners : Jos을 실행하는 것 
        - VMRunner 라고도 부른다 
        - Github에서 호스팅해주는 Github-hosted runner와 직접 호스팅하는 Self-hosted runner로 나뉨
        - Githun-hosted runner는 Azure의 Standard_v2로 vCPU 2, 메모리 7GB, 임시 스토리지 14GB

    프로젝트 경로 안에 `.github/workflows/(어떤workflow인지 따라서 이름을 정하면됨.yml)` 라고 만들고 

    ```github action
    name: learn-github-actions // 어떤 월플로이인지 이름을 명시
    on: [push] // 커밋이 push 될떄마다 실행
    jobs: // jobs 들이 실행이 된다 위에서 부터 밑 순으로 실행
    check-bats-version: // 어떤일이 수행하는지 이름에 나와있음
        run-on: ubuntu-latest  // 어떤 VM머신을 사용할건지 (여긴 우분투의 최신버전을 사용해줘라는 뜻)
        steps:      //실행 순서: 위에서부터 아래로
            - uses: action/checkout@v3   // 깃허브에서 제공하는 checkout이라는 액션을 사용
            - uses: action/setup-node@v3   // 노드를 사용하는 액션 사용
              with: // 이걸로 밑에있는 노드 버전을 명시하고 있음
                node-version: '14'
            - run: npm install -g bats      // 쉘 스크립트를 작성함
            - run: bats -v

    ```
    





















