#include <iostream>
#include <cstring>

class Book {
private:
    char* title;
    char* author;
    double price;
    char* publisher;
    int stockPosition;

public:
    // Constructor to initialize book details
    Book(const char* t, const char* a, double p, const char* pub, int stock)
        : price(p), stockPosition(stock) {
        // Allocate memory for title, author, and publisher
        title = new char[strlen(t) + 1];
        author = new char[strlen(a) + 1];
        publisher = new char[strlen(pub) + 1];

        // Copy values to allocated memory
        strcpy(title, t);
        strcpy(author, a);
        strcpy(publisher, pub);
    }

    // Destructor to free allocated memory
    ~Book() {
        delete[] title;
        delete[] author;
        delete[] publisher;
    }

    // Member function to check availability and display details
    void checkAvailability(const char* inputTitle, const char* inputAuthor, int numCopies) const {
        if (strcmp(title, inputTitle) == 0 && strcmp(author, inputAuthor) == 0) {
            // Book found
            if (stockPosition >= numCopies) {
                // Sufficient copies in stock
                std::cout << "Book Details:\n";
                std::cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: $" << price
                          << "\nPublisher: " << publisher << "\nIn Stock: " << stockPosition << " copies\n";

                // Display total cost
                double totalCost = price * numCopies;
                std::cout << "Total Cost for " << numCopies << " copies: $" << totalCost << std::endl;
            } else {
                // Insufficient copies in stock
                std::cout << "Required copies not in stock.\n";
            }
        } else {
            // Book not found
            std::cout << "Book not available.\n";
        }
    }
};

int main() {
    // Example usage of the Book class
    Book book1("The Catcher in the Rye", "J.D. Salinger", 15.99, "Little, Brown and Company", 10);
    Book book2("To Kill a Mockingbird", "Harper Lee", 12.50, "J.B. Lippincott & Co.", 15);

    // Check availability and display details
    book1.checkAvailability("The Catcher in the Rye", "J.D. Salinger", 3);
    book2.checkAvailability("To Kill a Mockingbird", "Harper Lee", 20);

    return 0;
}
