#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
map<string, int> m; // ����?���յ�map m������string���͵ģ�ֵ��int���͵�
m["hello"] = 2; // ��keyΪ"hello", valueΪ2�ļ�ֵ��(key-value)��?map��
cout << m["hello"] << endl; // ����map��keyΪ"hello"��value, ���key�����ڣ��򷵻�0
cout << m["world"] << endl;
m["world"] = 3; // ��"world"����Ӧ��ֵ�޸�Ϊ3
m[","] = 1; // ��??���ֵ�ԣ���Ϊ"," ֵΪ1
// ?���������������map�����е�Ԫ�أ���?it->first��ȡ��ֵ?it->second��ȡ
for (auto it = m.begin(); it != m.end(); it++) {
cout << it->first << " " << it->second << endl;
}
// ����map�ĵ�?��Ԫ�أ�������ļ���ֵ
cout << m.begin()->first << " " << m.begin()->second << endl;
// ����map�����?��Ԫ�أ�������ļ���ֵ
cout << m.rbegin()->first << " " << m.rbegin()->second << endl;
// ���map��Ԫ�ظ���
cout << m.size() << endl;
return 0;
}
