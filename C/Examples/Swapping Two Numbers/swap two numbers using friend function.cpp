//	swap two numbers using friend function

//	http://bcahelponline.blogspot.in/2011/12/write-program-to-swap-two-numbers-using.html

#include<iostream.h>
#include<conio.h>
class sample
{
   private:
       int x,y;
   public:
       void setdata(int a,int b)
       {
          x=a;
          y=b;
       }
       void showdata()
       {
          cout<<"x="<<x<<"\ny="<<y;
       }
   friend void swap(sample &s);
};
   void swap(sample &s)
   {
      int temp;
      temp=s.x;
      s.x=s.y;
      s.y=temp;
   }
void main()
{
    sample s;
    int x1,x2;
    clrscr();
    cout<<"\nInput 2 Numbers:";
    cin>>x1>>x2;
    s.setdata(x1,x2);
    cout<<"\nBefore Swapping\n";
    s.showdata();
    cout<<"\nAfter Swapping\n";
    s.showdata();
    getch();
}
