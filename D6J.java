// Javastart.java
// This program will

import java.awt.*;

public class D6J extends java.applet.Applet
{	
	int x1 = 0, x2 = 0, xdir1 = 1, xdir2 = -1, appletWidth, appletHeight;			//Declaration
	
	public void paint(Graphics g)
	{
		background(g);							//Function call for background
		
		do
		{
			//****** ADDITION WORD ******
			g.setColor(new Color(255, 0, 0));	//Sets Color
			addition(g);						//Function call for Addition
			
			//****** HORIZONTAL BAR ******
			g.setColor(new Color(0, 255, 0));
			horizontalbar(g);					//Function call for Horizontal rectangle
			
			
			delay(50);
			
			//****** BLACK-OUT ******
			g.setColor(Color.black);			//Sets color to black
			addition(g);						//Function call for Addition
			horizontalbar(g);					//Function call for Horizontal rectangle
			
			//****** MOVING WORD ******
			moveword(g);						//Function call for Moving Word (Addition)
			movehorizontal(g);					//Function call for Moving Hori Bar
			
			//**** CHECKING EDGES ****
			checkword(g);						//Function call for check word
			checkhori(g);						//Function call for check bar
		}
		while(5 == 5);
		
		
	}
	
	//****** ADDITION WORD ******
	public void addition(Graphics g)
	{
		g.setFont(new Font("Monotype Corsiva", Font.PLAIN, 40));			//Sets font
		g.drawString("Addition", 5 + x1, 200);							//Draws addition line
	}
	
	//****** HORIZONTAL BAR ****** 
	public void horizontalbar(Graphics g)
	{
		g.fillRect(950 + x2, 500, 70, 20);					//Draws horizontal rectangle
		g.fillRect(975 + x2, 470, 20, 80);					//Draws vertical rectangle
		
	}
	
	
	//****** MOVE WORD ******
	public void moveword(Graphics g)
	{
		x1 += xdir1 * 20;										//Moves from left to right
	}
	
	//**** MOVE BAR ****
	public void movehorizontal(Graphics g)
	{
		x2 += xdir2 * 20;										//Moves from right to left (horizontal bar)
	}
	
	//***** CHECK EDGES WORD *****
	public void checkword(Graphics g)
	{
		if (x1 + 150 >= appletWidth - 1)			//Checking left side
			xdir1 = -1;
	
		if (x1 <= 0)								//Checking right side
			xdir1 = 1;
	}
	
	//***** CHECK BAR *****
	public void checkhori(Graphics g)
	{
		if (x2 + 1020 >= appletWidth - 1)			//Checking left side
			xdir2 = -1;
			
		if (x2 + 950 <= 0)							//Checking right side
			xdir2 = 1;
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
    	appletWidth = getWidth();						//Adjust applet's width
    	appletHeight = getHeight();						//Adjust applet's height
    	
    	g.setColor(Color.black);						//Set background color to blue
    	g.fillRect(0, 0, appletWidth, appletHeight);	//Fill in rectangle 
    }
							
}