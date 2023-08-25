#include <iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

class date
{
protected:
    int d;
    int m;
    int y;
public:
    date()
    {
        d=m=y=0;
    }
    date(int d,int m, int y)
    {
        this->d=d;
        this->m=m;
        this->y=y;
    }
    void set_date()
    {
        cout<<"the day:";
        cin>>d;
        while(d<=0||d>31)
        {
            cout<<"it is wrong"<<endl;
            cout<<"the day:";
            cin>>d;
        }
        cout<<"\n";
        cout<<"the month:";
        cin>>m;
        while(m<=0||m>12)
        {
            cout<<"it is wrong"<<endl;
            cout<<"the month:";
            cin>>m;
        }
        cout<<"\n";
        cout<<"the year:";
        cin>>y;
        while(y<1990||y>2020)
        {
            cout<<"it is wrong"<<endl;
            cout<<"the year:";
            cin>>y;
        }
        cout<<"\n";
    }
    int get_day()
    {
        return d;
    }
    int get_month()
    {
        return m;
    }
    int get_year()
    {
        return y;
    }
};

class transport
{
protected:
    int num_t;
    char name_company[30];
    date create;
    float speed;
    char kind_p[30];
    char kind_t[30];
public:
    transport()
    {
        num_t=0;
        strcpy(name_company," ");
        speed=0;
        strcpy(kind_p," ");
        strcpy(kind_t," ");
    }

    void set()
    {
        cout <<"the number of trans:";
        cin>>num_t;
        cout<<"\n";
        cout<<"the name of company :";
        cin>>name_company;
        cout<<"\n";
        cout<<"the date"<<"\n";
        create.set_date();
        cout<<"the speed :";
        cin>>speed;
        cout<<"\n";
        cout<<"the type of ownership:";
        cin>>kind_p;
        cout<<"\n";
        cout<<"the type of trans:";
        cin>>kind_t;
        cout<<"\n";

    }
    char* get_t_transport()
    {
        return kind_t;
    }
    char* get_p_transport()
    {
        return kind_p;
    }
    char* get_n_company()
    {
        return name_company;
    }
    float get_speed()
    {
        return speed;
    }
    int get_num_trans()
    {
        return num_t;
    }
    void print_trans()
    {
        cout<<num_t<<endl;
        cout<<name_company<<endl;
        cout<<speed<<endl;
        cout<<kind_p<<endl;
        cout<<kind_t<<endl;
    }
    virtual void warning() {}
};
class aerial:public transport
{
protected:
    int num_eng;
    int length;
public:
    aerial()
    {
        num_eng=length=0;
    }
    void set_aerial()
    {
        cout<<"numbers of engine:";
        cin>>num_eng;
        cout<<"the length:";
        cin>>length;
    }
    int get_num_eng()
    {
        return num_eng;
    }
    int get_length()
    {
        return length;
    }
};
class people: public aerial
{
protected:
    int seat;
int empty_weight_pass;

public:
    people()
    {
        seat=0;
    }
    void set_people()
    {
        cout<<"numbers of seats:";
        cin>>seat;
        while(seat<0 || seat>40)
        {
            cout<<"it is wrong , you should write another number:"<<endl;
            cin>>seat;
        }
        cout<<"the empty weight:";
        cin>>empty_weight_pass;

    }
    int get_seat()
    {
        return seat;
    }
int get_empty_weight_pass()

{
    return empty_weight_pass;
}
    void print_people()
    {

        cout<<"the seats:"<<seat<<endl;
cout<<"the empty weight of plane:"<<empty_weight_pass<<endl;

    }
};
class goods:public aerial
{
protected:
    int empty_weight;
    int maxi_weight;
    int weight_of_goods;

public:
    goods()
    {
        empty_weight=maxi_weight=weight_of_goods=0;
    }
    void set_goods()
    {
        cout<<"the empty weight";
        cin>>empty_weight;
        cout<<"the max weight";
        cin>>maxi_weight;
        cout<<"the weight of goods:";
        cin>>weight_of_goods;
    }
    int get_empty_weight()
    {
        return empty_weight;
    }
    int get_maxi_weight()
    {
        return maxi_weight;
    }
    void print_goods()
    {
        cout<<"the empty weight"<<empty_weight<<endl;
        cout<<"the max weight"<<maxi_weight<<endl;
        cout<<"the weight of goods"<<weight_of_goods<<endl;
    }
};
class wilderness :public transport
{
protected:
    float capacity;
    float length;
public:
    wilderness()
    {
        capacity=length=0;
    }

