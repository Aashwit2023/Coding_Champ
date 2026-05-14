#include <string>
#include <iostream>
#include <vector>
#include <memory>  // for std::unique_ptr
#include <limits>  // for std::numeric_limits

class Item {
private:
    std::string name;
    int quantity;
    float price;

public:
    Item(std::string name, int quantity, float price)
        : name{std::move(name)}, quantity{quantity}, price{price} {}

    // Getters
    std::string get_name() const { return name; }
    int get_quantity() const { return quantity; }
    float get_price() const { return price; }

    // Setters
    void set_quantity(int new_quantity) { quantity = new_quantity; }

    // Compare item name
    bool is_match(const std::string &other) const { return name == other; }
};

class Inventory {
private:
    std::vector<std::unique_ptr<Item>> items;  // better structure
    float total_money;  // total money earned

    // Helper: Display one item
    static void display_data(const Item &item) {
        std::cout << "\nItem name: " << item.get_name();
        std::cout << "\nQuantity: " << item.get_quantity();
        std::cout << "\nPrice: " << item.get_price();
    }

public:
    Inventory() : total_money{0.0f} {}

    // ✅ Add new item
    void add_item() {
        std::string name;
        int quantity;
        float price;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\nEnter item name: ";
        std::getline(std::cin, name);
        std::cout << "Enter quantity: ";
        std::cin >> quantity;
        std::cout << "Enter price: ";
        std::cin >> price;

        // Check if item already exists → update instead of duplicate
        for (auto &item : items) {
            if (item->is_match(name)) {
                int new_qty = item->get_quantity() + quantity;
                item->set_quantity(new_qty);
                std::cout << "\nUpdated " << name << " quantity to " << new_qty;
                return;
            }
        }

        // Add new item
        items.push_back(std::make_unique<Item>(name, quantity, price));
        std::cout << "\nItem added successfully!";
    }

    // ✅ Sell item
    void sell_item() {
        if (items.empty()) {
            std::cout << "\nInventory is empty!";
            return;
        }

        std::string item_to_check;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\nEnter item name to sell: ";
        std::getline(std::cin, item_to_check);

        for (auto it = items.begin(); it != items.end(); ++it) {
            if ((*it)->is_match(item_to_check)) {
                remove_item(it);
                return;
            }
        }

        std::cout << "\nThis item is not in your Inventory.";
    }

    // ✅ Fixed remove_item() — handles removal & money update
    void remove_item(std::vector<std::unique_ptr<Item>>::iterator it) {
        int input_quantity;
        std::cout << "\nEnter number of items to sell: ";
        std::cin >> input_quantity;

        Item *item = it->get();
        int quantity = item->get_quantity();

        if (input_quantity <= quantity) {
            float price = item->get_price();
            float money_earned = price * input_quantity;
            total_money += money_earned;

            int remaining = quantity - input_quantity;
            item->set_quantity(remaining);

            std::cout << "\nItems sold successfully!";
            std::cout << "\nMoney earned: " << money_earned;

            // Remove item if quantity becomes zero
            if (remaining == 0) {
                std::cout << "\n" << item->get_name() << " is now out of stock and removed.";
                items.erase(it);
            }
        } else {
            std::cout << "\nCannot sell more items than available!";
        }
    }

    // ✅ Display all items
    void list_items() const {
        if (items.empty()) {
            std::cout << "\nInventory empty.";
            return;
        }

        std::cout << "\n=== Inventory List ===";
        for (const auto &item : items) {
            display_data(*item);
            std::cout << "\n--------------------";
        }
        std::cout << "\nTotal Money Earned: " << total_money << "\n";
    }
};

// ==============================
// main() — unchanged for testing
// ==============================
int main() {
    int choice;
    Inventory inventory_system;
    std::cout << "Welcome to the Inventory System!";

    while (true) {
        std::cout << "\n\nMENU\n"
                  << "1. Add new item\n"
                  << "2. Sell item\n"
                  << "3. List items\n"
                  << "4. Exit\n\n"
                  << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                inventory_system.add_item();
                break;
            case 2:
                inventory_system.sell_item();
                break;
            case 3:
                inventory_system.list_items();
                break;
            case 4:
                std::cout << "\nExiting program... Goodbye!\n";
                return 0;
            default:
                std::cout << "\nInvalid choice entered!";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
        }
    }
}


