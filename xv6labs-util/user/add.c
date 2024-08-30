// Lab Xv6 and Unix utilities
// add.c

#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    // 检查命令行参数的数量
    if (argc != 3) {
        // 如果参数数量不正确，打印使用说明并退出
        fprintf(2, "usage: add num1 num2\n");
        exit(1);
    }

    // 将命令行参数转换为整数
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // 计算和
    int sum = num1 + num2;

    // 打印结果
    printf("Sum: %d\n", sum);

    // 正常退出
    exit(0);
}
