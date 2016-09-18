// Javastart.java
// This program will show an equilateral triangle and 
// move the triangle diagonally across the screen

import java.awt.*;



public class D2J extends java.applet.Applet
{	
	int x = 90, y = 30;					//Declaration

	public void paint(Graphics tri)
	{
	
		do
		{
			tri.setColor(Color.red);//Sets color for the triangle
			drawtriangle(tri);		//Function call for Draw Triangle
			
			delay (200);		//Delays 200 milli-secs before drawing next triangle
			movetri();			//Function call for Moving Triangle
		}
		while (y <= 700);
		
	}
	
	//This function will draw 3 lines to make up a triangle
	public void drawtriangle(Graphics tri)
	{
		tri.drawLine (90 + x, 30 + y, 150 + x, 120 + y);		//Draws right line
		tri.drawLine (150 + x, 120 + y, 30 + x, 120 + y);		//Draws bottom line
		tri.drawLine (30 + x, 120 + y, 90 + x, 30 + y);			//Draws left line
	}
	
	//This function will move the triangle
	public void movetri()
	{
		x += 20;				//Shifts starting point 20 units right
		y += 10;				//Shifts starting point 10 units down
	}
		
	public void delay(int n)
    {
	   long startDelay = System.currentTimeMillis();
	   long endDelay = 0;
	   while (endDelay - startDelay < n)
		 endDelay = System.currentTimeMillis();
    }
    public void background(Graphics g)
    {
    	
    }
							
}