#### Extraído de Mistral AI em 14 abr. 2024

# Concert Ticket Management System

## Objective:
Create a simple concert ticket management system that allows users to book tickets, view available seats, 
and calculate the total cost of their booking.

## Requirements:
**Modularization**: Break down the program into functions and classes.
**Expressions**: Use expressions to calculate the total cost based on the number of tickets and seat types.

## Features:

### Seat Types: There are three types of seats:

- VIP: Costs R$ 300 each.
- Premium: Costs R$ 200 each.
- Regular: Costs R$ 100 each.

### Available Seats:

- VIP: 20 seats
- Premium: 30 seats
- Regular: 50 seats

### Booking System:

Users can book tickets for any of the seat types.
The system should check if the requested number of seats is available.
If available, the system should deduct the number of seats from the total and calculate the total cost.
If not available, the system should inform the user that the requested number of seats is not available.

### View Available Seats:

Users can view the number of available seats for each type.

## Implementation:
### Create a Class ```Ticket```:

Attributes: ```seatType``` (string), ```price``` (double), ```availableSeats``` (int).
Methods: ```bookTickets```(```int numTickets```), ```getAvailableSeats()```.

###  Create a Class Concert:

Attributes: ```vipTicket```, ```premiumTicket```, ```regularTicket``` (all of type Ticket).
Methods: ```viewAvailableSeats()```, ```bookSeats```(```string seatType, int numTickets```).

### Main Function:
Create an instance of the ```Concert class```.
Provide a menu for the user to book tickets or view available seats.
Handle user input and call the appropriate methods.
