# Socket Programming in Qt (Client & Server)

This repository contains **two independent Qt 6.8.3 projects** demonstrating TCP socket programming:

1. `mytcpserver` – a simple TCP server
2. `mytcpclient` – a simple TCP client

Each project has its own source files and `CMakeLists.txt`, and can be built and run independently.

---

## 🧱 Project Structure

```
socket-programming-Qt/
├── mytcpserver/       # TCP server project
│   ├── main.cpp
│   ├── mytcpserver.h
│   ├── mytcpserver.cpp
│   └── CMakeLists.txt
├── mytcpclient/       # TCP client project
│   ├── main.cpp
│   ├── mytcpclient.h
│   ├── mytcpclient.cpp
│   └── CMakeLists.txt
├── README.md
└── .gitignore
```

---

## 🛠 Requirements

- Qt 6.8.3 (with Qt Network module)
- CMake ≥ 3.16
- C++17 compiler

---

## 🚀 How to Build Each Project

### Build TCP Server

```bash
cd mytcpserver
mkdir build && cd build
cmake ..
cmake --build .
```

### Build TCP Client

```bash
cd mytcpclient
mkdir build && cd build
cmake ..
cmake --build .
```

---

## ▶️ How It Works

### TCP Server (`mytcpserver`)
- Listens on port `1234`
- Accepts one client connection
- Prints the received message
- Sends back: `"peyamet resid: <message>"`

**Run:**
```bash
./tcp_server
```

**Example output:**
```
Server listening on port 1234...
New client connected.
Received: "salam server"
```

---

### TCP Client (`mytcpclient`)
- Connects to `127.0.0.1:1234`
- Sends: `"salam server"`
- Receives and prints the server’s reply

**Run:**
```bash
./tcp_client
```

**Example output:**
```
Connected to server.
Server response: "peyamet resid: salam server"
```

---

## 📚 Topics Covered

- TCP socket programming using Qt (`QTcpSocket` & `QTcpServer`)
- Signal-slot mechanism for async I/O
- Separate CMake-based projects for modular development

---

## 📌 License

MIT © [mahan-ds](https://github.com/mahan-ds)
