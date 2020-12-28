# Лабораторна робота №10
## Вимоги:
* *Розробник*: Закусілов Микита

* *Загальне завдання*: Розробити повноцінний звіт для лабораторної роботи "Функції".

* *Індивідуальне завдання*: У заданому тексті знайти кількість слів за умови, що між словами може бути будь-яка кількість пропусків.

## Опис програми:
* *Функціональне призначення*: Рахунок слів у тексті, використовуючи функцію.

* *Опис логічної структури*: 

* * Функція `main()`. Задання результату повернутим значенням з функції `found_words()`.

 ![enter image description here](https://github.com/Alert17/pictures/blob/main/assets/main.png?raw=true)

 * * Функція `found_words()`. Пошук та підрахунок слів у тексті. Слово вважається тоді, коли один символ дорівнює проопуску, а наступний не дорівнює.
Вважаємо що текст завжди починається з слова, тому лічильник одразу на 1.

 ![enter image description here](https://github.com/Alert17/pictures/blob/main/assets/found_words.png?raw=true)

* *Структура програми*: 
```
.
├── doc
│   ├── assets
│   │   ├── screen1.jpeg
│   │   ├── screen2.jpeg
│   │   ├── main.png
│   │   └── found_words.png
│   ├── report.pdf
│   └── report.md
├── Doxyfile
├── Makefile
└── src
    ├── main1.c
    ├── main2.c
    ├── main3.c
    ├── main4.c
    ├── main5.c
    └── main6.c

```
* *Важливі елементи програми*:

* * Рахунок слів:

```int tick = 1;
        for (int i = 0; i < size; i++) {
                if ((array[i] == ' ') && (array[i + 1] != ' ')) {
                        tick++;
                }


```

## Варіанти використання програми

При вхідних даних:

![enter image description here](https://github.com/Alert17/pictures/blob/main/assets/Input.jpeg?raw=true)

Отримаємо такі вихідні дані:

![enter image description here](https://github.com/Alert17/pictures/blob/main/assets/output.jpeg?raw=true)


## Висновок

Було створено програму для визначення кількості слів у тексті, уважаючи те, що між словами може бути будь-яка кількість пропусків.
