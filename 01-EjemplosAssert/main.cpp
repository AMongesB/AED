/* @file main.cpp
 * @description Función main del programa de ejemplos de assert
 * @author Monges Iván
 * @date 05/05/2022
 */

#include <cassert>

int main()
{
	assert(true);
	assert(false == false);
	assert(!(false && false));
	assert(1.0 == 0.1*10);
	assert(1.0 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	assert(1.0f != 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f + 0.1f);
	assert(1.0f == 1.0);
	assert(65 == 'A');
	assert(48 == '0');
	assert('A' + ' ' == 'a');
	assert('a' - 32 == 'A');
	assert('R' + ' ' == 'r');
	assert('r' - 32 == 'R');
}