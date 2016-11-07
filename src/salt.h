#include "types.h"

#define SALT_LENGTH		64

/*
** TH3QUJCK8R0WNF0XJUMP3D0V3RTH3LAZYD0GTH3QUJCK8R0WNF0XJUMP3D0V3RTH
*/
static byte salt[SALT_LENGTH] = {	
		84, 72, 51, 81, 85, 74, 67, 75, 	// TH3QUJCK
		56, 82, 48, 87, 78, 70, 48, 88, 	// 8R0WNF0X
		74, 85, 77, 80, 51, 68, 48, 86, 	// JUMP3D0V
		51, 82, 84, 72, 51, 76, 65, 90, 	// 3RTH3LAZ
		89, 68, 48, 71, 84, 72, 51, 81,		// YD0GTH3Q
		85, 74, 67, 75, 56, 82, 48, 87, 	// UJCK8R0W
		78, 70, 48, 88, 74, 85, 77, 80, 	// NF0XJUMP
		51, 68, 48, 86, 51, 82, 84, 72}; 	// 3D0V3RTH