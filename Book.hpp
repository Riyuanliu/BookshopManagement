//
//  Book.hpp
//  BookshopManagement
//
//  Created by Riyuan Liu on 6/20/23.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
using namespace std;

class Book{
private:
    std::string book_title_;
    std::string book_author_;
    int page_count_;
    int price_;
    bool available_;
public:         //constructor
//Default constructor.
//Default-initializes all private members. Booleans are default-initialized to False.
    Book(){
        book_title_="";
        book_author_="";
        page_count_=0;
        price_=0;
        available_=0;
    }
/*
      Parameterized constructor.
      @param      : The title of the book
      @param      : The author of the book
      @param      : The number of pages in the book
      @param      : A flag indicating whether the book is in digital form with default value False
      @post       : The private members are set to the values of the corresponding parameters.
 */
    Book(std::string book_title, std::string book_author,int page_count, bool available=false);
    //mutator
/*
   @param  : the title of the Book
   @post   : sets the Book's title to the value of the parameter
*/
    void setBookTitle(const std::string& title) {
        book_title_ = title;
    }

        // Getter for book title
    std::string getBookTitle() const {
        return book_title_;
    }

    // Setter for book author
    void setBookAuthor(const std::string& author) {
        book_author_ = author;
    }

    // Getter for book author
    std::string getBookAuthor() const {
        return book_author_;
    }

    // Setter for page count
    void setPageCount(int count) {
        page_count_ = count;
    }

    // Getter for page count
    int getPageCount() const {
        return page_count_;
    }

    // Setter for price
    void setPrice(int price) {
        price_ = price;
    }

    // Getter for price
    int getPrice() const {
        return price_;
    }

    // Setter for availability
    void setAvailable(bool available) {
        available_ = available;
    }

    // Getter for availability
    bool isAvailable() const {
        return available_;
    }
    /*
      @param     : A reference to the right hand side of the == operator.
      @return     : Returns true if the right hand side book is the identical, false otherwise.

      Note: ALL attributes must be equal for two books to be deemed equal.

      Example: In order for book1 to be == to book 2 we must have:
      - The same title
      - The same author
      - The same page count
      - They must either be both digital or both not
    */
    bool operator==(const Book& rhs)const{
        if(book_title_==rhs.book_title_&&book_author_==rhs.book_author_&&page_count_==rhs.page_count_&&available_==rhs.available_){
            return true;
        }
        else{
            return false;
        }
    }

    /*
      @param     : A reference to the right hand side of the != operator.
      @return     : Returns true if the right hand side book is NOT identical (!=), false otherwise.

      Note: ALL attributes must be equal for two books to be deemed equal.
    */
    bool operator!=(const Book& Book1)const{
        if(book_title_==rhs.book_title_&&book_author_==rhs.book_author_&&page_count_==rhs.page_count_&&available_==rhs.available_){
            return false;
        }
        else{
            return true;
        }
    }


    /*
      @post     : displays Book data in the form:
      "[title_] is written by [author_]. Page Count: [page_count_]. [It is / It is not] available digitally.\n"
    */
    virtual void display()=0;
    /*
    @param:  A reference to a string key
      @post:   Display book data if key argument matches (key match will be subclass specific)
    */
    virtual void displayFilter(const std::string& rhs)=0;
};
#endif //end Book


#endif /* Book_hpp */
