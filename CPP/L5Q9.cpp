#include<iostream>
using namespace std;
class employee{
    int emp_id;
    string emp_name;
    int age;
    public:
    employee()
    {
        emp_id=0;
        emp_name="";
        age=0;
    }
    void getdata()
    {
        cout<<"Enter employee id: ";
        cin>>emp_id;
        cout<<"Enter employee name: ";
        cin>>emp_name;
        cout<<"Enter employee age: ";
        cin>>age;
    }
   
    void display(){
        cout<<"Details of employee :"<<endl;
        cout<<emp_id<<endl;
        cout<<emp_name<<endl;
        cout<<age;
    }
    
friend int search(employee,int id);
};
int c=0;
int search(employee e,int id){
        if(e.emp_id==id){
            return c;
        }
        c++;
        return -1;
    }
int main()
{
    employee c[3];
    cout<<"Enter details of 3 employees:"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Employee "<<i+1<<": "<<endl;
        c[i].getdata();
    }
    int id,k=-1;
    cout<<"Enter id to be searched:";
    cin>>id;
    for(int i=0;i<3;i++){
    k=search(c[i],id);
    if(k!=-1)
    break;
    }
    if(k==-1)
    cout<<"id not found";
    else
    c[k].display();
}

