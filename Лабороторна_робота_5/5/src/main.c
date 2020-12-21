#define N 16

int main() {

 int a = 0;		
 int k = 0;		//корінь

for (int i = 1; i < N; i ++) {
	a = i * i;       

	if (a == N) {   
	 k = N / i;      // знаходження корня числа N
 
	}
}
	return 0;

}
