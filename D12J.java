// Javastart.java
// This program will draw a jumping stickman

import java.awt.*;

public class D12J extends java.applet.Applet
{	
	int appletWidth, appletHeight;						//Declaration
	
	public void paint(Graphics g)
	{
		background(g);									//Function call for background
		
		do
		{	
			//**** DRAW DOWN MAN ****
			g.setColor(Color.white);						//Sets color of down man
			downman(g);										//Function call for Down position man
		
			delay (200);
		
			//**** BLACK-OUT DOWN MAN ****
			g.setColor(Color.red);							//Sets color to background
			downman(g);										//Function call for Down position man
			
			//**** DRAW UP MAN ****
			g.setColor(Color.white);						//Sets color of down man
			upman(g);										//Function call for Up position man
			
			delay (200);
			
			//**** BLACK-OUT DOWN MAN ****
			g.setColor(Color.red);							//Sets color to background
			upman(g);										//Function call for Up position man
		}
		while (5 == 5);
		
		
	}
	
	//**** DRAW DOWN MAN ****
	public void downman(Graphics g)
	{
		
		g.drawOval(500, 400, 50, 50);					//Draws head
		g.drawLine(525, 450, 525, 530);					//Draws body
		
		g.drawLine(525, 460, 490, 500);					//Draws left arm
		g.drawLine(525, 460, 560, 500);					//Draws right arm
		
		g.drawLine(525, 530, 490, 550);					//Draws left thigh
		g.drawLine(525, 530, 560, 550);					//Draws right thigh
		
		g.drawLine(490, 550, 475, 580);					//Draws left shin
		g.drawLine(560, 550, 575, 580);					//Draws right shin
		
		g.drawLine(475, 580, 455, 580);					//Draws left leg
		g.drawLine(575, 580, 595, 580);					//Draws right leg
	}
	
	//**** DRAW UP MAN ****
	public void upman(Graphics g)
	{
		g.drawOval(500, 300, 50, 50);					//Draws head
		g.drawLine(525, 350, 525, 430);					//Draws body
		
		g.drawLine(525, 360, 490, 350);					//Draws left arm
		g.drawLine(525, 360, 560, 350);					//Draws right arm
		
		g.drawLine(525, 430, 490, 490);					//Draws left thigh
		g.drawLine(525, 430, 560, 490);					//Draws right thigh
		
		g.drawLine(490, 490, 475, 470);					//Draws left leg
		g.drawLine(560, 490, 575, 470);					//Draws right leg
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
    	appletWidth = getWidth();						//Sets width
    	appletHeight = getHeight();						//Sets height
    	
    	g.setColor(Color.red);							//Sets color of background
    	g.fillRect(0, 0, appletWidth, appletHeight);	//Fills in background
    }
							
}
