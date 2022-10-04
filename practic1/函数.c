#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int ids[5] = { 10001,10002,10003,10004 };
char names[5][10] = {
    "����", "����", "����", "����"
};
char passwords[5][16] = { "aaaaa","bbbbb","ccccc","ddddd" };
int uNum = 4;

char* selectUserById(int uid);
char* selectPassById(int uid);
int login(int uid, char* password);
void showLoginPage();

int main() {
    showLoginPage();
    return 0;
}


char* selectUserById(int uid) {
    for (int i = 0; i < uNum; i++) {
        if (ids[i] == uid) {
            return names[i];
        }
    }
    return NULL;
}

/*
    ����: ����id ��ѯ�û�����, ������ڷ����û�����,  ��������ڷ��ؿ�
    ����:
        uid: �û�id
    ����ֵ:
        ����������, ��������.
        ������벻����, ����NULL
*/
char* selectPassById(int uid) {
    for (int i = 0; i < uNum; i++) {
        if (ids[i] == uid) {
            return passwords[i];
        }
    }
    return NULL;
}


/*
    ����: �����û�id������, ����������������(selectUserById, selectPassById)����ȡ��Ӧ�û�����, ���ж��Ƿ��¼�ɹ�
        �����û�id ��ѯ�û����Ƿ����, ����ȡ�û�����
        ����û�����  ���ж������Ƿ���ȷ
    ����:
        uid: �û��˻�
        password: �û�����
    ����ֵ:
        ����˺Ų�����, ����1
        ����������, ����2
        �����¼�ɹ�, ����0
*/
int login(int uid, char* password) {
    if (selectUserById(uid) == NULL) {
        return 1;
    }
    char* pass = selectPassById(uid);
    if (strcmp(password, pass) != 0) {
        return 2;
    }
    return 0;

}

/*
    ����: ��ʾ�û������˺�����, ����login�����ж��Ƿ��¼�ɹ�,
    �����¼�ɹ���ʾ���ڽ�����ؽ���
    �����¼ʧ��
        �������: ��ʾ�������, �����û����µ�¼
        �˺Ų�����: ��ʾ�˺Ų�����, ����ʾ���ڽ���ע�����
    ����: ��
    ����ֵ: ��
*/
void showLoginPage() {
    //--��������--
    //�û�id
    int uid;
    //�û�����
    char password[17];
    //���ѡ��  
    /*  ����˺Ų�����, ����1
        ����������, ����2
        �����¼�ɹ�, ����0
        */
    int result;

    //--��������--
    scanf_s("%d", &uid);
    //���������Ļس�����
    getchar();
    gets_s(password, 16);

    //--���ݴ���--
    result = login(uid, password);

    //--���--
    switch (result) {
    case 1:
        printf("�˺Ų�����, ���ڽ���ע�����");
        break;
    case 2:
        printf("�������, �����µ�¼");
        break;
    case 0:
        printf("��¼�ɹ�, ���ڽ�����ҳ");
        break;
    }

}


