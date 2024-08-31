/**
 * The function gcf calculates the greatest common factor
 * between two numbers.
 * 
 * a y b are the two numbers
 * The function returns the calculated greatest common factor
 */
int gcf(int a, int b) {
	if (b==0) return a;
	else return gcf(b,a%b);
}
