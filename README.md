author: Mr.Somnath Ghorai <br>
vs code to gitHub
    # ধাপ ১: পরিবর্তন হওয়া সব ফাইল ট্র্যাক (Stage) করা
git add .

# ধাপ ২: কী পরিবর্তন করেছেন তার একটি সংক্ষিপ্ত মেসেজসহ সেভ (Commit) করা
git commit -m "Added new example program in Compilation Process"

# ধাপ ৩: লোকাল পরিবর্তনগুলো GitHub-এ আপলোড (Push) করা
git push
for status ..
git status


গিটহাবের সমস্ত নতুন পরিবর্তন পিসিতে নামিয়ে আনতে
git pull origin main --rebase
যদি git pull দেওয়ার সময় কখনো "Cannot rebase" বা "Unmerged paths" জাতীয় এরর দেখায়, তবে
# গিটহাবের তথ্য আপডেট করে দেখতে
git fetch origin

# আপনার লোকাল ব্রাঞ্চকে রিবেস করতে
git pull origin main --rebase


tree structure
C-Notes/
├── 01_Basics_and_Setup/
│   ├── Compilation_Process.md        # Preprocessing, Compiling, Assembling, Linking
│   ├── Variables_DataTypes.md         # Primitive types, Modifiers (signed/unsigned, long/short)
│   ├── Constants_Literals.md         # #define vs const
│   └── Input_Output.md               # printf, scanf, getchar, putchar, format specifiers
│
├── 02_Operators_and_Expressions/
│   ├── Arithmetic_Relational_Logical.md
│   ├── Bitwise_Operators.md          # AND, OR, XOR, NOT, Shift operators (&, |, ^, ~, <<, >>)
│   └── Operator_Precedence_Table.md   # Associativity and precedence rules
│
├── 03_Control_Flow/
│   ├── Conditionals.md               # if, else-if, nested if, ternary operator
│   ├── Loops.md                      # for, while, do-while, infinite loops
│   ├── Switch_Case.md                # switch, case, default, break fallthrough
│   └── Jump_Statements.md            # break, continue, goto
│
├── 04_Arrays_and_Strings/
│   ├── 1D_Arrays.md                  # Declaration, initialization, memory layout
│   ├── 2D_and_MultiDimensional.md    # Matrices, row-major storage
│   ├── Strings_Basics.md             # Null terminator ('\0'), char arrays
│   └── String_Functions.md           # string.h (strlen, strcpy, strcat, strcmp, strstr)
│
├── 05_Functions_and_Scope/
│   ├── Function_Basics.md            # Declaration, definition, prototype, return types
│   ├── Call_By_Value_vs_Reference.md # Parameter passing concepts
│   ├── Storage_Classes.md            # auto, register, static, extern
│   └── Recursion.md                  # Base condition, call stack overhead, stack overflow
│
├── 06_Pointers_and_Memory_Management/
│   ├── Pointer_Basics.md             # Addresses, dereferencing (*), NULL pointers
│   ├── Pointer_Arithmetic.md         # Incrementing/decrementing pointers, array-pointer connection
│   ├── Advanced_Pointers.md          # Double pointers (**p), Void pointers, Function pointers
│   └── Dynamic_Memory_Allocation.md  # malloc, calloc, realloc, free, Memory leaks, Dangling pointers
│
├── 07_Structures_Unions_and_Enums/
│   ├── Structures_Basics.md          # struct definition, dot (.) operator, arrow (->) operator
│   ├── Structure_Padding_Alignment.md# Memory alignment, padding bytes, #pragma pack
│   ├── Unions.md                     # Memory sharing in unions, struct vs union
│   └── Enums_and_Typedef.md          # enum usage, typedef aliases
│
├── 08_File_Handling/
│   ├── Text_Files.md                 # fopen, fclose, fprintf, fscanf, fgets, fputs
│   ├── Binary_Files.md               # fread, fwrite
│   └── File_Positioning.md           # fseek, ftell, rewind
│
├── 09_Preprocessor_Directives/
│   ├── Macros_and_Defines.md         # #define, Function-like macros, #undef
│   ├── Conditional_Compilation.md    # #ifdef, #ifndef, #if, #else, #endif
│   └── Header_Guards.md              # Preventing multiple inclusions (#pragma once)
│
└── 10_Advanced_Concepts_and_Pitfalls/
    ├── Command_Line_Arguments.md     # int argc, char *argv[]
    ├── Volatile_and_Const.md         # volatile keyword, const correctness
    ├── Undefined_Behavior.md         # Buffer overflow, uninitialized variables, divide-by-zero
    └── Data_Structures_Basics_in_C.md # Linked list, Stack, Queue (Implementation using struct & pointer)