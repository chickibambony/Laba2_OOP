#include <iostream>
#include "Header.h"

int main() {
	int lengthA, lengthB, lengthAB, *arrayAB;

	std::cin >> lengthA >> lengthB;

	Intersection obj1(lengthA, lengthB);
	arrayAB = obj1.getThirdArray();
	lengthAB = obj1.getSizeOfThirdArray();
	
	printArray(arrayAB, lengthAB);

	return 0;
}























// ���������� ����������
// ������� ����� string ��� ������ �� ��������. ����������� �������� +, +=, =, ==, >, <, [],
// ��������� ������ int � ����� �������, int �� ����� � �������� ���������� ������. 