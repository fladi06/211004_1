/*
���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

����Լ� : switch��
*/

#include <iostream>

using namespace std;

int main()
{
	int Score = 0;

	cout << "������ �Է��Ͻÿ�." << endl;
	cin >> Score;

	switch (Score / 10)
	{
	case 10: case 9:
		cout << "A����Դϴ�.";
		break;
	case 8:
		cout << "B����Դϴ�.";
		break;
	case 7:
		cout << "C����Դϴ�.";
		break;
	case 6:
		cout << "D����Դϴ�.";
		break;
	default:
		cout << "F����Դϴ�.";
		break;
	}
	return 0;
}