Train Seat Reservation System
A beginner-level console project in C++

This project is a simple Train Seat Reservation System, built using C++ and designed for console interaction. The system allows users to view seat availability, book seats, and receive immediate visual feedback. It models a basic train coach seating layout using a 2D dynamic array of structs, where each seat is either free ('F') or booked ('B').

🔹 Core Features
Displays a structured seat layout resembling real train rows and columns

Accepts user input for selecting seat by row and column

Prevents double-booking by checking if a seat is already reserved

Dynamically updates the seat map after each booking

Uses clear formatting for a visually structured and user-friendly interface

🔹 Technologies and Concepts Used
Language: C++

Key Concepts:

2D dynamic arrays using pointers

struct for seat status

Conditional statements for error handling

Loops for repeated interaction

Formatted console output using iomanip

🔹 How It Works
A dynamic 2D array Seat** seatarr is used to store seat statuses for 9 rows and 6 columns.

'F' indicates a Free seat, while 'B' indicates a Booked seat.

The user is prompted to enter row and column numbers.

If the seat is free, it is marked as booked and the updated layout is displayed.

If the seat is already booked or the input is invalid, an appropriate message is shown.

The booking process continues until the user exits.

🔹 Seat Layout Description
The layout includes 9 rows and 6 columns.

The formatting visually separates the first five seats from the sixth, mimicking real compartment structure (e.g., aisle or side seat).

The seat arrangement is updated and printed after each successful booking.

🔹 Sample Seat Indicators
F → Free Seat

B → Booked Seat

🔹 Possible Future Enhancements
Add seat cancellation functionality

Save and load bookings using file handling

Enhance layout for multiple train compartments or coaches

Implement user authentication (admin vs passenger)

🔹 Developer Note
This project was developed by Raheel Arshad as a hands-on exercise for his Programming Fundamentals course. It serves as a foundation for learning structured programming, dynamic memory allocation, and basic user interaction through the console in C++.
