#include <stdio.h>

// ������ �̵��ϴ� �Լ�
void move(char start, char target, int disk) {
    printf("%c���� ����%d��(��) %c�� �̵��մϴ�.\n", start, disk, target);
}

// �ϳ��� ž �˰���
void hanoi(int n, char start, char work, char target) {
    if (n == 1) {
        move(start, target, 1);
        return;
    }
    hanoi(n - 1, start, target, work);
    move(start, target, n);
    hanoi(n - 1, work, start, target);
}

int main() {
    int num_disks = 3; // ������ ����
    char start = 'A'; // ���� ���
    char aux = 'B'; // ���� ���
    char target = 'C'; // ��ǥ ���

    hanoi(num_disks, start, aux, target);

    return 0;
}
