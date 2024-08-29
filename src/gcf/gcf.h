/**
 * The function gcf calculates the greatest common factor
 * between two numbers.
 * 
 * a y b are the two numbers
 * The function returns the calculated greatest common factor
 */
int gcf(int a, int b) {
	return ( b==0 ? a : gcf(b,a%b) );
}
