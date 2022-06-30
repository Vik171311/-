#include<bits/stdc++.h>
using namespace std;

// 判断 是否为字母
//若均为字母,返回1   有其他字符返回 0
bool isAlpha(string& str) {

    for (int i = 0; i < str.length(); i++)
    {
        if (!(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
 
            return false;
    }
    return true;
}

//输出
void printStr(string& str) {

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
    cout << endl;
}
void encryption(string &str,int key) {
    
    //if (str[i] >= 'a' && str[i] <= 'z')
    //加密
    for (int i = 0; i < str.length(); i++) {

        if (str[i] >= 'a' && str[i] <= 'z')         //小写字母
            str[i] = (str[i] + key - 97) % 26 + 97;
        else
            str[i] = (str[i] + key - 65) % 26 + 65;    //大写字母
    }
  

}

void decryption(string& str, int key) {
    //解密
    for (int i = 0; i < str.length(); i++) {

        if (str[i] >= 'a' && str[i] <= 'z')           //小写字母
            str[i] = (str[i] - 97 + 26 - key) % 26 + 97;
        else                                          //大写字母
            str[i] = (str[i] - 65 + 26 - key) % 26 + 65;
    }
}

int main() {

    string str="Hello";

    int n = 83;
    int key = n % 26;    //密钥,移动key位

    int flag=isAlpha(str);

    if (flag == 0) {      //若有其他字符,直接结束
        return -1;
    }

    printStr(str);        //  明文

    encryption(str,key);
    printStr(str);        //密文
    
    decryption(str, key);
    printStr(str);        //解密

    system("pause");

    return 0;
}