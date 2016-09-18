// Javastart.java
// This program has one diamond shaped polygon that moves diagonally around the screen
// This diamond should bounce off the sides 

import java.awt.*;

public class D3J extends java.applet.Applet
{	
	int x1 = 0, y1 = 0, appletWidth, appletHeight, xdir1 = 1, ydir1 = 1;	//Declaration
	
	public void paint(Graphics diamond)
	{
		background(diamond);								//Function call for Background
		
		//DRAW DIAMOND ********************
		do
		{
			diamond.setColor(Color.red);			//Sets color of diamond to blue
			drawdiamond(diamond, x1, y1);			//Function call for Draw Diamond
			
			delay (50);								//Delays 50 milli-secs before drawing next diamond
		
		
			//BLACK-OUT DIAMOND ***************
		
			diamond.setColor(Color.black);			//Sets diamond color to black
			drawdiamond(diamond, x1, y1);			//Function call for Draw Diamond
		
			//MOVE DIAMOND ********************
		
			movediamond();							//Function call for Moving the Diamond
		
			//CHECK EDGES *********************
		
			checkedges();							//Function call for Checking Edges
		
		}
		while (5 == 5);
	}
	
	//This function will draw a diamond
	public void drawdiamond(Graphics diamond, int x1, int y1)
	{
		diamond.drawLine (50 + x1, 70 + y1, 70 + x1, 90 + y1);		//Draws top right line
		diamond.drawLine (70 + x1, 90 + y1, 50 + x1, 110 + y1);		//Draws bottom right line
		diamond.drawLine (50 + x1, 110 + y1, 30 + x1, 90 + y1);		//Draws bottom left line
		diamond.drawLine (30 + x1, 90 + y1, 50 + x1, 70 + y1);		//Draws top left line
	}
	
	//This function will move the triangle
	public void movediamond()
	{
		x1 += xdir1 * 20;						//Moving across the screen
		y1 += ydir1 * 10;						//Moving up/down the screen
	}
	
	public void checkedges()
	{
		if (110 + y1 >= appletHeight - 1)		//Checking bottom side
			ydir1 = -1;
		
		if (70 + x1 >= appletWidth - 1)			//Checking right side
			xdir1 = -1;
			
		if (70 + y1 <= 0)						//Checking left side
			ydir1 = 1;
		
		if (30 + x1 <= 0)						//Checking top side
			xdir1 = 1;
	}
	
	public void delay(int n)
    {
	   long startDelay = System.currentTimeMillis();
	   long endDelay = 0;
	   while (endDelay - startDelay < n)
		 endDelay = System.currentTimeMillis();
    }
    public void background(Graphics diamond)
    {
    	appletWidth = getWidth();						//Adjust applet's width
    	appletHeight = getHeight();						//Adjust applet's height
    	
    	diamond.setColor(Color.black);						//Set background color to black
    	diamond.fillRect(0, 0, appletWidth, appletHeight);	//Fill in rectangle 
    }
							
}