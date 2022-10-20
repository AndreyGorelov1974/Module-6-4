/*Задание 4. Счастливый билетик
Что нужно сделать
В старину, когда даже в столице билеты в общественном транспорте выдавали контролёры, существовало поверье : если на билете сумма первых трёх цифр в номере билета равна сумме трёх последних,
то это к удаче.Напишите программу, которая получала бы на вход шестизначный номер билета и выводила, счастливый это билет или нет.К примеру, билеты 666 666 и 252 135 — счастливые, а 123 456 — нет.

Пример выполнения

Введите номер билета : 123060
Билет счастливый!
Введите номер билета : 123040
Повезёт в следующий раз!

Рекомендации по выполнению
Программу необходимо сделать так, чтобы можно было увеличить количество цифр в билете без особых изменений в коде.
Для получения младшего разряда числа(самой правой цифры) используйте выражение : one_digit = digits % 10.
Используйте циклы для подсчёта суммы цифр в номере билета.
Что оценивается
Программа корректно определяет, является ли билет счастливым.
Для подсчёта суммы цифр в билете используются циклы.*/

#include <iostream>

int main()
{
	// количество цифр в номере билета
	int numberLength = 6;
	// множитель для разделения номера на две половины
	int multiplierOfHalf = 1000;

	std::cout << "Введите номер билета (" << numberLength << " цифр): ";
	int ticketNumber;
	std::cin >> ticketNumber;

	// разделение числа на две половины
	int leftHalfOfNumber = ticketNumber / multiplierOfHalf;
	int rightHalfOfNumber = ticketNumber % multiplierOfHalf;

	int leftSum = 0, rightSum = 0;

	while (leftHalfOfNumber > 0) {
		leftSum += leftHalfOfNumber % 10;
		leftHalfOfNumber /= 10;
		rightSum += rightHalfOfNumber % 10;
		rightHalfOfNumber /= 10;
	}

	if (leftSum == rightSum) std::cout << "Билет счастливый\n";
	else std::cout << "Билет не счастливый\n";

}

