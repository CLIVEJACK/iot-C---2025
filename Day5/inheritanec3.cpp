///*
//	3. 상속관계에서 이니셜라이즈 사용하기
//	생성자를 생성할대 객체를 초기화하는 타이밍 중요!! 
//*/
//#include <iostream>
//using namespace std;
//
//
//class Car {
//private:
//	int gasolineGaug;
//public:
//	Car(int ag) : gasolineGaug(ag) {}		// 콜론초기화 gasolineGaug(ag)는 ag로 초기화한다 
//	int getGasGauge() { return gasolineGaug; }
//};
//
//class HybidCar : public Car {
//private:
//	int electricGauge;
//public:
//	HybidCar(int ag, int ae) : Car(ag), electricGauge(ae){}		// {몸체} 에다가 해도 되지만 콜론초기화도 된다.
//	int getElecGauge() { return electricGauge; }
//};
//
//class HubirdWaterCar : public HybidCar {
//	int waterGauge;			// 접근제어자를 안적으면 private으로 자동으로 적용됨
//public:
//	HubirdWaterCar(int ag, int ae, int aw) : HybidCar(ag,ae), waterGauge(aw){ }		// 중요!  HybidCar(ag,ae)는 위에 클래스의 부모클래스 2개의 인자를 같이 받아야한다
//	void showGauge() {
//		cout << "잔여 가솔린: " << getGasGauge() << endl;
//		cout << "잔여 전기량: " << getElecGauge() << endl;
//		cout << "잔여 워터량: " << waterGauge << endl;		// 본인 인자를 그냥 출력하면 됨
//	}
//};
//int main()
//{
//	HubirdWaterCar hwc(10, 20, 30);
//	hwc.showGauge();
//
//	return 0;
//}