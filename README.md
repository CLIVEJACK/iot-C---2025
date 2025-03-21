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
- 매크로 함수 
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
        - 선언 
            ```C++
            /*템플릿 적용*/
            template <typename T>		// T를 템플릿해서 인자를 
            T Add(T a, T b) {
                return a + b;
            }
            int main()
            {
                std::cout << Add(10, 20) << std::endl;
                std::cout << Add(1.1, 2.2) << std::endl;

                return 0;
            }
            ```
        operator7.cpp 부터 작성

    





















