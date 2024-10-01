#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Product class to represent individual items in the inventory
class Product {
public:
    string name;
    int productID;
    int stock;
    int reorderLevel;
    int price;

    Product(string name, int productID, int stock, int reorderLevel, int price) {
        this->name = name;
        this->productID = productID;
        this->stock = stock;
        this->reorderLevel = reorderLevel;
        this->price = price;
    }

    void displayProductInfo() {
        cout << "Product ID: " << productID << ", Name: " << name
             << ", Stock: " << stock << ", Price: $" << price << endl;
    }

    // Update stock after sale or restock
    void updateStock(int quantity) {
        stock += quantity;
        if (stock < reorderLevel) {
            cout << "Warning: Stock for " << name << " is below reorder level. Please reorder soon!" << endl;
        }
    }

    // Function to check if a reorder is needed
    bool isReorderNeeded() {
        return stock < reorderLevel;
    }
};

// Inventory class to manage all products
class Inventory {
public:
    vector<Product> products;

    // Add product to the inventory
    void addProduct(Product product) {
        products.push_back(product);
    }

    // Find product by ID
    Product* findProduct(int productID) {
        for (auto& product : products) {
            if (product.productID == productID) {
                return &product;
            }
        }
        return nullptr;
    }

    // Display all products in the inventory
    void displayInventory() {
        cout << "------ Inventory ------" << endl;
        for (auto& product : products) {
            product.displayProductInfo();
        }
    }

    // Handle sales transactions
    void sellProduct(int productID, int quantity) {
        Product* product = findProduct(productID);
        if (product != nullptr) {
            if (product->stock >= quantity) {
                product->updateStock(-quantity);  // Deduct stock
                cout << "Sold " << quantity << " units of " << product->name << endl;
            } else {
                cout << "Not enough stock available for " << product->name << endl;
            }
        } else {
            cout << "Product not found!" << endl;
        }
    }

    // Restock products
    void restockProduct(int productID, int quantity) {
        Product* product = findProduct(productID);
        if (product != nullptr) {
            product->updateStock(quantity);  // Add stock
            cout << "Restocked " << quantity << " units of " << product->name << endl;
        } else {
            cout << "Product not found!" << endl;
        }
    }

    // Generate report of low-stock products
    void generateLowStockReport() {
        cout << "------ Low Stock Report ------" << endl;
        for (auto& product : products) {
            if (product.isReorderNeeded()) {
                cout << "Product: " << product.name << ", Stock: " << product.stock
                     << ", Reorder Level: " << product.reorderLevel << endl;
            }
        }
    }
};

int main() {
    // Creating an inventory system
    Inventory inventory;

    // Adding some products to the inventory
    Product p1("Laptop", 101, 50, 10, 1000);
    Product p2("Smartphone", 102, 30, 5, 700);
    Product p3("Headphones", 103, 100, 20, 100);

    inventory.addProduct(p1);
    inventory.addProduct(p2);
    inventory.addProduct(p3);

    // Display current inventory
    inventory.displayInventory();

    // Simulate selling some products
    inventory.sellProduct(101, 45);  // Sell 45 Laptops
    inventory.sellProduct(102, 15);  // Sell 15 Smartphones

    // Display inventory after sales
    inventory.displayInventory();

    // Generate low stock report
    inventory.generateLowStockReport();

    // Restock products
    inventory.restockProduct(101, 50);  // Restock Laptops

    // Display final inventory
    inventory.displayInventory();

    return 0;
}
