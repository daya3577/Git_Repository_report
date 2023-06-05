



//메인화면 
//GameState==0
void print_title_screen()
{
	std::cout << "┌───────────────────────────────────────┐" << std::endl;
	std::cout << "│                                       │" << std::endl;
	std::cout << "│                                       │" << std::endl;
	std::cout << "│              지렁이 게임              │" << std::endl;
	std::cout << "│             (Snake  Bite)             │" << std::endl;
	std::cout << "│                                       │" << std::endl;
	std::cout << "│	      1. 게임 시작              │" << std::endl;
	std::cout << "│             2. 게임 설명              │" << std::endl;
	std::cout << "│             3. 게임 종료              │" << std::endl;
	std::cout << "│                                       │" << std::endl;
	std::cout << "└───────────────────────────────────────┘" << std::endl;


}

//GameState == 1
void print_game_screen(int stage_width, int stage_height)
{
	//콘솔 창 비우기
	system("cls");


	//입력받은 stage_width 만큼 출력
	std::cout << "┌";
	for (int j = 0; j < stage_width; j++)
	{
		std::cout << "─";
	}
	std::cout << "┐";
	std::cout << std::endl;

	//입력받은 stage_height 만큼 * 출력
	for (int u = 0; u < stage_height; u++)
	{
		std::cout << "│";
		for (int k = 0; k < stage_width; k++)
		{
			std::cout << " ";
		}
		std::cout << "│" << std::endl;
	}

	//입력받은 stage_width 만큼 출력
	std::cout << "└";
	for (int f = 0; f < stage_width ; f++)
	{
		printf("─");
	}
	std::cout << "┘";
	std::cout << std::endl;
}

// GameState == 2
int print_introduction_screen()
{
	//std::cout << "\n******************************************" << std::endl;
	std::cout << "\n\n지렁이 게임은 플레이어가 WASD를 사용해 지렁이를 조종하여\n먹이를 먹고 몸 길이를 늘려 점수를 획득하는 \n게임 입니다." << std::endl;
	std::cout << "\n타이틀화면으로 (Y/N)\n" << std::endl;
	return 0;
}

