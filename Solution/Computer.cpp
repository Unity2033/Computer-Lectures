#include "Computer.h"

Computer::Computer()
{
	std::cout << "Create Computer" << std::endl;
}

void Computer::Use()
{
	// ���� ����� ���� ���� ���� Ŭ������ �ߺ��Ǵ� �Ӽ���
	// ������ �� �ֱ� ������ ���� ���� �����ڸ� ���� ���� Ŭ������
	// �̸��� �����ϰ� �Ӽ��� ����ؾ� �մϴ�.

	Mouse::Input();

	OnDrag();
	OnButton();
}
