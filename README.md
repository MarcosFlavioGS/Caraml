<img src="https://github.com/user-attachments/assets/da1296ee-c3df-48c7-9529-e30d60a4c3f4" width="500" height="500">

# Caraml

Caraml is a work-in-progress interpreted programming language that combines functional programming features with a syntax inspired by OCaml and Rust. It aims to provide a modern, expressive, and type-safe programming experience.

## Features (Planned)

- **Functional Programming**: First-class functions, pattern matching, and immutable data structures
- **Type System**: Strong static typing with type inference
- **Modern Syntax**: Clean and expressive syntax inspired by OCaml and Rust
- **Interpreted**: Direct execution without compilation step
- **Memory Safety**: Built-in memory management and safety features

## Example (Planned Syntax)

```rust
// Function definition with pattern matching
let factorial = |n| match n {
    0 => 1,
    n => n * factorial(n - 1)
};

// Type inference and immutable variables
let x = 42;
let message = "Hello, Caraml!";

// Higher-order functions
let map = |f, list| match list {
    [] => [],
    [head, ...tail] => [f(head), ...map(f, tail)]
};
```

## Building

The project uses Prefect (a custom build tool) for managing the C-based implementation: [Prefect Repo](https://github.com/MarcosFlavioGS/Prefect.git)

```bash
# Build the project
prefect build

# Run 
prefect run
```

## Status

Caraml is currently in early development. The core lexer and basic infrastructure are being implemented.

## License

[License information to be added] 
