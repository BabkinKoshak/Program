#include <stdio.h>

int main() {
	char ourstring[] = "Ya krutoi  paren  pryam    ochen";
	//длинна
	int length = 0;				
	//кол-во слов
	int counter = 0;				
	//узнаем длинну 
	for (int i = 0; ; i++) {	
		if (ourstring[i] == '\0') {
			break;
		} else {
			length++;
		}
	}

	//узнаем кол-во слов
	for (int i = 0; i < length; i++) {							
		if (ourstring[i] != ' ' && (ourstring[i + 1] == ' ' || ourstring[i + 1] == '\0')) {
			counter++;
		} 
	}
	return 0;
} 
