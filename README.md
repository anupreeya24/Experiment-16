# Experiment-16

# Exception Handling
### Aim of Exception Handling

The aim of exception handling is to provide a structured way to manage and respond to runtime errors or exceptional conditions in a program, ensuring that the application can maintain control, provide useful feedback, and continue operating or fail gracefully.

### Theory of Exception Handling

Exception handling is a programming construct that allows developers to anticipate and manage errors that may occur during program execution. It typically involves:

1. **Try Block**: Code that may cause an exception is placed inside a try block.
2. **Catch Block**: This block is used to handle the exception if one occurs. It specifies what type of exceptions it can handle.
3. **Finally Block**: (Optional) This block executes code regardless of whether an exception occurred, often used for cleanup tasks like closing files or releasing resources.

Key concepts include:

- **Throwing Exceptions**: Raising an error when something goes wrong.
- **Catching Exceptions**: Reacting to the thrown error in a controlled manner.
- **Multiple Exception Types**: Handling different types of exceptions distinctly for more precise error management.

Effective exception handling improves code robustness, enhances user experience by providing meaningful error messages, and helps maintain program integrity by avoiding abrupt crashes.

### Algorithm 

1. **Start**
2. **Declare Variables**: Initialize `n1`, `n2`, and `ans` as float.
3. **Prompt User**: Display a message to enter values for `n1` and `n2`.
4. **Input Values**: Read the values of `n1` and `n2` from the user.
5. **Try Block**:
   - a. Check if `n2` is equal to 0.
      - i. If true, throw `n2` as an exception.
   - b. If false, calculate `ans = n1 / n2`.
   - c. Print the result: `Answer = ans`.
6. **Catch Block**:
7.   - a. If an exception is caught, display the error message: "ERROR: Division by `num`".
8. **End**



### Algorithm 

1. **Start**
2. **Declare Variables**: Initialize `age` and `elage` as float.
3. **Try Block**:
   - a. Prompt the user: "Enter your age: ".
   - b. Read the user's input into `age`.
   - c. Check if `age` is less than or equal to 18.
      - i. If true, throw `age` as an exception.
   - d. If false, print: "You can vote!! As you are `age`".
4. **Catch Block**:
   - a. If an exception is caught (invalid age), print: "Not applicable for voting: `invalidAge`".
5. **End**
