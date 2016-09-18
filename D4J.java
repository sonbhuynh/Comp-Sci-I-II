// Javastart.java
// This program has one diamond shaped polygon that moves diagonally around the screen
// This diamond should bounce off the sides 

import java.awt.*;

public class D4J extends java.applet.Applet
{	
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0, appletWidth, appletHeight, xdir1 = 1, ydir1 = 1, xdir2 = -1, ydir2 = 1;	//Declaration
	
	public void paint(Graphics diamond)
	{
		background(diamond);						//Function call for Background
		
		do
		{
			//DRAW DIAMOND ********************
			diamond.setColor(Color.red);			//Sets color of diamond to blue
			drawdiamond(diamond, x1, y1);			//Function call for Draw Diamond
			
			diamond.setColor(Color.green);			//Sets color of diamond #2 to green
			drawdiamond2(diamond, x2, y2);			//Function call for Draw Diamond 2
			
			delay (50);								//Delays 50 milli-secs before drawing next diamond
		
		
			//BLACK-OUT DIAMOND ***************
		
			diamond.setColor(Color.black);			//Sets diamond color to black
			drawdiamond(diamond, x1, y1);			//Function call for Draw Diamond
			drawdiamond2(diamond, x2, y2);			//Function call for Draw Diamond 2
		
			//MOVE DIAMOND ********************
		
			movediamond();							//Function call for Moving Diamond
			movediamond2();							//Function call for Moving Diamond 2
		
			//CHECK EDGES *********************
		
			checkedges();							//Function call for Checking Edges
			checkedges2();							//Function call for Checking Edges 2
		
		}
		while (5 == 5);
	}
	
	//********** DRAW DIAMOND 1 ***********
	public void drawdiamond(Graphics diamond, int x1, int y1)
	{
		diamond.drawLine (50 + x1, 70 + y1, 70 + x1, 90 + y1);		//Draws top right line
		diamond.drawLine (70 + x1, 90 + y1, 50 + x1, 110 + y1);		//Draws bottom right line
		diamond.drawLine (50 + x1, 110 + y1, 30 + x1, 90 + y1);		//Draws bottom left line
		diamond.drawLine (30 + x1, 90 + y1, 50 + x1, 70 + y1);		//Draws top left line
	}
	
	//********** DRAW DIAMOND 2 ***********
	public void drawdiamond2(Graphics diamond, int x2, int y2)
	{
		diamond.drawLine (700 + x2, 100 + y2, 710 + x2, 110 + y2);		//Draws top right line
		diamond.drawLine (710 + x2, 110 + y2, 700 + x2, 120 + y2);		//Draws bottom right line
		diamond.drawLine (700 + x2, 120 + y2, 690 + x2, 110 + y2);		//Draws bottom left line
		diamond.drawLine (690 + x2, 110 + y2, 700 + x2, 100 + y2);		//Draws top left line
	}
	
	//********** MOVE DIAMOND 1 ***********
	public void movediamond()
	{
		x1 += xdir1 * 20;						//Moving across the screen
		y1 += ydir1 * 10;						//Moving up/down the screen
	}
	
	//********** MOVE DIAMOND 2 ***********
	public void movediamond2()
	{
		x2 += xdir2 * 15;						//Moving across the screen
		y2 += ydir2 * 3;						//Moving up/down the screen
	}
	
	//********** CHECK EDGES 1 ***********
	public void checkedges()
	{
		if (110 + y1 >= appletHeight - 1)		//Checking right side
			ydir1 = -1;
		
		if (70 + x1 >= appletWidth - 1)			//Checking bottom side
			xdir1 = -1;
			
		if (70 + y1 <= 0)						//Checking left side
			ydir1 = 1;
		
		if (30 + x1 <= 0)						//Checking top side
			xdir1 = 1;
	}
	
	//********** CHECK EDGES 2 ***********
	public void checkedges2()
	{
		if (120 + y2 >= appletHeight - 1)		//Checking right side
			ydir2 = -1;
		
		if (710 + x2 >= appletWidth - 1)			//Checking bottom side
			xdir2 = -1;
			
		if (100 + y2 <= 0)						//Checking left side
			ydir2 = 1;
		
		if (690 + x2 <= 0)						//Checking top side
			xdir2 = 1;
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