    wilderness(float cap, float len)
    {
        capacity=cap;
        length=len;
    }
    void set_wild()
    {
        cout<<"the capacity of engine :";
        cin>>capacity;
        cout<<"\n";
        cout<<"the length of trans:";
        cin>>length;
        cout<<"\n";
    }
    float get_capacity()
    {
        return capacity;
    }
    float get_length()
    {
        return length;
    }
};
class bus: public wilderness
{

protected:
    int num_seat;
public:
    bus()
    {
        num_seat=0;
    }

    bus(int seat)
    {
        num_seat=seat;
    }

    void set_bus()
    {
        cout<<"the number of seats";
        cin>>num_seat;
        cout<<"\n";
    }
    int get_num_seat()
    {
        return num_seat;
    }
};

class car:public wilderness
{
protected:
    int num_doors;
public:
    car()
    {
        num_doors=0;
    }
    car(int doors)
    {
        num_doors=doors;
    }
    void set_car()
    {
        cout<<"the number of doors:";
        cin>>num_doors;
        cout<<"\n";
    }
    int get_num_doors()
    {
        return num_doors;
    }
    void print_car()
    {
        cout<<"the number of doors"<<num_doors<<endl;

    }
};
class lorry:public wilderness
{
protected:
    float tare_weight;
    float max_weight;
    float height;
public:
    lorry()
    {
        tare_weight=max_weight=height=0;

    }
    lorry(float tare,float maxw,float h)
    {
        tare_weight=tare;
        max_weight=maxw;
        height=h;
    }
    void set_lorry()
    {
        cout<<"the tare weight of lorry:";
        cin>>tare_weight;
        cout<<"\n";
        cout<<"the max weight of lorry:";
        cin>>max_weight;
        cout<<"\n";
        cout<<"the height of lorry:";
        cin>>height;
        cout<<"\n";

    }
    float get_tare_weight()
    {
        return tare_weight;
    }
    float get_max_weight()
    {
        return max_weight;
    }
    float get_height()
    {
        return height;
    }

};
class booking_record
{
public:
    int n;
    bool *data;
    people pe;
    float weight_bag_pass;
    int num_pass;
public:
    booking_record()
    {
        n=0;
        weight_bag_pass=0;
        num_pass=0;
    }
    booking_record(int x,float weight)
    {
        n=x;
        data=new bool[n];
        weight_bag_pass=weight;
        //num_pass=num;
    }
    void input_num_pass()
    {
        cout<<"pp"<<endl;
        cin>>num_pass;
    }
    void test_record()
    {
        //int v=pe.get_seat();
        //for(int i=0; i<v; i++)
        //{
        //   data[i]=0;
        // }
        for (int j=0; j<num_pass; j++)
            data[j]=1;
        for(int i=num_pass; i<=n; i++)
            data[i]=0;

    }

