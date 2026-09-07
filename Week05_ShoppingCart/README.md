# C++ Week 5 - Shopping Cart

A simple C++ project created to practice object-oriented programming (OOP).

## Project Description

This program contains two classes:

- `Product` stores a product name and price.
- `ShoppingCart` receives `Product` objects and keeps track of the number of items and the total price.

The program also checks whether a product has a valid price before adding it to the cart.

## Concepts Practiced

- Classes and objects
- `private` and `public`
- Constructors
- `this` pointer
- Getters
- Member functions
- Object interaction
- Basic validation
- Passing an object to a function

## How It Works

1. Create `Product` objects with a name and price.
2. Create a `ShoppingCart` object.
3. Pass each `Product` object to `addItem()`.
4. `ShoppingCart` uses `product.getPrice()` to get the product's price.
5. If the price is valid, it adds the price to the total and increases the item count.
6. Display the final number of items and total price.

## Example Output

<img width="600" alt="output" src="https://github.com/user-attachments/assets/04fefcd1-ee79-428e-a4c9-a0d4ebbb7c55" />

## Mistakes / Challenges

- I tried to call `addItem()` from a `Product` object, but `addItem()` belongs to the `ShoppingCart` class.

- I first tried to call `getPrice()` directly inside `ShoppingCart`, but `getPrice()` belongs to `Product`. I needed to call it from a Product object using `product.getPrice()`.

- I found `double price = product.getPrice();` difficult at first because it gets a value from another object and stores the returned value in a variable.

- At first, `addItem()` received only a price. I later changed it so that `ShoppingCart` receives a whole `Product` object.

- I learned that when calling a member function, I need to think about which class the function belongs to.

## What I Learned

The most important thing I learned in this project was how two classes can work together.

`Product` is responsible for storing information about a product.

`ShoppingCart` is responsible for receiving products and calculating the total.

I also learned that private data cannot be accessed directly from another class, so a getter such as `getPrice()` can be used to access the value.

This project helped me better understand the relationship between classes and objects.


Author: Naoko Marin
Course: Self-study C++ Fundamentals Review
