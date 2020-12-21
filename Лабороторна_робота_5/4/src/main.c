#define N 6

int main() {

 int s = 1; 
 
 int res = 0; 

for (int i = 1; i < N; i++) {
	if (N % i ==0) {
	 s += i;		 // знаходимо суму всіх дільників числа N
}
	 if (s == N) {
	  res = 1; 

	}
}
	return 0;

}
