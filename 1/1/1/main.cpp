#include <iostream>
#define MODE 1

using namespace std;
void add();

int main()
{
#if !defined MODE
#error необходимо определить MODE
#endif

#if MODE == 0
    cout << "Работаю в режиме тренировки";
#elif MODE == 1
    add();
#else
#error Неизвестный режим. Завершение работы;
#endif
    return 0;
}

void add(){
    cout << "Работаю в боевом режиме" << endl;
    int a, b;
    cout << "Введите число 1: ";
    cin >> a;
    cout << "Введите число 2: ";
    cin >> b;
    cout << "Результат сложения: " << a + b;
}
