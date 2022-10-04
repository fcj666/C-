#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int ids[5] = { 10001,10002,10003,10004 };
char names[5][10] = {
    "张三", "李四", "王五", "赵六"
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
    功能: 根据id 查询用户密码, 如果存在返回用户密码,  如果不存在返回空
    参数:
        uid: 用户id
    返回值:
        如果密码存在, 返回密码.
        如果密码不存在, 返回NULL
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
    功能: 传入用户id和密码, 根据上面两个函数(selectUserById, selectPassById)来获取相应用户数据, 并判断是否登录成功
        传入用户id 查询用户名是否存在, 并获取用户密码
        如果用户存在  则判断密码是否正确
    参数:
        uid: 用户账户
        password: 用户密码
    返回值:
        如果账号不存在, 返回1
        如果密码错误, 返回2
        如果登录成功, 返回0
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
    功能: 提示用户输入账号密码, 根据login函数判断是否登录成功,
    如果登录成功提示正在进入加载界面
    如果登录失败
        密码错误: 提示密码错误, 并让用户重新登录
        账号不存在: 提示账号不存在, 并提示正在进入注册界面
    参数: 无
    返回值: 无
*/
void showLoginPage() {
    //--变量声明--
    //用户id
    int uid;
    //用户密码
    char password[17];
    //结果选项  
    /*  如果账号不存在, 返回1
        如果密码错误, 返回2
        如果登录成功, 返回0
        */
    int result;

    //--接收输入--
    scanf_s("%d", &uid);
    //处理掉输入的回车符号
    getchar();
    gets_s(password, 16);

    //--数据处理--
    result = login(uid, password);

    //--输出--
    switch (result) {
    case 1:
        printf("账号不存在, 正在进入注册界面");
        break;
    case 2:
        printf("密码错误, 请重新登录");
        break;
    case 0:
        printf("登录成功, 正在进入首页");
        break;
    }

}


