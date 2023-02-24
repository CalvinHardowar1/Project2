#ifndef MANUAL_HPP
#define MANUAL_HPP

#include <iostream>
#include <string> 
#include <regex>
class Manual {
  private:
  std::string url;
  std::string device;
  bool hasvisualaid;
  bool website;

  public:
   Manual();
   Manual(std::string url, std::string device, bool hasvisualaid,   bool iswebsite);
  std::string(const std::string& url);
  void getUrl() const;
  void setDevice(const std::string& device);
  std::string getDevice() const;
  void setHasvisualaid();
  bool hasvisualaid() const;
  std::string getWebsite() const;
  bool hasWebsite() const;


}
#endif
};