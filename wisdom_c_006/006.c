//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main() {
//
//	bool is_weather_sunny = true;
//	bool is_venue_available = true;
//
//	if (is_weather_sunny && is_venue_available) {
//		printf("����ھ���\n");
//	}
//	else {
//		printf("��޷�����\n");
//		if (!is_weather_sunny) {
//			printf("ԭ�� ������������\n");
//		}
//
//		if (!is_venue_available) {
//			printf("ԭ�� �����ز�����\n");
//		}
//
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main() {
//
//	bool has_coupon = true;
//	bool is_special_event = true;
//
//	if (has_coupon || is_special_event) {
//		printf("������ȥ�Է�\n");
//	}
//	else {
//		printf("�ڼҳԷ�\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>

//int main(void)
//{
//
//	/*
//		��ҿ��Խ��벻ͬ�ķ��䣬ÿһ�����䶼�в�ͬ�Ľ���������
//
//		����A�������Ҫ��VIP���
//		����B�������Ҫ������10����ң�������һ���������
//		����C�������Ҫ��VIP��ݣ����ҽ��������������20
//		����D�������Ҫ��VIP��ݻ���������ߣ����ҽ������������5
//
//	*/
//
//	// ������� ������ʵ�����п����������û������������Ϸ�߼���
//
//	bool is_vip = true;
//	uint32_t coins = 15;
//	bool has_special_item = false;
//
//	//�����뷿��A������
//
//	if (is_vip) {
//		puts("��ҿ��Խ��뷿��A");
//	}
//	else {
//		puts("��Ҳ��ܽ��뷿��A,��Ϊ�����Ҫ��VIP���");
//	}
//	if (coins >= 10 || has_special_item) {
//		puts("��ҿ��Խ��뷿��B");
//	}
//	else {
//		puts("��Ҳ����Խ��뷿��B,��Ϊ�����Ҫ������10����ң�������һ���������");
//	}
//	if (is_vip && coins >= 20) {
//		puts("��ҿ��Խ��뷿��C");
//	}
//	else {
//		puts("��Ҳ����Խ��뷿��C����Ϊ�����Ҫ��VIP��ݣ����ҽ��������������20");
//	}
//	if ((is_vip || has_special_item) && coins >= 5) {
//		puts("��ҿ��Խ��뷿��D");
//	}
//	else {
//		puts("��Ҳ����Խ��뷿��D����Ϊ�����Ҫ��VIP��ݻ���������ߣ����ҽ������������5");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//	/*
//		��˾�ڲ���Ȩ�����⡣
//		Ա�����Է��ʲ�ͨ��ϵͳ��Դ����ȡ�������ǵ�ְλ�����������Ȩ�޹������£�
//
//		1. ����Manager ���ǿ��Է������е���Դ
//		2. ��ͨԱ�� Employee ������5�����ϵ������Ժ�����Է�����Դ
//		3. ʵϰ�� Intern ���� 10���Ժ� �����뾭���������׼���ܷ���		
//	*/
//
//int main(void)
//{
//	uint8_t  role = 2;// 1 = Manager; 2 = Employee; 3 = Intern
//
//	uint8_t completed_tasks = 6;
//
//	bool manager_approved = false;
//
//	if (role == 1) {
//		puts("������� �����Ǿ���");
//	}
//	else if (role == 2 && completed_tasks > 5) {
//		puts("������� ������Ա���������Ѿ������5������");
//	}
//	else if (role == 3 && completed_tasks > 10 && manager_approved) {
//		puts("������� ������ʵϰ���������Ѿ������10�����񣬶��ҵõ��˾�������׼");
//	}
//	else {
//		puts("�ܾ�����");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//
//	uint8_t role = 2;
//
//	uint8_t completed_tasks = 6;
//
//	bool is_manager_approved = true;
//
//	bool acess_allowed = (role == 1 || role == 2 && completed_tasks > 5 || role == 3 && completed_tasks >10 && is_manager_approved);
//
//	if (acess_allowed) {
//		puts("�������");
//	}
//	else {
//		puts("�ܾ�����");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint8_t role = 2;
//
//	uint8_t completed_tasks = 6;
//
//	bool is_manager_approved = false;
//
//	bool acess_allowed = false;
//
//	switch (role) {
//	case 1:
//		acess_allowed = true;
//		break;
//	case 2:
//		if (completed_tasks > 5) {
//			acess_allowed = true;
//		}
//		break;
//	case 3:
//		if (completed_tasks > 10 && is_manager_approved) {
//			acess_allowed = true;
//		}
//		break;
//	default:
//		acess_allowed = false;
//		break;
//	}
//	
//	if (acess_allowed) {
//		puts("�������");
//	}
//	else {
//		puts("�ܾ�����");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint32_t score = 80;
//	
//	char grade;
//
//	grade = (score >= 90) ? 'A' :
//			(score >= 80) ? 'B' :
//			(score >= 70) ? 'C' : 'D';
//	printf("�÷� ��%u, �ȼ� ��%c\n", score, grade);
//
//	return 0;
//}

//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint32_t wrong_attemps = 2;
//	bool is_locked = wrong_attemps >= 3;
//
//	if (is_locked) {
//		puts("�˻���������");
//		return 0;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	// �⳵����
//	// age >= 21����ʻ����һ���һ������
//
//	uint8_t age = 21;
//	uint8_t driving_exp_years = 2;
//
//	//�����
//
//	if (age < 21) {
//		puts("���������������䲻��");
//		return 0;
//	}
//	if (driving_exp_years > 2) {
//		puts("��������������ʻ���鲻��");
//		return 0;
//	}
//	// ���еĶ�����
//	puts("�����⳵����");
//
//	return 0;
//}

//״̬����switch���̵Ƶļ�Ӧ�� 
//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//
//int main(void) 
//{
//	uint8_t traffic_light_state = 0;
//	
//	switch (traffic_light_state)
//	{
//	case 0:
//		puts("���");
//		traffic_light_state = 2;
//		break;
//
//	case 1:
//		puts("�̵�");
//		traffic_light_state = 1;
//		break;
//	case 2:
//		puts("�Ƶ�");
//		traffic_light_state = 0;
//		break;
//	defaut:
//		puts("???");
//		break;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	int32_t number;
//	
//	printf("������һ������ ��\n");
//
//	// Ҫ���û��Ӽ��������룬�����ǽ���
//	// scanf ɨ��
//
//	scanf_s("%d",&number);
//
//	printf("��ɨ�赽����������֣��� ��%d\n", number);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(viod)
//{
//	const uint32_t TOTAL_LAPS = 10;
//	
//	uint32_t current_lap = 0;
//
//	while (current_lap < TOTAL_LAPS) 
//	{
//		current_lap++;
//		printf("�ܲ�������ɵ� %" PRIu32 " Ȧ.\n", current_lap);
//	}
//
//	return 0;
//}