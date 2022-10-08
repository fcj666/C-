#include<windows.h>


int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPreInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	WNDCLASSEX wce; //�����Ĵ����� wceΪ������
	wce.cbClsExtra = 0;
	wce.cbSize = sizeof(WNDCLASSEX);
	wce.cbWndExtra = 0;
	wce.hbrBackground = (HBRUSH)COLOR_BTNFACE;
	wce.hCursor = NULL;
	wce.hIcon = NULL;
	wce.hIconSm = NULL;
	wce.hInstance = hInstance;
	wce.lpfnWndProc = NULL;//�ص�����
	wce.lpszClassName = TEXT("c3window");

	wce.style = CS_HREDRAW | CS_VREDRAW;
	ATOM nRes = RegisterClassEx(&wce);//�ò���֪��һ��ע����   ����û���������

	if (0 == nRes)
	{
		return 1;
		 
	}
	HWND hWnd = CreateWindowEx(WS_EX_TOPMOST, wce.lpszClassName, TEXT("c3ֽ��"), WS_OVERLAPPEDWINDOW,300,200,700,500,NULL,NULL, hInstance,NULL);
	if (NULL == hWnd)
	{
		return 1;
	}
	ShowWindow(hWnd, nShowCmd);

	

	MSG mSg;//WM_QUIT

	while (GetMessage(&mSg, NULL, 0, 0))
	{
		TranslateMessage(&mSg);//����
		DispatchMessage(&mSg);  // ����Ϣ�ֵ��ص�����


	}
 	 
	return 0;
}

LRESULT CALLBACK  WinProc(HWND hWnd, UINT uID, WPARAM wParam, LPARAM lParam)
{
	switch (uID)
	{
	case WM_CREATE: //����һ��  ���ݳ�ʼ��
		MessageBox(NULL, L"create", L"��ʾ",MB_OK);
		break;
	case WM_CLOSE: //�ر� ���������Լ�����Ŀռ�
			break;
	case WM_DESTROY:
		PostQuitMessage(0);//����wm_quit
			break;

	}
	return DefWindowProc(hWnd, uID, wParam, lParam);


}