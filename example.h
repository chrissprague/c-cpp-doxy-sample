/**
 * @file example.h
 * @author user@example.com
 * @date 3/3/17
 * @brief This is the brief overview of this file.
 * @note This is __bold text!__
 */

#ifndef _EXAMPLE_H
#define _EXAMPLE_H

//! This is macro documentation using in-line doxygen comments
#define MY_MACRO 2

/**
 * @brief This is another way to do macro documentation.
 */
#define MY_OTHER_MACRO 3

/**
 * @brief Short function documentation.
 * @param a documentation of the 'a' parameter
 * @param b documentation of the 'b' parameter
 * @return This describes the return value of the funcion.
 */
int my_func(int a, int b);

/**
 * @brief Class description
 *
 * Longer class description as necessary goes here.
 */
class foo {
    public:
        //! non-static class member.
        const int my_member = 5;

        //! static class member.
        static int my_static_member;

        /**
         * @brief Class function documentation.
         * @param a Parameter 'a' comments.
         */
        static void class_function(int a) noexcept;

        /**
         * @brief A non-static method.
         * @return ret val info.
         */
        int some_other_class_function();

        /**
         * @brief virtual function.
         * @return ret info.
         * @note Get the reader's attention using the note annotation.
         */
        virtual int virt_func() final;

    private:
        /**
         * @brief More method docs, for a const method (promises to not change any class member values)
         * @param baz const (won't be changed by this method) int reference
         * @return Return value description.
         */
        static const int foo_bar(const int &baz) noexcept;
};

#endif
