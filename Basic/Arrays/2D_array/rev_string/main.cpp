#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100] = "HelloWorld";
    int k = 2;
    int i = strlen(str);
    while(i >= 0){
        str[i+k] = str[i];
        i--;
    }
    i = strlen(str) - k;
    while(k >0){
        str[k-1] = str[i+k-1];
        k--;
    }

    str[10] = '\0';
    int j = 0;
    while(str[j] != '\0'){
        cout<< str[j]<<endl;
        j++;
    }


    return 0;
}
