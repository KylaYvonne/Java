import java.util.*;

public class Website {

    String website;
    String url;
    Website next;
    public Website(String website,String url){
        this.website = website;
        this.url = url;
        this.next = null;
    }
}
