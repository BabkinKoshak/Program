//Number
#define NUM 3214					

int main() {
	int num = NUM;
	char numAsString[50] = {0};	//Конечный результат (слово)
	short size = 0;
	
	//Десятки
	char thousand[10] = {' ','t','h','o','u','s','a','n','d',' '};
	char hundred[9] = {' ','h','u','n','d','r','e','d',' '};
	char decade[8] = {' ','d','e','c','a','d','e',' '};
	
	//Единицы
	char one[3] = {'o','n','e'};
	char two[3] = {'t','w','o'};
	char three[5] = {'t','h','r','e','e'};
	char four[4] = {'f','o','u','r'};
	char five[4] = {'f','i','v','e'};
	char six[3] = {'s','i','x'};
	char seven[5] = {'s','e','v','e','n'};
	char eight[5] = {'e','i','g','h','t'};
	char nine[4] = {'n','i','n','e'};
	int cond = 0;

	//Узнаем длинну
	for (int i = 10000; i > 0; i /= 10) {		
		if (num > 0) {
			cond = num % i;
			if (cond != num) {
				size++;
			}
			num %= i;
		}
	}

	num = NUM;
	int iStart = 0;

	//Для 4 значного
	if (size == 4) {		
		num = NUM / 1000;
		switch (num) {
		case 1:
			for (int t = 0; t < 3; t++) {
				numAsString[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numAsString[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numAsString[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numAsString[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numAsString[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numAsString[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numAsString[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numAsString[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numAsString[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		//Adding our digit
		for (int th = 0; th < 10; th++, iStart++) {
			numAsString[iStart] = thousand[th];
		}

		size--;
		num = NUM % 1000;
	}

	//Для 3 значного
	if (size == 3) {
		num = num / 100;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				numAsString[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numAsString[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numAsString[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numAsString[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numAsString[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numAsString[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numAsString[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numAsString[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numAsString[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		for (int h = 0; h < 9; h++, iStart++) {
			numAsString[iStart] = hundred[h];
		}
		size--;
		num = NUM % 100;
	}

	//Для 2 значного
	if (size == 2) {
		num = num / 10;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				numAsString[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numAsString[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numAsString[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numAsString[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numAsString[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numAsString[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numAsString[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numAsString[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numAsString[iStart] = nine[t];
				iStart++;
			}
			break;
		}

		//Добавление прошлого значения
		for (int d = 0; d < 8; d++, iStart++) {
			numAsString[iStart] = decade[d];
		}
		size--;
	}

	//Для 1 значного
	if (size == 1) {
		num = NUM % 10;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				numAsString[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numAsString[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numAsString[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numAsString[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numAsString[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numAsString[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numAsString[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numAsString[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numAsString[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		//Конец
		numAsString[iStart] = '\0';
	}

	return 0;
}
