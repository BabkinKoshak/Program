int main() { 
	int k = 12;
	int m = 5;
	int n = 1;
	int x; 

	if (k > m) { // змінемо місцями m i k
	x = k;
	k = m;
	m = x;
}
	if (k > n) { // змінемо місцями n i k
	x = k;
	k = n;
	n = x;
}
	if (m > n) { // змінемо місцями n i m
	x = m;
	m = n;
	n = x;
}
	return 0;
}
