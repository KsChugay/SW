#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int dlinaParallelepipeda, shirinaParallelepipeda, vysotaParallelepipeda, dlinaOtverstia, shirinaOtverstia, vysotaOtverstia;
	cout << "������� ����� ��������� ���������������: " << endl;
	cin >> dlinaParallelepipeda;
	cout << "������� ������ ��������� ���������������: " << endl;
	cin >> shirinaParallelepipeda;
	cout << "������� ������ ���������������: " << endl;
	cin >> vysotaParallelepipeda;
	cout << "������� ����� ��������� ���������" << endl;
	cin >> dlinaOtverstia;
	cout << "������� ������ ��������� ���������: " << endl;
	cin >> shirinaOtverstia;
	cout << "������� ������ ���������: " << endl;
	cin >> vysotaOtverstia;
	if ((dlinaParallelepipeda < dlinaOtverstia && shirinaParallelepipeda < shirinaOtverstia && vysotaParallelepipeda < vysotaOtverstia) || (dlinaParallelepipeda < shirinaOtverstia && shirinaParallelepipeda < dlinaOtverstia && vysotaParallelepipeda < vysotaOtverstia) || (dlinaParallelepipeda < vysotaOtverstia && shirinaParallelepipeda < shirinaOtverstia && vysotaParallelepipeda < dlinaOtverstia) || (shirinaParallelepipeda < vysotaOtverstia && dlinaParallelepipeda < shirinaOtverstia && vysotaParallelepipeda < dlinaOtverstia) || (vysotaParallelepipeda < shirinaOtverstia && dlinaParallelepipeda < dlinaOtverstia && shirinaParallelepipeda < vysotaOtverstia) || (vysotaParallelepipeda < shirinaOtverstia && dlinaParallelepipeda < vysotaOtverstia && shirinaParallelepipeda < dlinaOtverstia))
	{
		cout << "����������" << endl;
	}
	else
	{
		cout << "�� ����������" << endl;
	}
	return 0;
}