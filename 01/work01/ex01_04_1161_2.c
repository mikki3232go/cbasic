/*
1161 : Ȧ���� ¦�� �׸��� ���ϱ�
���� �ΰ��� �Է����� ���´�.
���� ù��° ������ Ȧ���̸� "Ȧ��"�� ����ϰ�, ¦���̸� "¦��"�� ����� ��  "+"�� ����Ѵ�.
�׸��� �ι�° ������ Ȧ���̸� "Ȧ��"�� ����ϰ�, ¦���̸� "¦��"�� ����� ��  "="�� ����ϰ� ����� ������ ���� Ȧ������ ¦������ ����Ѵ�.
*/
#include <stdio.h>
void oddeven(int x) {
	//����  
	if (x % 2 == 0) printf("¦��");
	else printf("Ȧ��") ;
} 
 

int main() {
    int n, m; 

	scanf("%d %d", &n, &m) ;
    
    //����  
	oddeven(n);
	printf("+");
	oddeven(m);
	printf("=");
 	oddeven(n+m);
    return 0;
}