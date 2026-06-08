# Property Data Management System

**Academic Online Learning (AOL) — Semester 1**  
*Language: C | Paradigm: Procedural Programming*

## Overview

This project is a **property data management system** developed as part of the first-semester Algorithm and Programming course. It demonstrates fundamental C programming concepts including file I/O, structured data types, string manipulation, and sorting algorithms.

## Features

| Feature | Description |
|---------|-------------|
| **Display Data** | View property records in a formatted table with configurable row count |
| **Search Data** | Filter properties by any column (Location, City, Price, Rooms, Bathroom, Carpark, Type, Furnish) |
| **Sort Data** | Sort records ascending or descending by any column using bubble sort |
| **Export Data** | Export the dataset to a new CSV file |

## Project Structure

`
AOL_sem1/
├── AOL-AlgoNo1.cpp    # String reverser with case toggling
├── AOL-AlgoNo2.cpp    # Main property data management system
├── filedata.csv        # Property listing dataset (Kuala Lumpur area)
└── AOL_sem1.zip        # Original submission archive
`

## Dataset

The dataset contains **~970 property listings** in the Kuala Lumpur area with attributes:
- **Location** & **City**: Property address
- **Price**: Listed price in MYR
- **Rooms**, **Bathroom**, **Carpark**: Room counts
- **Type**: Property type (e.g., Built-up)
- **Furnish**: Furnishing status (Fully/Partly/Unfurnished)

## How to Compile & Run

`ash
# Compile
gcc AOL-AlgoNo2.cpp -o property-manager

# Run
./property-manager
`

## What I Learned

- Implementing **structured data types** (struct) in C
- **File I/O** — reading and writing CSV data with scanf/printf
- **Bubble sort** algorithm for multi-column sorting
- **String manipulation** using <string.h> functions
- **Menu-driven console interface** design
- **Case conversion** and string reversal techniques

## Note

This project was submitted as part of the Semester 1 AOL (Academic Online Learning) assessment. It represents my foundational work in procedural programming with C.

---

*Built with C — Semester 1, 2026*