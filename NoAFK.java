import java.awt.event.KeyEvent;
import java.awt.*;

public class NoAFK {

    public static void main(String args[]) throws AWTException{
        Robot r = new Robot();
        try{
            AFKProcess(r);
        } catch (InterruptedException e){};
    }

    public static void AFKProcess(Robot r) throws InterruptedException{
        while(true){
            Thread.sleep(120000);
            r.keyPress(KeyEvent.VK_D);
            Thread.sleep(100);
            r.keyRelease(KeyEvent.VK_D);
        }
    }
}
