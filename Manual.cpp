#include <iostream>
#include "Manual.hpp"
#include "Book.hpp"
#include <regex>


Manual::Manual()
    : url(""), device(""), hasvisualaid(0), website(false) {}


//paramaterized constructor with strings and constants to initiate functions
Book::Book(std::string const title, std::string const author, const int pagenumber, bool digital)
    : title(title), author(author), pagenumber(pagenumber), digital(digital) {}
// setters and getters used here for core functions such as title, author and page count
void Book::setTitle (const std::string& title) 
{ this->title = title; }
std::string Book::getTitle() const
{ return title; }
void Book::setAuthor(const std::string& author) 
{ this->author = author; }
std::string Book::getAuthor() const 
{ return author; }
//if statement used here to determine correct page number in case it is defaulted as a negative value or below 0, you can't have 0 pages in a book.
void Book::setPageCount(const int& pagenumber)  
{ 
  if  (pagenumber > 0) {
     this->pagenumber = pagenumber;
    
  }
   }
//accessor functions
int Book::getPageCount() const
{ return pagenumber; }
void Book::setDigital() 
{ this->digital = true; } 
  bool Book::isDigital() const 
{ return digital; }
  

bool Manual::hasWebsite() const {
  std::regex regPattern("(https?://www\\..+\\.\\w{2,})");  
  std::string setUrl = getWebsite();
  if (std::regex_match(setUrl, regPattern)) {
    return true; 
  } else {
    return false;
  }
}