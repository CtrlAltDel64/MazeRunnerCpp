#include "management.cpp"
#include <stack>

int main() {
    Path * start = new Path("start");
    Path * finish = new Path("finish");
    Path* current = nullptr;

    std::stack<Path *> last_intr;

    start ->  SetLeft(new Path("01"));
    current = start ->GetLeft();

    current -> SetLeft(new Path("02"));
    current = current ->GetLeft();

// intersection
    current -> SetLeft(new Path("03*"));
    current = current -> GetLeft();
    last_intr.push(current);

    current->SetLeft(new Path("04"));
    current = current->GetLeft();

    current->SetLeft(new Path("05"));
    current = current->GetLeft();

    current->SetLeft(new Path("06x"));
    
    current = last_intr.top();
    

    current->SetRight(new Path("07"));
    current = current->GetRight();

    current->SetLeft(new Path("08*"));
    current = current->GetLeft();
    last_intr.push(current);

    current->SetRight(new Path("09"));
    current= current->GetRight();

    current->SetRight(new Path("10"));
    current= current->GetRight();

    current->SetRight(new Path("11"));
    current= current->GetRight();

    current->SetLeft(new Path("12*"));
    current= current->GetLeft();
    last_intr.push(current);

    current->SetRight(new Path("13"));
    current= current->GetRight();
    current->SetLeft(new Path("14x"));

    current = last_intr.top();
   

    current->SetLeft(new Path("15"));
    current= current->GetLeft();

    current->SetLeft(new Path("16"));
    current= current->GetLeft();

    current->SetLeft(new Path("17"));
    current= current->GetLeft();

    current->SetLeft(new Path("18x"));

    current = last_intr.top();
    last_intr.pop();
    current = last_intr.top();
   

    current->SetLeft(new Path("19"));
    current= current->GetLeft();

    current->SetLeft(new Path("20"));
    current= current->GetLeft();

    current->SetLeft(new Path("21*"));
    current= current->GetLeft();
    last_intr.push(current);

    current->SetLeft(new Path("22"));
    current= current->GetLeft(); 

    current->SetLeft(new Path("23"));
    current= current->GetLeft();

    current->SetLeft(new Path("24x"));

    current = last_intr.top();
    

    current->SetRight(new Path("25"));
    current= current->GetRight();

    current->SetRight(new Path("26"));
    current= current->GetRight();

    current->SetRight(new Path("27"));
    current= current->GetRight();

    current->SetRight(new Path("28*"));
    current= current->GetRight();
    last_intr.push(current);

    current->SetLeft(new Path("29"));
    current= current->GetLeft();

    current->SetLeft(new Path("30"));
    current= current->GetLeft();
     
    current->SetLeft(new Path("31*"));
    current= current->GetLeft();
    last_intr.push(current);

    current->SetRight(new Path("32"));
    current= current->GetRight();

    current->SetRight(new Path("33x"));
    
    current = last_intr.top();
    

    current->SetLeft(new Path("34"));
    current= current->GetLeft();

    current->SetLeft(new Path("35"));
    current= current->GetLeft();

    current->SetLeft(new Path("36*"));
    current= current->GetLeft();
    last_intr.push(current);

    current->SetLeft(new Path("37"));
    current= current->GetLeft();

    current->SetLeft(new Path("38"));
    current= current->GetLeft();

    current->SetLeft(new Path("39x"));

    current = last_intr.top();
    

    current->SetRight(new Path("40"));
    current= current->GetRight();

    current->SetRight(new Path("41"));
    current= current->GetRight();

    current->SetRight(new Path("42x"));

    current = last_intr.top();
    last_intr.pop();
    current = last_intr.top();
    last_intr.pop();
    current = last_intr.top();
    

    current->SetRight(new Path("43"));
    current= current->GetRight();

    current->SetRight(new Path("44"));
    current= current->GetRight();

    current->SetRight(new Path("45"));
    current= current->GetRight();

    current->SetRight(new Path("46"));
    current= current->GetRight();

    current->SetRight(new Path("47"));
    current= current->GetRight();

    current->SetRight(new Path("48"));
    current= current->GetRight();

    finish ->  SetLeft(new Path("49x"));
    current = finish ->GetLeft();



    

    return  0;
}