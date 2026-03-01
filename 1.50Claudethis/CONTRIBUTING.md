# Contributing Guidelines

## Coding Standards

### Language
- C++14 standard (`/std:c++14`)

### Naming Conventions
- Member variables must be prefixed with `m_` (e.g., `m_count`, `m_value`)
- Class names use PascalCase (e.g., `Claudia`)
- Function names use camelCase (e.g., `printToScreen`)

### Style Preferences
- Constructor definitions use member initializer lists rather than assignment in the body
- Comments are written in an instructional/tutorial style to explain both *what* and *why*
- Each file includes a brief header comment describing the purpose of the class or program

### Formatting
- One blank line between logical sections in `.cpp` files
- `#pragma once` used as the include guard in header files