// #include <string>
// #include <iostream>
// #include <vector>
// #include <memory> // for std::unique_ptr
// #include <limits> // for INT_MAX

// class Item {
// private:
//     std::string name;
//     int quantity;
//     float price;

// public:
//     Item(std::string name, int quantity, float price)
//         : name{std::move(name)}, quantity{quantity}, price{price} {}

//     std::string get_name() const { return name; }
//     int get_quantity() const { return quantity; }
//     void set_quantity(int new_quantity) { quantity = new_quantity; }
//     float get_price() const { return price; }
//     bool is_match(const std::string &other) const { return name == other; }
// };

// class Inventory {
// private:
//     std::vector<std::unique_ptr<Item>> items;
//     float total_money;

//     static void display_data(const Item &item) {
//         std::cout << "\nItem name: " << item.get_name();
//         std::cout << "\nQuantity: " << item.get_quantity();
//         std::cout << "\nPrice: " << item.get_price();
//     }

// public:
//     Inventory() : total_money{0.0f} {}

//     void add_item() {
//         std::string name;
//         int quantity;
//         float price;

//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//         std::cout << "\nEnter item name: ";
//         std::cin >> name;
//         std::cout << "Enter quantity: ";
//         std::cin >> quantity;
//         std::cout << "Enter price: ";
//         std::cin >> price;

//         items.push_back(std::make_unique<Item>(name, quantity, price));
//         std::cout << "\nItem added successfully!";
//     }

//     void sell_item() {
//         if (items.empty()) {
//             std::cout << "\nInventory is empty!";
//             return;
//         }

//         std::string item_to_check;
//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//         std::cout << "\nEnter item name: ";
//         std::cin >> item_to_check;

//         for (auto &item : items) {
//             if (item->is_match(item_to_check)) {
//                 remove_item(item.get());
//                 return;
//             }
//         }
//         std::cout << "\nThis item is not in your Inventory";
//     }

//     void remove_item(Item *item) {
//         int input_quantity;
//         std::cout << "\nEnter number of items to sell: ";
//         std::cin >> input_quantity;

//         int quantity = item->get_quantity();
//         if (input_quantity <= quantity) {
//             float price = item->get_price();
//             float money_earned = price * input_quantity;
//             item->set_quantity(quantity - input_quantity);
//             std::cout << "\nItems sold";
//             std::cout << "\nMoney received: " << money_earned;
//             total_money += money_earned;
//         } else {
//             std::cout << "\nCannot sell more items than you have.";
//         }
//     }

//     void list_items() const {
//         if (items.empty()) {
//             std::cout << "\nInventory empty.";
//             return;
//         }

//         std::cout << "\n=== Inventory List ===";
//         for (const auto &item : items) {
//             display_data(*item);
//             std::cout << "\n";
//         }
//         std::cout << "\nTotal Money: " << total_money;
//     }
// };

// // no need to modify anything here
// int main() {
//     int choice;
//     Inventory inventory_system;
//     std::cout << "Welcome to the inventory!";

//     while (true) {
//         std::cout << "\n\nMENU\n"
//                   << "1. Add new item\n"
//                   << "2. Sell item\n"
//                   << "3. List items\n"
//                   << "4. Exit\n\n"
//                   << "Enter your choice: ";
//         std::cin >> choice;

//         switch (choice) {
//             case 1:
//                 inventory_system.add_item();
//                 break;
//             case 2:
//                 inventory_system.sell_item();
//                 break;
//             case 3:
//                 inventory_system.list_items();
//                 break;
//             case 4:
//                 exit(0);
//             default:
//                 std::cout << "\nInvalid choice entered";
//                 std::cin.clear();
//                 std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//                 break;
//         }
//     }
// }






