import java.awt.*;
import javax.swing.*;
import java.awt.event.*;


class LogicGatesGUI extends JFrame implements ActionListener
{
   JLabel lnum1, lnum2, lres;
   JTextField tnum1, tnum2, tres;
   JButton bBuffer, bNOT, bAND, bNAND,bOR,bNOR,bXOR,bXNOR;
   Container c = getContentPane();
   public boolean num1, num2, res;
   JPanel p1, p2;
   
   LogicGatesGUI()
   {
      super("Logic Gates");
      lnum1 = new JLabel("       A: ");
      lnum2 = new JLabel("       B: ");
      lres = new JLabel("       Y: ");
      
      tnum1 = new JTextField(10);
      tnum2 = new JTextField(10);
      tres = new JTextField(10); tres.setEditable(false);
      
      bBuffer = new JButton("Buffer"); bBuffer.addActionListener(this);
      bNOT = new JButton("NOT"); bNOT.addActionListener(this);
      bAND = new JButton("AND"); bAND.addActionListener(this);
      bNAND = new JButton("NAND"); bNAND.addActionListener(this);
      bOR = new JButton("OR"); bOR.addActionListener(this);
      bNOR = new JButton("NOR"); bNOR.addActionListener(this);
      bXOR = new JButton("XOR"); bXOR.addActionListener(this);
      bXNOR = new JButton("XNOR"); bXNOR.addActionListener(this);
      
      p1 = new JPanel();
      p1.setLayout(new GridLayout(5,8));
      p1.add(lnum1); p1.add(tnum1);
      p1.add(lnum2); p1.add(tnum2);
      p1.add(lres); p1.add(tres);
      
      p2 = new JPanel();
      p2.setLayout(new GridLayout(2,8));
      p2.add(bBuffer); p2.add(bNOT); p2.add(bAND); p2.add(bNAND);p2.add(bOR); p2.add(bNOR); p2.add(bXOR) ; p2.add(bXNOR);
      
      c.setLayout(new BorderLayout());
      c.add(p1, BorderLayout.CENTER);
      c.add(p2, BorderLayout.SOUTH);
      
      setSize(300, 200);
      setDefaultCloseOperation(EXIT_ON_CLOSE);
      setResizable(false);
      setVisible(true);
   }

   public void actionPerformed(ActionEvent ae)
   {
      try
      {
         num1 = Boolean.parseBoolean(lnum1.getText());
         num2 = Boolean.parseBoolean(lnum2.getText());
         
      LogicGates lg = new LogicGates();
      if(ae.getSource()== bBuffer)
         res = lg.BUFFER(num1);
      else if(ae.getSource()==bNOT)
         res = lg.NOT(num1);
      else if(ae.getSource()==bAND)
         res = lg.AND(num1,num2);
      else if(ae.getSource()==bNAND)
         res = lg.NAND(num1,num2);
      else if(ae.getSource()==bOR)
         res = lg.OR(num1,num2);
      else if(ae.getSource()==bNOR)
         res = lg.NOR(num1,num2);
      else if(ae.getSource()==bXOR)
         res = lg.XOR(num1,num2);
      else if(ae.getSource()==bXNOR)
         res = lg.XNOR(num1,num2);
      tres.setText(res+"");   
      }
      catch(NumberFormatException nfe){
         tres.setText("Invalid input!");
      }   
   }
   }
class LogicGates{
 //boolean num1, num2, res;

   public boolean BUFFER(boolean num1){
       return num1;
   }
   public boolean NOT(boolean num1){
      return !num1;
   }
   public boolean AND(boolean num1,boolean num2){
      if(num1 && num2 == true)
         return true;
      else
         return false;
   }
   public boolean NAND(boolean num1,boolean num2){
      if(num1 == true && num1 == true)
      return false;
      else
      return true;
   }
   public boolean OR(boolean num1,boolean num2){
      if(num1 == false && num2 == false)
      return false;
      else
      return true;
   }
   public boolean NOR(boolean num1,boolean num2){
      if(num1 == false && num2 == false)
      return true;
      else
      return false;
   }
   public boolean XOR(boolean num1,boolean num2){
      if((num1 == true && num2 == true)|| (num1 == false && num2 == false))
      return false;
      else
      return true;
   }
   public boolean XNOR(boolean num1,boolean num2){
      if((num1 == true && num2 == true) || (num1 == false && num2 == false))
      return true;
      else
      return false;
   }

}
   
public class LogicGatesDemo
{
   public static void main(String args[])
   {
      new LogicGatesGUI();
   }
}