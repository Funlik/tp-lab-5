

<img src="img/green.png" width="50" height="50">

# Cpp-lab-5

## Практикум №5 (DeaneryDemo)

### Разработать класс **Student** для хранения информации о студенте.

Примерный перечень полей:

- **id** - идентификационный номер
- **fio** - фамилия и инициалы
- **group** - ссылка на группу (объект Group)
- **marks** - вектор оценок
- **num** - количество оценок

Обеспечить класс следующими методами:

- создание студента с указанием ИД и ФИО
- зачисление в группу
- добавление оценки
- вычисление средней оценки

### Разработать класс **Group** для хранения информации об учебной группе

Примерный перечень полей:

- **title** - название группы
- **students** - вектор из ссылок на студентов
- **spec** - специальность
- **num** - количество студентов в группе
- **head** - ссылка на старосту (из членов группы)

Обеспечить класс следующими методами:

- создание группы с указанием названия
- добавление студента
- избрание старосты
- поиск студента по ФИО или ИД
- вычисление соеднего балла в группе
- исключение студента из группы

### Разработать класс **Deanery**

Примерный перечень полей:

- **students** - массив студентов
- **groups** - массив групп

Обеспечить класс следующими методами:

- создание студентов на основе данных из файла
- создание групп на основе данных из файла
- добавление случайных оценок студентам
- получение статистики по успеваемости студентов и групп
- перевод студентов из группы в группу
- отчисление студентов за неуспеваемость
- сохранение обновленных данных в файлах
- инициация выборов старост в группах
- вывод данных на консоль


Создать два файла с данными для групп и студентов (не менее 3 групп и 30 студентов). Использовать эти файлы при формировании данных групп и студентов

Написать демонстрационную версию приложения



 
 
 
## Список участников/веток

|  ФИО              | Имя ветки |
|-------------------|-----------|

## Алгоритм выполнения работы

Для выполнения работы необходимо:

1. Выполнить *fork* репозитария в свой аккаунт.
1. Выполнить клонирование репозитария из своего аккаунта к себе на локальную машину (`git clone`).
1. Создать ветку **git** с индивидуальным номером (`git branch имя_ветки`).
1. Сделать ветку активной (`git checkout имя`).
1. Необходимо разместить как исходные файлы с решениями задач, поместив **cpp** файлы в **src**, а заголовочные - в **include**. 
1. Добавить файлы в хранилище (`git add`).
1. Выполнить фиксацию изменений (`git commit -m "комментарий"`).
1. Отправить содержимое ветки в свой удаленный репозитарий (`git push origin имя_ветки`).
1. Создать пул-запрос в репозитарий группы и ждать результата от **Travis-CI**.

