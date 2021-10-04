/*
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

사용함수 : switch문
*/

#include <iostream>

using namespace std;

int main()
{
	int Score = 0;

	cout << "점수를 입력하시오." << endl;
	cin >> Score;

	switch (Score / 10)
	{
	case 10: case 9:
		cout << "A등급입니다.";
		break;
	case 8:
		cout << "B등급입니다.";
		break;
	case 7:
		cout << "C등급입니다.";
		break;
	case 6:
		cout << "D등급입니다.";
		break;
	default:
		cout << "F등급입니다.";
		break;
	}
	return 0;
}