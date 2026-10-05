# JSON Parser

A simple, dependency-free JSON parser written in C. It uses destructive pointer manipulation to scan raw input strings, isolate key-value pairs, and parse the data interactively.

## Features

- **Interactive Input:** Reads raw JSON strings dynamically from standard input using `fgets`.
- **Lightweight C Implementation:** Scans keys and values safely using pointers without external libraries.

## How to Run

1. Clone the repository and navigate into it:
   ```bash
   git clone [https://github.com/sumeru-cmd/JSON-parser.git](https://github.com/sumeru-cmd/JSON-parser.git)
   cd JSON-parser
