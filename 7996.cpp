#include <iostream>
#include <string>
using namespace std;
class Hardwares{
private:
    string CPU_;
    string memory_;
    string disk_;
public:
    void setCPU(string CPU) {CPU_ = CPU;}
    void setMemory(string memory) {memory_ = memory;}
    void setDisk(string disk) {disk_ = disk;}
    void print() {
      cout<<"Hardwares : "<<endl;
      cout<<"-CPU:"<<CPU_<<endl;
      cout<<"-memory:"<<memory_<<endl;
      cout<<"-disk:"<<disk_<<endl;
    }
};
class Softwares{
private:
    string OS_;
    string browser_;
public:
    void setOS(string OS) {OS_ = OS;}
    void setBrowser(string browser) {browser_ = browser;}
    void print() {
      cout<<"Softwares : "<<endl;
      cout<<"-OS:"<<OS_<<endl;
      cout<<"-browser:"<<browser_<<endl;
    }
};
class Computer{
private:
    string supplier_;//商家
    Hardwares hardwares;//硬件
    Softwares softwares;//软件
public:
    Computer(string supplier) {supplier_ = supplier;}
    void changeHardware(string hardwareType, string hardwareName) {
      if (hardwareType == "CPU")hardwares.setCPU(hardwareName);
      else if (hardwareType == "memory")hardwares.setMemory(hardwareName);
      else if (hardwareType == "disk")hardwares.setDisk(hardwareName);
    }
    void changeSoftware(string softwareType, string softwareName) {
      if (softwareType == "OS")softwares.setOS(softwareName);
      else if (softwareType == "browser")softwares.setBrowser(softwareName);
    }
    void print() {
      cout<<"supplier : "<<supplier_<<endl;
      hardwares.print();
      softwares.print();
      cout<<endl;
    }
};
