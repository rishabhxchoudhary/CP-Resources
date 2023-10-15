import java.applet.Applet;
import java.awt.Graphic;
import java.awt.Color;

public class newapp extends Applet{

    public void init(){
        setBackground(Color.RED);
        resize(400,400);
    }

    public void paint(Graphic g){
        g.drawString("hwllo wrld",140,40);
    }

}