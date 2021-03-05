#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char str1[] = "aabccaaa";

    for (int i = 0, count1=1 ; str1[i]!='\0' ; i++)
    {
        if (str1[i] != str1[i+1])
        {
            cout << str1[i] << count1;
            count1 = 1;
        }
        else
            count1++;
    }

    return 0;
}
