import java.util.*;

public class MainDriver {

        public static void main(String[] args){
        LinkedList web = new LinkedList();
        Scanner con = new Scanner(System.in);
        int opt;
                                          
        do{    // do while loop for the program to execute all before the condition which is to exit if entered 0                                                                    
            System.out.println("Option:");
            System.out.println("1. add website");
            System.out.println("2. go back to previous and display info");
            System.out.println("3. display browsing history");
            System.out.println("4. get total website");
            System.out.println("5. display current site");
            System.out.println("0. Exit");
            System.out.print("\nEnter option: ");
             opt = con.nextInt();

            switch(opt){                                                

                case 1 : 
                    System.out.print("--------------\n");  
                    System.out.print("Add Website\n");  
                    System.out.print("--------------\n");                                         
                    System.out.print("Domain name: ");            
                    String dname = con.next();                 //storage for the domain name being asked
                    System.out.print("Link: ");
                    String dname2 = con.next();                //storage for the link/url of the asked domain name
                    web.addLast(dname,dname2);             
                    System.out.println("Website added!\n");
                    System.out.println("go back to menu\n");
                    break;
                case 2:        
                    System.out.print("--------------\n");                          
                    web.displayPrevious();                     //calling to display the previous link
                    System.out.println("\n");
                    System.out.println("go back to menu\n");
                    break;
                case 3:                                  
                    System.out.print("--------------\n");  
                    System.out.print("Browsing History\n");  
                    System.out.print("--------------\n"); 
                    web.displayHistory();                      //call to display the browsing history
                    System.out.println("\n");
                    System.out.println("\n\ngo back to menu\n");
                    break;
                case 4:                                
                    System.out.print("--------------\n");  
                    System.out.print("Total Visited Sites\n");  
                    System.out.print("--------------\n"); 
                    System.out.println("Total = "+ web.getLength());      //call to display the total number of sites entered
                    System.out.println("\n\ngo back to menu\n");
                    break;
                case 5: 
                    System.out.print("--------------\n");  
                    System.out.print("Current Site\n");  
                    System.out.print("--------------\n");
                    web.displayCurrent();                     //call to display the current sites displayed
                    System.out.println("\n\ngo back to menu\n");
                case 0:                                
                    break;  
                default:                                
                    System.out.println("\nINVALID INPUT\n");  
                    break;      
                }
        }while(opt != 0);                            
     }
}
