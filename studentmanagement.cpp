#include <iostream>
using namespace std;
string arrname[20],arrrollno[20],arrcourse[20],arrclass[20],arrcontact[20];
int total=0;

void enter(){
    int numstudents;
    cout<<"How many students do you want to enter?"<<endl;
    cin>>numstudents;
    if (total==0){
    total=total+numstudents;
    for(int i=0;i<numstudents;i++){
        cout<<"Enter data of student:"<<i+1<<endl;
        cout<<"Enter name: "<<endl;
        cin>>arrname[i];
        cout<<"Enter rollno.: "<<endl;
        cin>>arrrollno[i];
        cout<<"Enter the course: "<<endl;
        cin>>arrcourse[i];
        cout<<"Enter class: "<<endl;
        cin>>arrcourse[i];   
        cout<<"Enter contact: "<<endl;
        cin>>arrcontact[i];
    }
    }
    else{
        for(int i=total;i<total+numstudents;i++){
        cout<<"Enter data of student:"<<i+1<<endl;
        cout<<"Enter name: "<<endl;
        cin>>arrname[i];
        cout<<"Enter rollno.: "<<endl;
        cin>>arrrollno[i];
        cout<<"Enter the course: "<<endl;
        cin>>arrcourse[i];
        cout<<"Enter class: "<<endl;
        cin>>arrcourse[i];   
        cout<<"Enter contact: "<<endl;
        cin>>arrcontact[i];
    }
    total=total+numstudents;
}
}
void show(){
    for (int i=0;i<total;i++){
        cout<<"DATA OF STUDENT :"<<i+1<<endl;
        cout<<"NAME "<<arrname[i]<<endl;
        cout<<"ROLL NO. "<<arrrollno[i]<<endl;
        cout<<"COURSE"<<arrcourse[i]<<endl;
        cout<<"CLASS "<<arrclass[i]<<endl;
        cout<<"CONTACT DETAILS "<<arrcontact[i]<<endl;
    }
}
void search(){
    string rollno;
     cout<<"Enter roll no of student which you want to search"<<endl;
     cin>>rollno;
     for(int i=0;i<total;i++){
         if(rollno==arrrollno[i]){
        cout<<"DATA OF STUDENT :"<<i+1<<endl;
        cout<<"NAME "<<arrname[i]<<endl;
        cout<<"ROLL NO. "<<arrrollno[i]<<endl;
        cout<<"COURSE"<<arrcourse[i]<<endl;
        cout<<"CLASS "<<arrclass[i]<<endl;
        cout<<"CONTACT DETAILS "<<arrcontact[i]<<endl;
         }
     }
}
void update(){
      string rollno;
     cout<<"Enter roll no of student which you want to search"<<endl;
     cin>>rollno;
     for(int i=0;i<total;i++){
         if(rollno==arrrollno[i]){
        cout<<"DATA BEFORE UPDATION"<<endl;
        cout<<"DATA OF STUDENT :"<<i+1<<endl;
        cout<<"NAME "<<arrname[i]<<endl;
        cout<<"ROLL NO. "<<arrrollno[i]<<endl;
        cout<<"COURSE"<<arrcourse[i]<<endl;
        cout<<"CLASS "<<arrclass[i]<<endl;
        cout<<"CONTACT DETAILS "<<arrcontact[i]<<endl;
        cout<<"Enter new deails"<<endl;
        cout<<"Enter name:"<<endl;
        cin>>arrname[i];
        cout<<"Enter rollno.:"<<endl;
        cin>>arrrollno[i];
        cout<<"Enter the course:"<<endl;
        cin>>arrcourse[i];
        cout<<"Enter class:"<<endl;
        cin>>arrcourse[i];   
        cout<<"Enter contact:"<<endl;
        cin>>arrcontact[i];
        
         }
     }
    
    
}
void delete_data(){
    int d;
    cout<<"Press 1 to delete full record"<<endl;
    cout<<"Press 2 to delete specific record"<<endl;
    cin>>d;
    if(d==1){
        total=0;
        cout<<"All the previous record deleted!"<<endl;
    }
    else{
        string rollno;
        cout<<"Enter roll no which you want to delete"<<endl;
        cin>>rollno;
        for(int i=0;i<total;i++){
            if(rollno==arrrollno[i]){
                for(int j=i;j<total;j++){
                    arrname[j]=arrname[j+1];
                    arrrollno[j]=arrrollno[j
                    =1];
                    arrcourse[j]=arrcourse[j+1];
                    arrclass[j]=arrclass[j+1];
                    arrcontact[j]= arrcontact[j+1];
                }
                total--;
                cout<<"Record deletion succesful!"<<endl;
            }
        }
    }
    
}


int main() {
    int value;
    while(true){
cout<<"Press 1 to enter data"<<endl;
cout<<"Press 2 to show data"<<endl;
cout<<"Press 3 to search data"<<endl;
cout<<"Press 4 to update data"<<endl;
cout<<"Press 5 to delete data"<<endl;
cout<<"Press 6 to exit"<<endl;
cin>>value;
switch(value){
    case 1:
    enter();
    break;
    case 2:
    show();
    break;
    case 3:
    search();
    break;
    case 4:
    update();
    break;
    case 5:
    delete_data();
    break;
    case 6:
    exit(0);
    break;
    default:
    cout<<"invalid input"<<endl;
    
}
}
    return 0;
}