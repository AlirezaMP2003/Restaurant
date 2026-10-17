# Restaurant Management System

A console-based restaurant management application written in C++. The program simulates a simple restaurant ordering workflow, allowing customers to select food items, place orders, review invoices, and check order status. It also provides a manager interface for reviewing customer orders and updating their preparation status.

## Features

### Customer

- Browse food categories, including pizza, sandwiches, salads, and drinks.
- View menu items with their ingredients, prices, and estimated preparation times.
- Place an order by selecting food items and quantities.
- Add multiple items to a single order.
- View an invoice containing order details, total price, and estimated preparation time.
- Indicate payment status when completing an order.
- Look up an existing order by customer name.

### Manager

- Access the manager interface with an optional password.
- Set or change the manager password.
- Review customer orders and their details.
- Check order payment status.
- Mark orders as ready for pickup.

## Technologies

- **Language:** C++
- **Application type:** Command-line interface (CLI)
- **Standard libraries:** `iostream`, `math.h`, `string.h`
- **Platform-specific library:** `conio.h`

## Getting Started

### Prerequisites

- A C++ compiler, such as MinGW GCC.
- A Windows environment or a compatible development environment that supports `conio.h` and the Windows console commands used by the program.

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/AlirezaMP2003/Restaurant.git
   ```

2. Navigate to the project directory:

   ```bash
   cd Restaurant
   ```

3. Compile the source file using MinGW GCC:

   ```bash
   g++ restaurant.cpp -o Restaurant.exe
   ```

4. Run the application:

   ```bash
   Restaurant.exe
   ```

Alternatively, open `restaurant.cpp` in a C++ IDE that supports the required libraries, such as Code::Blocks configured with MinGW.

## How to Use

When the application starts, select one of the available roles:

- **Manager:** Review customer orders, configure a password, and update order readiness.
- **Customer:** Place a new order or look up an existing order by name.

Follow the interactive console prompts to navigate the menu and complete the desired actions.

## Data Storage

This project uses in-memory data structures to store menu items, customer orders, and order statuses.

- No database is configured.
- Orders are not saved to files.
- All order data is lost when the application terminates.
- The manager password is stored in memory and does not persist between program executions.

## Limitations

This project is a basic educational implementation and is not intended for production use. It does not include persistent storage, a graphical user interface, or a database-backed customer management system.

## Future Improvements

Potential improvements include:

- Persistent storage for customer orders.
- Improved input validation and error handling.
- Menu management for adding, editing, and removing food items.
- A more robust authentication mechanism for manager access.
- Refactoring into separate classes and modules for improved maintainability.

## License

No license has been specified for this repository. All rights are reserved by the copyright holder unless a license is added.
