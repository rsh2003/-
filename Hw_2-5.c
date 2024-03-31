#include <stdio.h>

// 원반을 이동하는 함수
void move(char start, char target, int disk) {
    printf("%c에서 원반%d를(을) %c로 이동합니다.\n", start, disk, target);
}

// 하노이 탑 알고리즘
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
    int num_disks = 3; // 원반의 개수
    char start = 'A'; // 시작 기둥
    char aux = 'B'; // 보조 기둥
    char target = 'C'; // 목표 기둥

    hanoi(num_disks, start, aux, target);

    return 0;
}
