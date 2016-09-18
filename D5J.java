// Javastart.java
// This program will print 

import java.awt.*;

public class D5J extends java.applet.Applet
{	
	int x1 = 0, x2 = -300, appletWidth, appletHeight;			//Declaration
	
	public void paint(Graphics g)
	{
		background(g);								//Function call for Background
		
		//******* TOP NAME *******
		topname(g);									//Function call for Top name
			
		//****** RIGHT NAME ******
		rightname(g);								//Function call for Right name
		
		//****** LEFT  NAME ******
		leftname(g);								//Function call for Left name
		
		//****** BOTTOM DESCRIPTION ******
		bottomname(g);								//Function call for Bottom description
		
		do
		{
			//******** DESCRIPTION 1 ********
			g.setColor(new Color(0, 0, 0));				//Sets color
			des1(g);							//Function call for Description 1
			//******** DESCRIPTION 2 ********
			g.setColor(new Color(255, 255, 255));		//Sets color
			des2(g);							//Function call for Description 2
			
			delay (50);
		
			//********* BLACK-OUT ***********
			g.setColor(Color.blue);				//Sets color of descriptions to blue
			des1(g);
			des2(g);
		
			
			//***** MOVING DES 1 *****
			movingdes1(g);						//Function call for Moving Des 1
			
			//***** MOVING DES 2 *****
			movingdes2(g);						//Function call for Moving Des 2
			
		
			
			//******* CHECKING EDGES 1 *******
			checkedges1(g);							//Function call for Checking Edges 1
			
			//******* CHECKING EDGES 2 *******
			checkedges2(g);
		}
		while (5 == 5);
		
	}
	
	//******* TOP NAME *******
	public void topname(Graphics g)
	{
		g.setColor(new Color(255, 128, 192));				//Sets color
		g.setFont(new Font("Calibri", Font.BOLD, 30));		//Sets Font
		g.drawString("Son Huynh", 445, 31);					//Outputs Son Huynh at 445, 31
		
		g.drawRect(445, 35, 132, 10);						//Draws rectangle
		g.setColor(new Color(226, 158, 226));				//Sets color
		g.fillRect(445, 35, 132, 10);						//Fills in rectangle
	}
	
	//****** RIGHT NAME ******
	public void rightname(Graphics g)
	{
		g.setColor(new Color(0, 255, 64));					//Sets color
		g.setFont(new Font("Times New Roman", Font.PLAIN, 15));		//Sets Font
		g.drawString("Son Huynh", 955, 100);				//Outputs Son Huynh at 955, 100
	}
	
	//****** LEFT  NAME ******
	public void leftname(Graphics g)
	{
		g.setColor(new Color(255, 23, 29));					//Sets color
		g.setFont(new Font("Arial", Font.ITALIC, 20));		//Sets Font
		g.drawString("Son Huynh", 1, 600);					//Outputs Son Huynh at 1, 600
	}
	
	//****** BOTTOM DESCRIPTION ******
	public void bottomname(Graphics g)
	{
		g.setColor(new Color(192, 192, 192));				//Sets color
		g.setFont(new Font("Algerian", Font.BOLD, 25));		//Sets Font
		g.drawString("Loves to Eat", 440, 675);				//Outputs Loves to Eat at 445, 699
	}
	
	//***** DESCRIPTION 1 *****
	public void des1(Graphics g)
	{
		g.setFont(new Font("Chiller", Font.PLAIN, 30));		//Sets Font
		g.drawString("Junior", 0 + x1, 250);				//Outputs Junior at -100, 250
	}
	
	//***** DESCRIPTION 2 *****
	public void des2(Graphics g)
	{
		g.setFont(new Font("Hurry Up", Font.ITALIC, 25));	//Sets Font
		g.drawString("2013", 1024 + x2, 450);					//Outputs Junior at 1224, 450
	}
	
	//***** MOVING DESCRIPTION 1 *****
	public void movingdes1(Graphics g)
	{
		x1 += 20;											//Moving from left to right
	}
	
	//***** MOVING DESCRIPTION 1 *****
	public void movingdes2(Graphics g)
	{
		x2 -= 20;											//Moving from right to left
	}
	
	//******* CHECKING EDGES 1 *******
	public void checkedges1(Graphics g)
	{
		if (x1 >= appletWidth + 1)
			x1 = 0;											//Resets x1, checking right side
	}
	
	//******* CHECKING EDGES 2 *******
	public void checkedges2(Graphics g)
	{
		if (1200 + x2 <= 0)
			x2 = -10;										//Resets x2, checking left side
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
    	
    	g.setColor(Color.blue);							//Set background color to blue
    	g.fillRect(0, 0, appletWidth, appletHeight);	//Fill in rectangle 
    }
							
}