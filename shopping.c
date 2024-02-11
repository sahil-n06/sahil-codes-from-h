#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    float price;
} Item;

typedef struct {
    Item items[MAX_ITEMS];
    int quantity[MAX_ITEMS];
    int num_items;
} ShoppingCart;

void initializeCart(ShoppingCart* cart) {
    cart->num_items = 0;
}

void addItemToCart(ShoppingCart* cart, Item item, int quantity) {
    if (cart->num_items >= MAX_ITEMS) {
        printf("Cart is full. Cannot add more items.\n");
        return;
    }

    cart->items[cart->num_items] = item;
    cart->quantity[cart->num_items] = quantity;
    cart->num_items++;

    printf("Item added to the cart.\n");
}

void viewCart(const ShoppingCart* cart) {
    if (cart->num_items == 0) {
        printf("Your cart is empty.\n");
        return;
    }

    printf("Your cart:\n");
    printf("------------------------------------------------\n");
    for (int i = 0; i < cart->num_items; i++) {
        printf("%s (Quantity: %d) - $%.2f\n", cart->items[i].name, cart->quantity[i], cart->items[i].price);
    }
    printf("------------------------------------------------\n");
}

float calculateTotal(const ShoppingCart* cart) {
    float total = 0.0;
    for (int i = 0; i < cart->num_items; i++) {
        total += cart->items[i].price * cart->quantity[i];
    }
    return total;
}

int main() {
    Item item1 = { "Item 1", 10.99 };
    Item item2 = { "Item 2", 5.49 };
    Item item3 = { "Item 3", 15.79 };

    ShoppingCart cart;
    initializeCart(&cart);

    addItemToCart(&cart, item1, 2);
    addItemToCart(&cart, item2, 1);
    addItemToCart(&cart, item3, 3);

    viewCart(&cart);

    float total = calculateTotal(&cart);
    printf("Total: $%.2f\n", total);

    return 0;
}
