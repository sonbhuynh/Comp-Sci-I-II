// Son Huynh
// Scene 19

import java.awt.*;
import java.util.*;

public class Scene19 extends java.applet.Applet
{	
	int appletWidth, appletHeight, x_heli = -400;					//Declaration
	
	public void paint(Graphics g)
	{
		background(g);								//Function call for background
		
		//***** DRAWS TITLES *****
		endingtitle(g);								//Function call for Ending Title
		
		do
		{
			//***** DRAWS HELICOPTER'S BODY *****
			g.setColor(new Color(0, 100, 50));			//Sets Color
			heli_body(g);								//Function call for Helicopter's body
		
			g.setColor(new Color(0, 100, 50));			//Sets Color
			heli_tail(g);								//Function call for Helicopter's tail
			
			//***** DRAWS CROSS BLADES *****
			g.setColor(new Color(100, 100, 100));		//Sets Color
			cross_blades(g);							//Function call for Horizontal blades
			
			g.setColor(new Color(0, 215, 215));			//Sets Color
			windows(g);									//Function call for Windows
			
			g.setColor(new Color(100, 100, 100));		//Sets Color
			details(g);									//Function call for Details
			
			delay(50);
			
			//***** BLACK-OUT *****
			g.setColor(Color.black);					//Sets Color
			cross_blades(g);							//Function call for Cross blades
			heli_tail(g);								//Function call for Heli's tail
			heli_body(g);								//Function call for Heli's body
			windows(g);									//Function call for Windows
			details(g);									//Function call for Details
			
			//***** MOVE HELICOPTER *****
			moveheli();									//Function call for Helicopter's body
			
			g.setColor(new Color(0, 100, 50));			//Sets Color
			heli_tail(g);								//Function call for Helicopter's tail
			
			//***** DRAWS VERTICAL BLADES *****
			g.setColor(new Color(100, 100, 100));		//Sets Color
			vertical_blades(g);							//Function call for Vertical blades
			
			g.setColor(new Color(0, 100, 50));			//Sets Color
			heli_body(g);								//Function call for Helicopter's body
				
			g.setColor(new Color(0, 215, 215));			//Sets Color
			windows(g);									//Function call for Windows
			
			g.setColor(new Color(100, 100, 100));		//Sets Color
			details(g);									//Function call for Details
			
			delay(50);
			
			//***** BLACK-OUT BLADES *****
			g.setColor(Color.black);					//Sets Color
			vertical_blades(g);							//Function call for Vertical blades
			heli_body(g);								//Function call for Heli's body
			heli_tail(g);								//Function call for Heli's tail
			windows(g);									//Function call for Windows
			details(g);									//Function call for Details
			
			//***** MOVE HELICOPTER *****
			moveheli();									//Function call for Moving Helicopter
		}
		while (x_heli <= appletWidth + 200);

	}
		
	//***** DRAWS TITLES *****
	public void endingtitle(Graphics g)
	{
		g.setColor(new Color(255, 255, 255));					//Sets Color
		g.setFont(new Font("Earwig Factory", Font.PLAIN, 150));	//Sets Font
		g.drawString("Forrest Gump", 50, 500);					//Output Title
		
		g.setColor(new Color(255, 255, 255));					//Sets color
		g.setFont(new Font("Kredit", Font.PLAIN, 25));			//Sets Font
		g.drawString("Coming to theatres near you", 420, 600);	//Output title
	}
	
	//***** DRAWS HELICOPTER'S BODY *****
	public void heli_body(Graphics g)
	{	
		Polygon heli = new Polygon();
		
		heli.addPoint(150 + x_heli, 150);				//1st Point, clock-wise, Draws body
		heli.addPoint(270 + x_heli, 150);				
		heli.addPoint(300 + x_heli, 180);				
		heli.addPoint(300 + x_heli, 255);				
		heli.addPoint(270 + x_heli, 270);				
		heli.addPoint(180 + x_heli, 270);				
		heli.addPoint(150 + x_heli, 240);				
		heli.addPoint(150 + x_heli, 210);
		heli.addPoint(120 + x_heli, 195);
		heli.addPoint(120 + x_heli, 165);
		
		g.fillPolygon(heli);
	}
	
	//***** DRAWS WINDOWS *****
	public void windows(Graphics g)
	{	
		Polygon window = new Polygon();
		
		window.addPoint(225 + x_heli, 155);				//1st Point, clock-wise, Draws window
		window.addPoint(270 + x_heli, 155);
		window.addPoint(295 + x_heli, 180);
		window.addPoint(295 + x_heli, 210);
		window.addPoint(225 + x_heli, 210);
		
		g.fillPolygon(window);
	}
	
	//***** DRAWS DETAILS *****
	public void details(Graphics g)
	{
		g.fillRect(200 + x_heli, 140, 5, 10);			//Draws top blades
		g.fillRect(230 + x_heli, 140, 5, 10);
		g.fillRect(120 + x_heli, 135, 200, 5);
		
		g.fillRect(200 + x_heli, 270, 5, 10);			//Draws landing gears
		g.fillRect(250 + x_heli, 270, 5, 10);
		g.fillRect(150 + x_heli, 280, 150, 10);
	}
	
	//***** DRAWS HELICOPTER'S TAIL *****
	public void heli_tail(Graphics g)
	{
		g.fillRect(30 + x_heli, 165, 100, 30);			//Draws tail
	}
	
	//**** DRAWS VERTI-HORIZ BLADES ****
	public void vertical_blades(Graphics g)
	{
		g.fillRect(40 + x_heli, 150, 5, 60);			//Draws vertical blade
		g.fillRect(12 + x_heli, 177, 60, 5);			//Draws horizontal blade
	}
	
	//**** DRAWS CROSS BLADES ****
	public void cross_blades(Graphics g)
	{
		Polygon rblade = new Polygon();
		
		rblade.addPoint(59 + x_heli, 156);				//Draws top right blade
		rblade.addPoint(63 + x_heli, 161);
		rblade.addPoint(22 + x_heli, 204);
		rblade.addPoint(19 + x_heli, 199);
		
		g.fillPolygon(rblade);
		
		Polygon lblade = new Polygon();
		
		lblade.addPoint(19 + x_heli, 161);				//Draws top left blade
		lblade.addPoint(22 + x_heli, 156);
		lblade.addPoint(63 + x_heli, 199);
		lblade.addPoint(59 + x_heli, 204);
		
		g.fillPolygon(lblade);
	}
	
	//**** MOVE HELI ****
	public void moveheli()
	{
		x_heli += 20;									//Moves heli across
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
    	appletWidth = getWidth();					//Sets width
    	appletHeight = getHeight();					//Sets height
    	
    	g.setColor(Color.black);						//Sets color 
    	g.fillRect(0, 0, appletWidth, appletHeight);	//Fills background
    }
							
}