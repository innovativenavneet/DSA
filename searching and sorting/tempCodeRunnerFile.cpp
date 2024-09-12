// C implementation of arc function 
#include <graphics.h> 

// driver code 
int main() 
{ 
	// gm is Graphics mode which is 
	// a computer display mode that 
	// generates image using pixels. 
	// DETECT is a macro defined in 
	// "graphics.h" header file 
	int gd = DETECT, gm; 

	// location of the arc 
	int x = 250; 
	int y = 250; 

	// starting angle and ending angle 
	// of the arc 
	int start_angle = 155; 
	int end_angle = 300; 

	// radius of the arc 
	int radius = 100; 

	// initgraph initializes the graphics system 
	// by loading a graphics driver from disk 
	initgraph(&gd, &gm, ""); 

	// arc function 
	arc(x, y, start_angle, end_angle, radius); 

	getch(); 

	// closegraph function closes the graphics 
	// mode and deallocates all memory allocated 
	// by graphics system 
	closegraph(); 

	return 0; 
} 
