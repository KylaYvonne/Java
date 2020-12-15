public class LinkedList {

public Website head;

   public Website createWebsite(String website, String url){return new Website(website,url);}
   
   public void addLast(String website, String url){
        Website web = new Website(website,url);
        if(head == null){
            head = web;
        }
        else{
            Website temp = head;
            while(temp.next != null){
                temp = temp.next;
            }
            temp.next = web;
        }
    }
    public void displayPrevious(){
        Website temp = head;
        
       if(temp == null){
           System.out.println(temp);
       }
       else{
           if(temp.next == null)
            System.out.println();
           else
              while(temp.next.next != null){
              temp = temp.next;
               }
              System.out.print("Previous site \n");
              System.out.print(temp.website + " --> " + temp.url);
          }
    }
    public void displayHistory(){
        Website temp = head;
        int i = 1;
        while(temp != null){
            System.out.println(i + ". " + temp.website + " --> " + temp.url);
            temp = temp.next;
            i++;
        }
    }
    public int getLength(){
        int len = 0;
        Website temp = head;
        while(temp !=null){
            len++;
            temp = temp.next;
        }
        return len;
    }
    public void displayCurrent(){
         Website temp = head;
         
            if(temp == null)
               System.out.println(temp);
            else
               while(temp.next != null){
               temp = temp.next;
                  }
               System.out.print(temp.website + " --> " + temp.url);
    }

}