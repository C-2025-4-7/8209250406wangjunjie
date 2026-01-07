class Student {    
public:            
    Student();      
    Student(int n, const char* nm, char s);  
    void set_value(int n, const char* nm, char s);  
    void display();

private:            
    int num;
    char name[20];
    char sex;
};