    void print_booking_record()
    {
        cout<<"y"<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<data[i]<<endl;
        }
    }
   float input_weight_bag()
    {float sum=0;
        cout<<"the weight of each person"<<endl;
        for(int i=0; i<num_pass; i++)
        {
            cout<<"the weight of pass"<<"("<<i+1<<")"<<":";
            cin>>weight_bag_pass;
            //cin>>"\n";
            while(weight_bag_pass<0 || weight_bag_pass>35)
                cin>>weight_bag_pass;
sum=sum+weight_bag_pass;
        }cout<<"the sum:"<<sum<<endl;
        return sum;
    }

};
class journey
{
protected:
    int num_jour;
    transport trans;
    char from[100];
    char to[100];
    booking_record pass;
    goods g;
    lorry lo;
public:
    journey()
    {
        num_jour=0;
        strcpy( from," ");
        strcpy(to,"");

    }
void warning(int x)
{
int y=pass.pe.get_seat();
  if(x>(25*y)){
  cout<<"false"<<endl;
 }

cout<<"true"<<endl;

}

};
bool file_is_ok(fstream &file)
{
    if(file.is_open())
        return true;
    else
    {
        cout<<"\ncan't open the file\n";
        exit(1);
    }
}
void create_people_file(char *filename,char *filename1)
{
people p;
    int i=0;

    char choice;
    fstream trans_bin;
    fstream pass_bin;
    pass_bin.open(filename,ios::binary|ios::out);
    if(file_is_ok(pass_bin))
        do
        {
            i++;
            cout<<"input data of plane people ("<<i<<"):\n";
            p.set_people();
            pass_bin.write((char*)&p,sizeof(people));
            cout<<"input new one(Y\N) \n";
            cin>>choice;
        }
        while(choice=='y'|| choice=='Y');
    pass_bin.close();
    pass_bin.open(filename,ios::binary|ios::in);
    trans_bin.open(filename1,ios::binary|ios::app);
    if(file_is_ok(pass_bin)&& file_is_ok(trans_bin))
        while(pass_bin.read((char*)&p,sizeof(people)))
    {
        trans_bin.write((char*)&p,sizeof(people));
    }
    pass_bin.close();
    trans_bin.close();


}
void create_goods_file(char*filename)
{
    int i=0;
    goods go;
    char choice;
    fstream good_bin;
    good_bin.open(filename,ios::binary|ios::out);
    if(file_is_ok(good_bin))
        do
        {
            i++;
            cout<<"input data of plane goods("<<i<<"):\n";
            go.set_goods();
            good_bin.write((char*)&go,sizeof(goods));
            cout<<"input new one(Y\N) \n";
            cin>>choice;
        }
        while(choice=='y' || choice=='Y');
            good_bin.close();

}
void create_car_file(char*filename)
{
    int i;
    char choice;
    car c;
    fstream cars_bin;
    cars_bin.open(filename,ios::binary|ios::out);
    if(file_is_ok(cars_bin))
        do
        {
            i++;
            cout<<"input data of car ("<<i<<"):\n";
            c.set_car();
            cars_bin.write((char*)&c,sizeof(car));
            cout<<"input new one (Y\N)\n";
            cin>>choice;
        }
        while(choice=='y' || choice=='Y');
            cars_bin.close();
}
void create_bus_file(char*filename)
{
    int i;
    char choice;
    bus b;
    fstream buss_bin;
    buss_bin.open(filename,ios::binary|ios::out);
    if(file_is_ok(buss_bin))
        do
        {
            i++;
            cout<<"input data of bus ("<<i<<") \n";
            b.set_bus();
            buss_bin.write((char*)&b,sizeof(bus));
            cout<<"input new one (Y\N)\n";
            cin>>choice;
        }
        while(choice=='y' || choice=='Y');
            buss_bin.close();
}
void create_lorry_file(char*filename)
{
    int i;
    char choice;
    lorry l;
    fstream lorrys_bin;
    lorrys_bin.open(filename,ios::binary|ios::out);
    if(file_is_ok(lorrys_bin))
        do
        {
            i++;
            cout<<"input data of lorry ("<<i<<") \n";
            l.set_lorry();
            lorrys_bin.write((char*)&l,sizeof(lorry));
            cout<<"input new one (Y\N)\n";
            cin>>choice;
        }
        while(choice=='y' || choice=='Y');
            lorrys_bin.close();
}
/*
void create_journey_file(char*filename)
{
    int i;
    char choice;
    journey j;
    fstream jou_bin;
    jou_bin.open(filename,ios::binary|ios::out);
    if(file_is_ok(jou_bin))
        do
    {
        cout<<"input data of journey ("<<i<<") \n";
        j.set_journey();
        jou_bin.write((char*)&j,sizeof(journey));
        cout<<"input new one (Y\N)\n";
        cin>>choice;
    }
    while(choice=='y'|| choice=='Y')
        jou_bin.close();
}*/

