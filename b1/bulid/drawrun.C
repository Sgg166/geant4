void drawrun()
{
  std::ifstream ifs;
  ifs.open("Run.txt",std::ios::in);
  char name[20];
  double energy;
  int nofevents;
  int count;
  int num = 0;
 // TH1D* th1d=new TH1D("","nomber of counrt",30,0,7);
  TGraph *gh = new TGraph();
  while(1)
  {
    ifs>>name>>name>>name>>energy>>name>>nofevents>>name>>count;
    if(ifs.eof())
      break;
   // th1d->Fill(energy,count);
    gh->SetPoint(num,energy,count/1000.);
    num++;
  }
  gh->Draw();
  //gPad->SetLogx();
  gh->SetTitle("nomber of counrt");
  gh->SetMarkerStyle(23);
  gh->SetMarkerColor(1);
  gh->SetLineColor(2);
  gh->SetMarkerSize(2);
  gh->GetXaxis()->SetTitle("X-MeV");
  gh->GetYaxis()->SetTitle("Y-Number");
  //gh->GetXaxis()->SetLimits(0, 7);
  gh->GetXaxis()->SetRangeUser(0,40);
  gh->GetXaxis()->SetNdivisions(120);
  gh->Draw("APL");
  ifs.close();
}

