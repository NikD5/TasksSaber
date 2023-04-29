#include <iostream>
// Дмитрийчук Никита Владимирович 30.04.2023 выполнял примерно 40 минут (вспоминал как работать с указателями)
void RemoveDups(char* str)
{
    char* src = str;
    char* dst = str;
    while (*src)
    {
        if (dst != src)
            *dst = *src;
        *dst++;
        while ((*src + 1) && *(src + 1) == *src)
        {
            *src++;
        }
        *src++;
    }
    *dst = 0;
}

int main()
{
	char data[] = "AAA BBB AAA";
	RemoveDups(data);
	printf("%s\n", data);
	return 0;
}