void display_people(char*filename)
 {
     people p;
     fstream pass_bin;
     pass_bin.open(filename,ios::binary|ios::in);
     if(file_is_ok(pass_bin))
        while(pass_bin.read((char*)&p,sizeof(people)))
        p.print_people();
     pass_bin.close();
 }

 void display_trans(char*filename)
 {
     transport t;
     fstream trans_bin;
     trans_bin.open(filename,ios::binary|ios::in);
     if(file_is_ok(trans_bin))
        while(trans_bin.read((char*)&t,sizeof(transport)))
        t.print_trans();
     trans_bin.close();
 }
  void display_goods(char*filename)
 {
     goods go;
     fstream good_bin;
     good_bin.open(filename,ios::binary|ios::in);
     if(file_is_ok(good_bin))
        while(good_bin.read((char*)&go,sizeof(goods)))
        go.print_goods();
     good_bin.close();
 }
void display_car(char*filename)
 {
     car c;
     fstream car_bin;
     car_bin.open(filename,ios::binary|ios::in);
     if(file_is_ok(car_bin))
        while(car_bin.read((char*)&c,sizeof(car)))
        c.print_car();
     car_bin.close();
 }
/*
struct linked
{
    transport *link;
    struct linked *next;

} ;
class linked_l
{
protected:
    linked *ll;
public:
    linked_l()
    {
        ll=NULL;
    }
    void insert_in(transport *trans)
    {
        linked*temp=new linked;
        temp->link=trans;
        temp->next=NULL;
        if(ll==NULL)
            ll=temp;
        else
            ll->next=temp;
        temp->next=NULL;
    }
    void display()
    {
        if(ll==NULL)
            cout<<"the list is empty"<<endl;
        else
        {
            linked*temp=ll;
            cout<<"the list is:";
            while(temp!=NULL)
            {
                cout<<temp->link<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;

        }
    }

};
char* search_type_trans(int num)
{

*/

int main()
{
    cout<<"''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''<<<<<<<<<<<<<<<<< hello to our company>>>>>>>>>>>>>>>>'''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
    cout<<"\n\n";
    int choice;
    while(choice!=7)
    {
        cout<<"press (1) if you want to display all of transport:"<<endl;
        cout<<"press (2) if you want to search about one trans and to know the type of it:"<<endl;
        cout<<"press (3) if you want to display all of journeys:"<<endl;
        cout<<"press (4) if you want to display the numbers of journey (plane/bus) between to country:"<<endl;
        cout<<"press (5) if you want calculate the number of people who travel in specific trans in specific time:"<<endl;
        cout<<"press (6) if you want to display to all of journeys in specific trans:"<<endl;
        cout<<"press (7) *********************** EXIT ***********************"<<endl;
        cout<<"the choice :"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            date t;
            transport y;
            y.set();
            people po;
            po.set_people();
            int u=po.get_seat();

            booking_record bo(u,10);
            bo.input_num_pass();
            bo.test_record();
            bo.print_booking_record();
           float n= bo.input_weight_bag();
journey m;
m.warning(n);


        }
//bo.print_arr();
            /* cout<<"what the name of transport do you want to insert?aerial(people\goods) or wilderness(bus\car\lorry)"<<endl;
             cin>>x;
             if(x==1)
             {
                 cout<<"r";
                 people person;
                 person.set_people();
                 listt.insert_in(&person);
                 listt.display();
             }
             //  y.set();
             // aerial a;
             // a.set_aerial();
             // goods b;
             // b.set_goods();
            //people o;
            //o.set_people();*/
        }
    }

    return 0;
}
