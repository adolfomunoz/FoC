/**
 * Swaps the real values of the variables 
 * 
 * a and b are references to the variables
 * Returns nothing
 */
void swap(float& a, float& b) {
    float tmp = a;
    a = b;
    b = tmp;
} 