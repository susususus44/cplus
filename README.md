*вот пример простой програмы*
```
#include <iostream>
```
```
#include <iostream>
```
# Это мой первый репозиторий для изучения C++
**вот пример простой програмы**
```
#include <iostream>
using namespace std;
int main(){
        cout << "hello\n";
        return 0;
}
```
   *Важно!*
*Компиляция программы*
```
clang++ -Wall main.cpp -o main.bin
```
*Запуск программы*
```
./main.bin
```
*Для задержки*
```
unistd.h
```
```
sleep(1)
```
*Очистка буфера для задержки в строку*
```
cout.flush()
```
*Бесконечный цикл при помощи while*
```
while (true) {}
```
*Бесконечный цикл при помощи for*
```
for (;;) {}
```
*для пропуска указанного символа*
```
continue
```
*для остановки программы после указанного символа*
```
break
```
*символ новой строки*
```
\n
```
*выводит на экран таблицу ascii*
```
asscii -d
```
*для просмотра бинарного кода указанного символа*
```
echo '(любой символ)' | xxd -a
```
> Важно!
*Компиляция программы*
```
clang++ -Wall main.cpp -o main.bin
```
*Запуск программы*
```
./main.bin
```
*Очистка буфера для задержки в строку*
```
cout.flush()
```
 *инкремент*
```
++название переменной
```
*пушить программу*
```
git status
git add *
git commit -m 'some text'
git push
```
*выход из бесконечного цикла*
```
ctrl+z
```
*создание папки*
```
mkdir  название папки
```
*удаление папки, файла*
```
rm -rf название файла или папки
```
*создание файла*
```
micro название файла.cpp
```
*отформатировка кода*
```
clang-format название файла.cpp
```
*инициализация нажатия enter*
```
getchar() != EOF
```
*декремент*
```
--название переменной
```
*обработка Enter*
```
getchar() != EOF
```
*отчищение терминала*
```
system("clear");
```
**Остаток от деления (деление по модулю)**
```
7 % 3 // 7 = 3*2+1
```
```
count % 2 == 0 //  Нахождение чётности
```
*true и false вместо логический 1 и 0*
```
cout << boolalpha;
```
```
#include <thread>
```
добавляет
```
this_thread::sleep_for(chrono::milliseconds(1000)); // 1000 миллисек. - это 1 сек.
```
по сути sleep() из #include <unistd.h> только можно также милисекунды 