#include <stdio.h>
#include <stdlib.h>
#include "adjMatrix.h"

// ���� �׷����� �����ϴ� ����
void createGraph(graphType* g) {
	int i, j;
	g->n = 0;

	for (i = 0; i < MAX_VERTEX; i++) {
		for (j = 0; j < MAX_VERTEX; j++) {
			if (i >= MAX_VERTEX || j >= MAX_VERTEX) {
				// ���� ó��: ��ȿ���� ���� ���� ��ȣ ����
				printf("ERROR: Invalid vertex number detected.\n");
				return; // �Լ� ����
			}
			g->adjMatrix[i][j] = 0;
		}
	}
}

// �׷��� g�� ���� v�� �����ϴ� ����
void insertVertex(graphType* g, int v) {
	if (((g->n) + 1) > MAX_VERTEX) {
		printf("\n �׷��� ������ ������ �ʰ��Ͽ����ϴ�!");
		return;
	}
	g->n++; // �׷��� ������ ���� n�� �ϳ� ����
}

// �׷��� g�� ���� (u, v)�� �����ϴ� ����
void insertEdge(graphType* g, int u, int v) {
	// ���� (u, v)�� �����ϱ� ���� ���� u�� v�� �׷����� �����ϴ��� Ȯ��
	if (u >= g->n || v >= g->n) {
		printf("\n �׷����� ���� �����Դϴ�!");
		return;
	}
	g->adjMatrix[u][v] = 1;// ������ ������ ���� 2���� �迭�� ���� ���� 1�� ����
}

// �׷��� g�� 2���� �迭 ���� ������� ����ϴ� ����
void print_adjMatrix(graphType* g) {
	int i, j;
	for (i = 0; i < (g->n); i++) {
		printf("\n\t\t");
		for (j = 0; j < (g->n); j++)
			printf("%2d", g->adjMatrix[i][j]);
	}
}