///*
//	3. ��Ӱ��迡�� �̴ϼȶ����� ����ϱ�
//	�����ڸ� �����Ҵ� ��ü�� �ʱ�ȭ�ϴ� Ÿ�̹� �߿�!! 
//*/
//#include <iostream>
//using namespace std;
//
//
//class Car {
//private:
//	int gasolineGaug;
//public:
//	Car(int ag) : gasolineGaug(ag) {}		// �ݷ��ʱ�ȭ gasolineGaug(ag)�� ag�� �ʱ�ȭ�Ѵ� 
//	int getGasGauge() { return gasolineGaug; }
//};
//
//class HybidCar : public Car {
//private:
//	int electricGauge;
//public:
//	HybidCar(int ag, int ae) : Car(ag), electricGauge(ae){}		// {��ü} ���ٰ� �ص� ������ �ݷ��ʱ�ȭ�� �ȴ�.
//	int getElecGauge() { return electricGauge; }
//};
//
//class HubirdWaterCar : public HybidCar {
//	int waterGauge;			// ���������ڸ� �������� private���� �ڵ����� �����
//public:
//	HubirdWaterCar(int ag, int ae, int aw) : HybidCar(ag,ae), waterGauge(aw){ }		// �߿�!  HybidCar(ag,ae)�� ���� Ŭ������ �θ�Ŭ���� 2���� ���ڸ� ���� �޾ƾ��Ѵ�
//	void showGauge() {
//		cout << "�ܿ� ���ָ�: " << getGasGauge() << endl;
//		cout << "�ܿ� ���ⷮ: " << getElecGauge() << endl;
//		cout << "�ܿ� ���ͷ�: " << waterGauge << endl;		// ���� ���ڸ� �׳� ����ϸ� ��
//	}
//};
//int main()
//{
//	HubirdWaterCar hwc(10, 20, 30);
//	hwc.showGauge();
//
//	return 0;
//}