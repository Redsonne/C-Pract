В данном задании мы практикуем создание более сложных шаблонов, разбитых на подгруппы, над которыми должна быть применена операция дизъюнкция. Применяем знания итераторов регулярных выражений. В зависимости от содержания подгрупп совершаем определенные операции.
 

Есть текстовый файл. Размер его такой, что он весь может быть размещен в оперативной памяти. В этом тексте присутствуют целые числа (в любом из допустимых форматов языка С++), действительные числа (тоже в любом из допустимых форматов), строки (последовательность любых символов, заключенная в “ ) Из этого файла извлечь целые числа и вычислить их сумму, действительные числа (также вычислить их сумму), все строки.

Задаем шаблон, удовлетворяющий условию (разбитый на подгруппы, над которыми применена операция дизъюнкция). Используем итерацию по подгруппам и выясняем в каких значениях итераторов находятся нужные нам подгруппы, отвечающие за дробную часть (для суммы действительных чисел),
Соответственно обрабатываем нужные нам случаи в функции, которая обрабатывает строки в файле.       

Содержание подключенного текстового файла:![image](https://github.com/user-attachments/assets/ac6c9b53-712d-47a2-9ec7-d94663906b5e)


Вывод результата в консоль:


![image](https://github.com/user-attachments/assets/d99ecdf4-d3f5-4c3c-810a-a90f8df4a36d)

![image](https://github.com/user-attachments/assets/3fcfb656-05cb-490e-b2d8-deca85859c65)



В результате анализа вывода программы можем сделать вывод, что в группе 3 содержится часть шаблона, отвечающая за строковый тип данных, в группе 2 содержится дробная часть действительного числа, в остальных случаях у нас целые числа, код работает исправно. 
![image](https://github.com/user-attachments/assets/ef5ca9fc-5dd5-4212-8572-466ed331d9c3)
