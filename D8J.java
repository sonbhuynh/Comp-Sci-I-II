// Javastart.java
// This program draws a Hat-man and moves it across the screen

import java.awt.*;

public class D8J extends java.applet.Applet
{	
	int across, count = 1, start, degree, appletWidth, appletHeight;							//Declaration
	
	public void paint(Graphics g)
	{
		background(g);										//Function call for Background
		
		do
		{
			//***** SWITCH MENU *****
			menu();											//Function call for Switch menu
			
			//****** DRAW HEAD ******
			g.setColor(new Color(255, 255, 0));					//Sets color of head
			drawhead(g);										//Function call for Drawing Head
		
			//****** DRAW EYE ******
			g.setColor(new Color(255, 0, 0));					//Sets color of eye
			draweye(g);											//Function call for Drawing Eye
		
			//****** DRAW HAT ******
			g.setColor(new Color(0, 255, 0));					//Sets color of the hat
			drawhat(g);											//Function call for Drawing Hat
			
			delay (50);
			
			//***** BLACK-OUT *****
			g.setColor(Color.blue);								//Sets color to blue
			drawhead(g);										//Function call for Drawing Head
			draweye(g);											//Function call for Drawing Eye
			drawhat(g);											//Function call for Drawing Hat
			
			//***** MOVE ACROSS *****
			moveacross();
			
			//******* MOVE *******
			moveman(g);									//Function call for Moving Man
					
			//***** CHECK COUNT *****
			checkcount();										//Function call for checking count
		}
		while (5 == 5);
		
	}
	
	//****** DRAW HEAD ******
	public void drawhead(Graphics g)
	{
		g.fillArc(50 + across, 300, 70, 70, start, degree);				//Draws head
	}
	
	//****** DRAW EYE ******
	public void draweye(Graphics g)
	{
		g.fillOval(80 + across, 320, 10, 10);						//Draws eye
	}
	
	//****** DRAW HAT ******
	public void drawhat(Graphics g)
	{
		g.fillRect(50 + across, 295, 70, 15);						//Draws horizontal bar of Hat
		g.fillRect(65 + across, 255, 40, 40);						//Draws box part of Hat
	}
	
	//***** SWITCH MENU *****
	public void menu()
	{
		switch (count)
		{
			case 1:
				start = 30;									//Fully open
				degree = 300;								
				break;
			case 2:
				start = 20;									//Partly open
				degree = 320;								
				break;
			case 3:
				start = 10;									//Barely open
				degree = 340;								
				break;
			case 4:
				start = 0;									//Close
				degree = 360;								
				break;
			case 5:
				start = 10;									//Barely open
				degree = 340;								
				break;
			case 6:
				start = 20;									//Partly open
				degree = 320;								
				break;
		}
	}
	
	//******* MOVE *******
	public void moveman(Graphics g)
	{
		g.fillArc(50 + across, 300, 70, 70, start, degree);		//Moves man
	}
	
	//***** MOVE ACROSS *****
	public void moveacross()
	{
		across += 20;									//Moves across 20
	}
	
	//***** CHECK COUNT *****
	public void checkcount()
	{
		count ++;										//Increases count by 1
		
		if (count == 7)
			count = 1;									//Resets count to 1
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