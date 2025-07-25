#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    bool open = true; // 用來記錄目前該用 `` 還是 ''

    // 每次處理一行輸入
    while (getline(cin, str1)) {
        size_t pos = 0;
        // 每次都從頭開始找這一行中的雙引號
        while ((pos = str1.find("\"", pos)) != string::npos) {
            if (open) {
                str1.replace(pos, 1, "``");
            } else {
                str1.replace(pos, 1, "''");
            }
            open = !open;       // 下一次換邊
            pos += 2;           // 因為替換成兩個字元，要往後跳 2 位
        }
        cout << str1 << endl;
    }
    return 0;
}
