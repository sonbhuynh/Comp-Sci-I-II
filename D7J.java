// Javastart.java
// This program draws a Hat-man

import java.awt.*;

public class D7J extends java.applet.Applet
{	
	int appletWidth, appletHeight;							//Declaration
	
	public void paint(Graphics g)
	{
		background(g);										//Function call for Background
		
		//****** DRAW HEAD ******
		g.setColor(new Color(255, 255, 0));					//Sets color of head
		drawhead(g);										//Function call for Drawing Head
		
		//****** DRAW EYE ******
		g.setColor(new Color(255, 0, 0));					//Sets color of eye
		draweye(g);											//Function call for Drawing Eye
		
		//****** DRAW HAT ******
		g.setColor(new Color(0, 255, 0));					//Sets color of the hat
		drawhat(g);											//Function call for Drawing Hat
	}
	
	//****** DRAW HEAD ******
	public void drawhead(Graphics g)
	{
		g.fillArc(50, 300, 70, 70, 30, 300);				//Draws head
	}
	
	//****** DRAW EYE ******
	public void draweye(Graphics g)
	{
		g.fillOval(80, 320, 10, 10);						//Draws eye
	}
	
	//****** DRAW HAT ******
	public void drawhat(Graphics g)
	{
		g.fillRect(50, 295, 70, 15);						//Draws horizontal bar of Hat
		g.fillRect(65, 255, 40, 40);						//Draws box part of Hat
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
    	appletWidth = getWidth();
    	appletHeight = getHeight();
    	
    	g.setColor(Color.blue);								//Sets background color to Blue
    	g.fillRect(0, 0, appletWidth, appletHeight);		//Fills in background
    }
							
}