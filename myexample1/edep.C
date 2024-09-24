// ROOT macro file for plotting example B4 histograms
//
// Can be run from ROOT session:
// root[0] .x exep.C

{
  gROOT->Reset();
  gROOT->SetStyle("Plain");

  // Draw histos filled by Geant4 simulation
  //

  // Open file filled by Geant4 simulation
  TFile f("exep.root");

  TCanvas* c1 = new TCanvas();
  TH1D* hist1 = (TH1D*)f.Get("edep");
  hist1->Draw("HIST");
  hist1->GetXaxis()->SetTitle("X-MeV");
  hist1->GetYaxis()->SetTitle("Y-Number");
}
