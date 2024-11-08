## [EN] Problem of Removing the Minimum Number of Brackets from BS to Obtain a CBS
<p align="center"> <img src="brackets.png" alt="Example of CBS" width="75%" height="75%" /> </p>

A string consisting of opening and closing brackets of various types is given. You need to remove the minimum number of brackets from it so that the resulting bracket sequence forms a **CBS**<sup>1</sup>.

<sup>1</sup>**CBS** (Correct Bracket Sequence) is a **Bracket Sequence**<sup>2</sup> that can be transformed into a correct arithmetic expression by inserting the characters «1» and «+» between its symbols. For example, the bracket sequences «()[]», «([])» are correct (resulting expressions: «(1)+[1]», «([1+1]+1)»), while «](» and «[» are not. An empty string is considered a correct bracket sequence **by definition**.

<sup>2</sup>**Bracket Sequence** is a string consisting only of the following characters: «**(**», «**)**», «**[»**, «**]**», «**{**», «**}**».

### Input:
The program receives a single string **S** as input, which is a **Bracket Sequence**.

### Output:
The program must find an integer **M** — the minimum number of brackets that need to be removed from the string **S** to make it a **CBS**, as well as any **CBS** that can be obtained from **S** after removing exactly **M** brackets.

### General Information:
This project provides a solution to the problem with a time complexity of O(|S|<sup>3</sup>) and O(2<sup>|S|</sup>), where **|S|** is the length of the input string **S**. To build the project in Microsoft Visual Studio, clone the repository, create a folder named `build`, open a command line in that folder, and enter `cmake ..` (CMake must be installed).


## [RU] Задача об удалении минимального количества скобок из СП с целью получения ПСП
<p align="center"> <img src="brackets.png" alt="Пример ПСП" width="75%" height="75%" /> </p>

Дана строка, состоящая из открывающих и закрывающих скобок разных типов. Нужно удалить из неё минимальное число скобок так, чтобы полученная последовательность скобок образовывала **ПСП**<sup>1</sup>.

<sup>1</sup>**ПСП** (Правильной Скобочной Последовательностью) - называется **скобочная последовательность**<sup>2</sup>, которую можно преобразовать в корректное арифметическое выражение путем вставок между ее символами символов «1» и «+». Например, скобочные последовательности «()[]», «([])» — правильные (полученные выражения: «(1)+[1]», «([1+1]+1)»), а «](» и «[» — нет. Пустая строка является правильной скобочной последовательностью **по определению**.

<sup>2</sup>**Скобочная Последовательность** - строка, состоящая только из следующих символов: «**(**», «**)**», «**[»**, «**]**», «**{**», «**}**».

### Входные данные:
На вход программе подаётся единственная строка **S**, которая является **скобочной последовательностью**.

### Выходные данные:
Необходимо найти целое число **M** - минимальное количество скобок, которое нужно удалить из строки **S**, чтобы она стала **ПСП**, а также любую **ПСП**, которая может быть получена из **S** после удаления **M** скобок.

### Общая информация:
В этом проекте представлено решение задачи с временной сложностью O(|S|<sup>3</sup>) и O(2<sup>|S|</sup>), где **|S|** — длина исходной строки **S**. Чтобы собрать проект в Microsoft Visual Studio, клонируйте репозиторий, создайте папку `build`, откройте в ней командную строку и введите `cmake ..` (CMake должен быть установлен).

