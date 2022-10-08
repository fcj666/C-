#include<windows.h>


int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPreInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	WNDCLASSEX wce; //创建的窗口类 wce为变量名
	wce.cbClsExtra = 0;
	wce.cbSize = sizeof(WNDCLASSEX);
	wce.cbWndExtra = 0;
	wce.hbrBackground = (HBRUSH)COLOR_BTNFACE;
	wce.hCursor = NULL;
	wce.hIcon = NULL;
	wce.hIconSm = NULL;
	wce.hInstance = hInstance;
	wce.lpfnWndProc = NULL;//回调函数
	wce.lpszClassName = TEXT("c3window");

	wce.style = CS_HREDRAW | CS_VREDRAW;
	ATOM nRes = RegisterClassEx(&wce);//让操作知道一下注册了   否则没用类和名字

	if (0 == nRes)
	{
		return 1;
		 
	}
	HWND hWnd = CreateWindowEx(WS_EX_TOPMOST, wce.lpszClassName, TEXT("c3纸牌"), WS_OVERLAPPEDWINDOW,300,200,700,500,NULL,NULL, hInstance,NULL);
	if (NULL == hWnd)
	{
		return 1;
	}
	ShowWindow(hWnd, nShowCmd);

	

	MSG mSg;//WM_QUIT

	while (GetMessage(&mSg, NULL, 0, 0))
	{
		TranslateMessage(&mSg);//翻译
		DispatchMessage(&mSg);  // 将消息分到回调函数


	}
 	 
	return 0;
}

LRESULT CALLBACK  WinProc(HWND hWnd, UINT uID, WPARAM wParam, LPARAM lParam)
{
	switch (uID)
	{
	case WM_CREATE: //创建一次  数据初始化
		MessageBox(NULL, L"create", L"提示",MB_OK);
		break;
	case WM_CLOSE: //关闭 处理我们自己申请的空间
			break;
	case WM_DESTROY:
		PostQuitMessage(0);//产生wm_quit
			break;

	}
	return DefWindowProc(hWnd, uID, wParam, lParam);


}