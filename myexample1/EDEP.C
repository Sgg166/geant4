void EDEP()
{
  std::ifstream ifs;
  ifs.open("EDEP.txt",std::ios::in);
  double energy;
  char name[20];
  double length;
  TH1D* th1d=new TH1D("","Count the energy",50,0,100);
//  TH1D* th2d=new TH1D("","Count the steplength",100,0,7.5);
  while(1)
  {
    ifs>>energy>>name;//>>length>>name;
    if(ifs.eof())
      break;
    th1d->Fill(energy*1000);
   // th1d->Fill(length*1000);
  }
 // TCanvas* c=new TCanvas();
 // c->Divide(1,2,0,0);
 // c->cd(1);
 // c->GetPad(1)->SetRightMargin(.01);
  th1d->Draw("HIST");
  th1d->GetXaxis()->SetTitle("X-KeV");
  th1d->GetYaxis()->SetTitle("Y-Number");
 /* c->cd(2);
  c->GetPad(1)->SetRightMargin(.01);
  th2d->Draw("HIST");
  th2d->GetXaxis()->SetTitle("X-um");
  th2d->GetYaxis()->SetTitle("Y-Number");*/
  ifs.close();
}

