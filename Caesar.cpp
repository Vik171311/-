#include<bits/stdc++.h>
using namespace std;

// �ж� �Ƿ�Ϊ��ĸ
//����Ϊ��ĸ,����1   �������ַ����� 0
bool isAlpha(string& str) {

    for (int i = 0; i < str.length(); i++)
    {
        if (!(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
 
            return false;
    }
    return true;
}

//���
void printStr(string& str) {

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
    cout << endl;
}
void encryption(string &str,int key) {
    
    //if (str[i] >= 'a' && str[i] <= 'z')
    //����
    for (int i = 0; i < str.length(); i++) {

        if (str[i] >= 'a' && str[i] <= 'z')         //Сд��ĸ
            str[i] = (str[i] + key - 97) % 26 + 97;
        else
            str[i] = (str[i] + key - 65) % 26 + 65;    //��д��ĸ
    }
  

}

void decryption(string& str, int key) {
    //����
    for (int i = 0; i < str.length(); i++) {

        if (str[i] >= 'a' && str[i] <= 'z')           //Сд��ĸ
            str[i] = (str[i] - 97 + 26 - key) % 26 + 97;
        else                                          //��д��ĸ
            str[i] = (str[i] - 65 + 26 - key) % 26 + 65;
    }
}

int main() {

    string str="Hello";

    int n = 83;
    int key = n % 26;    //��Կ,�ƶ�keyλ

    int flag=isAlpha(str);

    if (flag == 0) {      //���������ַ�,ֱ�ӽ���
        return -1;
    }

    printStr(str);        //  ����

    encryption(str,key);
    printStr(str);        //����
    
    decryption(str, key);
    printStr(str);        //����

    system("pause");

    return 0;
}