#include<DxLIb.h>

void Test(void);

int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevinstance, _In_ LPSTR Ipcmdline, _In_ int nShowcmd)
{
	SetGraphMode(640,480,32);
	ChangeWindowMode(true);
	SetWindowText("2016191_‹ß“¡‘“”n");
	if (DxLib_Init() == -1)
	{
		return-1;
	}

	int cnt = 0;

	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		cnt += 1;
		Test();
	}
}

void Test()
{
	int cnt = 1;
	cnt += 1;
}