void Track()
{
    ifstream in;
    in.open("Track.txt");
    TFile *f1 = new TFile("Track.root","recreate");
    int a;
    char dw[5];
    char particle_name[20], process[20];
    double energy_pre,energy_post;
    double x_pre,y_pre,z_pre;
    double x_post,y_post,z_post;
    TH3D *h1 = new TH3D ("h1","",100,-1,1,100,-1,1,100,-30,30);
    h1->SetMarkerStyle(24);
    h1->SetMarkerColor(2);
    h1->SetMarkerSize(0.5);
    TH3D *h2 = new TH3D ("h2","",100,-1,1,100,-1,1,100,-30,30);
    h2->SetMarkerStyle(24);
    h2->SetMarkerColor(4);
    h2->SetMarkerSize(0.5);

    //in>>a>>particle_name>>energy_pre>>x_pre>>y_pre>>z_pre>>dw>>a>>energy_post>>x_post>>y_post>>z_post>>dw>>proc    ess;
    TTree *t1 = new TTree(particle_name,process);
    t1->Branch("energy_pre",&energy_pre,"energy_pre/D");
    t1->Branch("energy_post",&energy_post,"energy_post/D");
    t1->Branch("x_pre",&x_pre,"x_pre/D");
    t1->Branch("y_pre",&y_pre,"y_pre/D");
    t1->Branch("z_pre",&z_pre,"z_pre/D");
    t1->Branch("x_post",&x_post,"x_post/D");
    t1->Branch("y_post",&y_post,"y_post/D");
    t1->Branch("z_post",&z_post,"z_post/D");
    t1->Branch("neutron",&process,"process/C");

    

    while(1)
    {

        in>>a>>particle_name>>energy_pre>>x_pre>>y_pre>>z_pre>>dw>>a>>energy_post>>x_post>>y_post>>z_post>>dw>>process;
       // std::cout<<a<<" "<<particle_name<<" "<<energy_pre<<" "<<a<<std::endl;
      if(in.eof())
          break;
      std::cout<<particle_name<<" "<<energy_pre<<" "<<x_pre<<" "<<y_pre<<" "<<z_pre<<" "<<energy_post<<" "<<x_post<<" "<<y_post<<" "<<z_post<<" "<<process<<std::endl;
      h1->Fill(x_pre,y_pre,z_pre);
      h2->Fill(x_post,y_post,z_post);
      t1->Fill();
    }
    in.close();
    f1->Write();
    h1->Draw();
    h2->Draw("sames");


}

