int gcf(int a, int b) {
	return ( b==0 ? a : gcf(b,a%b) );
}
