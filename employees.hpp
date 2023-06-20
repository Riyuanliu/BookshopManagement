//
//  employees.hpp
//  BookshopManagement
//
//  Created by Riyuan Liu on 6/20/23.
//

#ifndef employees_hpp
#define employees_hpp

#include <stdio.h>
class employees
{
    int id;                //Primary Key
    string name;
    string addr_line1;
    string addr_line2;
    string addr_city;
    string addr_state;
    long int phn;
    date date_of_joining;
    long int salary;
    string mgr_status;    //check(T or F) def f
public:
    // Setter for ID
    void setID(int empID) {
        id = empID;
    }
    
    // Getter for ID
    int getID() const {
        return id;
    }
    
    // Setter for name
    void setName(const std::string& empName) {
        name = empName;
    }
    
    // Getter for name
    std::string getName() const {
        return name;
    }
    
    // Setter for address line 1
    void setAddressLine1(const std::string& line1) {
        addr_line1 = line1;
    }
    
    // Getter for address line 1
    std::string getAddressLine1() const {
        return addr_line1;
    }
    
    // Setter for address line 2
    void setAddressLine2(const std::string& line2) {
        addr_line2 = line2;
    }
    
    // Getter for address line 2
    std::string getAddressLine2() const {
        return addr_line2;
    }
    
    // Setter for city
    void setCity(const std::string& city) {
        addr_city = city;
    }
    
    // Getter for city
    std::string getCity() const {
        return addr_city;
    }
    
    // Setter for state
    void setState(const std::string& state) {
        addr_state = state;
    }
    
    // Getter for state
    std::string getState() const {
        return addr_state;
    }
    
    // Setter for phone number
    void setPhoneNumber(long int number) {
        phn = number;
    }
    
    // Getter for phone number
    long int getPhoneNumber() const {
        return phn;
    }
    
    // Setter for date of joining
    void setDateOfJoining(const std::tm& joiningDate) {
        date_of_joining = joiningDate;
    }
    
    // Getter for date of joining
    std::tm getDateOfJoining() const {
        return date_of_joining;
    }
    
    // Setter for salary
    void setSalary(long int empSalary) {
        salary = empSalary;
    }
    
    // Getter for salary
    long int getSalary() const {
        return salary;
    }
    
    // Setter for manager status
    void setManagerStatus(const std::string& status) {
        mgr_status = status;
    }
    
    // Getter for manager status
    std::string getManagerStatus() const {
        return mgr_status;
    }
};
#endif /* employees_hpp */
