//week03-1.cpp
//c++ �}�C vector<int>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "enter 4 nums: ";
    vector<int> a; //���Y�ۦp���}�C

    int now;
    for (int i=0; i<4; i++){
        cin >> now;
        a.push_back(now); //����a���̫᭱
    }

    for (int i=0; i<a.size(); i++){
        cout << a[i] << ' '; //�Ʀr�᭱���Ů�
    }

    cout << "�{�b�{���X�� �S���J99 88 ��ӼƦr\n";

    a.push_back(99);
    a.push_back(88);

    for (int i=0; i<a.size(); i++){
        cout << a[i] << ' ';
    }
}
