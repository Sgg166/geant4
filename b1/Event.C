#include<iostream>
#include<fstream>
#include<string>
#include<vector>
int Event()
{
  std::ifstream ifs;
  ifs.open("Event.txt",std::ios::in);
  if(!ifs.is_open())
  {
    std::cout<<"no"<<std::endl;
  }
  std::string a,c,e,g;
   int b;
   double d,f,h;
   TH1F* event=new TH1F("Event_h","Particle population statistics",50,0,10);
   while(1)
   {
     ifs>>a>>b>>c>>d>>e>>f>>g>>h;
     if(ifs.eof())
       break;
     event->Fill(b);
     event->Fill(d);
     event->Fill(f);
     event->Fill(h);
    // std::cout<<"  "<<b<<"  "<<d<<"  "<<f<<"  "<<h<<std::endl;  
   }
   ifs.close();
   TCanvas *C= new TCanvas();
  event->Draw();
  //delete event;
  //delete A;
  return 0;
}