// // #include <string>
// // #include<iostream>
// // #include <utility>
// // #include<vector>
// // #include<memory>
// // using namespace std;

// // class Item {
// // private:
// //     std::string name;
// //     int quantity;
// //     float price;

// // public:
// //     Item(
// //         std::string name,
// //         int quantity,
// //         float price
// //     ) :
// //         name{std::move(name)},
// //         quantity{quantity},
// //         price{price} {

// //     }

// //     std::string get_name() const {
// //         return name;
// //     }

// //     int get_quantity() const {
// //         return quantity;
// //     }

// //     void set_quantity(int new_quantity) {
// //         quantity = new_quantity;
// //     }

// //     float get_price() const {
// //         return price;
// //     }

// //     bool is_match(const std::string &other) {
// //         return name == other;
// //     }
// // };

// // class Inventory {
// // private:
// //     Item *items[20];
// //     float total_money;
// //     int item_count;

// //     static void display_data(Item &item) {
// //         std::cout << "\nItem name: " << item.get_name();
// //         std::cout << "\nQuantity: " << item.get_quantity();
// //         std::cout << "\nPrice: " << item.get_price();
// //     }

// // public:
// //     Inventory() :
// //             items{},
// //             total_money{0},
// //             item_count{0} {

// //     }

// //     void add_item() {
// //         std::string name;
// //         int quantity;
// //         float price;

// //         std::cin.ignore();
// //         std::cout << "\nEnter item name: ";
// //         std::cin >> name;
// //         std::cout << "Enter quantity: ";
// //         std::cin >> quantity;
// //         std::cout << "Enter price: ";
// //         std::cin >> price;

// //         items[item_count] = new Item(name, quantity, price);
// //         item_count++;
// //     }

// //     void sell_item() {
// //         std::string item_to_check;
// //         std::cin.ignore();
// //         std::cout << "\nEnter item name: ";
// //         std::cin >> item_to_check;

// //         for (int i = 0; i < item_count; i++) {
// //             if (items[i]->is_match(item_to_check)) {
// //                 remove_item(i);
// //                 return;
// //             }
// //         }
// //         std::cout << "\nThis item is not in your Inventory";
// //     }

// //     void remove_item(int item_index) {
// //         int input_quantity;
// //         Item *item = items[item_index];
// //         std::cout << "\nEnter number of items to sell: ";
// //         std::cin >> input_quantity;

// //         int quantity = item->get_quantity();
// //         if (input_quantity <= quantity) {
// //             float price = item->get_price();
// //             float money_earned = price * input_quantity;
// //             item->set_quantity(quantity - input_quantity);
// //             std::cout << "\nItems sold";
// //             std::cout << "\nMoney received: " << money_earned;
// //             total_money += money_earned;
// //         } else {
// //             std::cout << "\nCannot sell more items than you have.";
// //         }
// //     }

// //     void list_items() {
// //         if (item_count == 0) {
// //             std::cout << "\nInventory empty.";
// //             return;
// //         }

// //         for (int i = 0; i < item_count; i++) {
// //             display_data(*items[i]);
// //             std::cout << "\n";
// //         }
// //     }
// // };

// // // no need to modify anything here
// // int main() {
// //     int choice;
// //     Inventory inventory_system;
// //     std::cout << "Welcome to the inventory!";

// //     while (1) {
// //         std::cout << "\n\nMENU\n"
// //                   << "1. Add new item\n"
// //                   << "2. Sell item\n"
// //                   << "3. List items\n"
// //                   << "4. Exit\n\n"
// //                   << "Enter your choice: ";
// //         std::cin >> choice;

// //         switch (choice) {
// //             case 1:
// //                 inventory_system.add_item();
// //                 break;

// //             case 2:
// //                 inventory_system.sell_item();
// //                 break;

// //             case 3:
// //                 inventory_system.list_items();
// //                 break;

// //             case 4:
// //                 exit(0);

// //             default:
// //                 std::cout << "\nInvalid choice entered";
// //                 std::cin.clear();
// //                 std::cin.ignore(INT_MAX, '\n');
// //                 break;
// //         }
// //     }
// // }
