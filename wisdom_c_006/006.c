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
//		printf("活动如期举行\n");
//	}
//	else {
//		printf("活动无法举行\n");
//		if (!is_weather_sunny) {
//			printf("原因 ：天气不晴朗\n");
//		}
//
//		if (!is_venue_available) {
//			printf("原因 ：场地不可用\n");
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
//		printf("决定出去吃饭\n");
//	}
//	else {
//		printf("在家吃饭\n");
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
//		玩家可以进入不同的房间，每一个房间都有不同的进入条件。
//
//		房间A：玩家需要有VIP身份
//		房间B：玩家需要至少有10个金币，或者是一个特殊道具
//		房间C：玩家需要有VIP身份，并且金币数量不得少于20
//		房间D：玩家需要有VIP身份或者特殊道具，并且金币数量不少于5
//
//	*/
//
//	// 玩家属性 （在真实程序中可能来自于用户输入或者是游戏逻辑）
//
//	bool is_vip = true;
//	uint32_t coins = 15;
//	bool has_special_item = false;
//
//	//检查进入房间A的条件
//
//	if (is_vip) {
//		puts("玩家可以进入房间A");
//	}
//	else {
//		puts("玩家不能进入房间A,因为玩家需要有VIP身份");
//	}
//	if (coins >= 10 || has_special_item) {
//		puts("玩家可以进入房间B");
//	}
//	else {
//		puts("玩家不可以进入房间B,因为玩家需要至少有10个金币，或者是一个特殊道具");
//	}
//	if (is_vip && coins >= 20) {
//		puts("玩家可以进入房间C");
//	}
//	else {
//		puts("玩家不可以进入房间C，因为玩家需要有VIP身份，并且金币数量不得少于20");
//	}
//	if ((is_vip || has_special_item) && coins >= 5) {
//		puts("玩家可以进入房间D");
//	}
//	else {
//		puts("玩家不可以进入房间D，因为玩家需要有VIP身份或者特殊道具，并且金币数量不少于5");
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
//		公司内部的权限问题。
//		员工可以访问不通的系统资源，这取决于他们的职位和完成数量，权限规则如下：
//
//		1. 经理Manager 总是可以访问所有的资源
//		2. 普通员工 Employee 如果完成5个以上的任务以后，则可以访问资源
//		3. 实习生 Intern …… 10个以后 ，必须经过经理的批准才能访问		
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
//		puts("允许访问 ：您是经理！");
//	}
//	else if (role == 2 && completed_tasks > 5) {
//		puts("允许访问 ：您是员工，并且已经完成了5个任务！");
//	}
//	else if (role == 3 && completed_tasks > 10 && manager_approved) {
//		puts("允许访问 ：您是实习生，并且已经完成了10个任务，而且得到了经历的批准");
//	}
//	else {
//		puts("拒绝访问");
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
//		puts("允许访问");
//	}
//	else {
//		puts("拒绝访问");
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
//		puts("允许访问");
//	}
//	else {
//		puts("拒绝访问");
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
//	printf("得分 ：%u, 等级 ：%c\n", score, grade);
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
//		puts("账户被锁定！");
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
//	// 租车案例
//	// age >= 21，驾驶经验一年或一年以上
//
//	uint8_t age = 21;
//	uint8_t driving_exp_years = 2;
//
//	//卫语句
//
//	if (age < 21) {
//		puts("不符合条件，年龄不足");
//		return 0;
//	}
//	if (driving_exp_years > 2) {
//		puts("不符合条件，驾驶经验不足");
//		return 0;
//	}
//	// 所有的都满足
//	puts("满足租车条件");
//
//	return 0;
//}

//状态机：switch红绿灯的简单应用 
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
//		puts("红灯");
//		traffic_light_state = 2;
//		break;
//
//	case 1:
//		puts("绿灯");
//		traffic_light_state = 1;
//		break;
//	case 2:
//		puts("黄灯");
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
//	printf("请输入一个整数 ：\n");
//
//	// 要求用户从键盘上输入，与我们交互
//	// scanf 扫描
//
//	scanf_s("%d",&number);
//
//	printf("已扫描到您输入的数字，是 ：%d\n", number);
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
//		printf("跑步的人完成第 %" PRIu32 " 圈.\n", current_lap);
//	}
//
//	return 0;
//}