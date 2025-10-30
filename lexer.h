#ifndef CNG_COMPILER_LEXER_H
#define CNG_COMPILER_LEXER_H

namespace cng {

// لیست تمام توکن‌های (Lexical Tokens) زبان سی‌نیو
enum Token {
    // 0. پایان فایل (End of File)
    tok_eof = -1,

    // 1. کلمات کلیدی، عملگرها و دستورات
    tok_create = -2,      // دستور ایجاد (مثل 'new' در زبان‌های دیگر)
    tok_range_single = -3, // برای تعیین یک محدوده تکی
    tok_range_to = -4,     // برای تعیین محدوده 'از ... تا ...'
    tok_op_move = -5,      // عملگر جابجایی
    tok_op_copy = -6,      // عملگر کپی

    // 2. شناسه‌ها (Identifiers)
    tok_identifier = -7,    // نام متغیرها، توابع، و...
    tok_name_template = -8, // نام یک الگوی خاص یا نام فایل/پوشه

    // 3. انواع داده‌ها (Types)
    tok_type_file = -9,     // نوع داده فایل
    tok_type_folder = -10,   // نوع داده پوشه
    
    // 4. مقادیر عددی
    tok_number = -11,      // مقادیر عددی (مثل 10، 3.14)
    
    // سایر توکن‌ها (مانند پرانتز، کاما و...) را بعداً اضافه می‌کنیم.
};

} // end namespace cng

#endif // CNG_COMPILER_LEXER_H
