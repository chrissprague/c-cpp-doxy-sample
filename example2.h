/**
 * @file example2.h
 * @author user@example.com
 * @date Fri May 3 2017.
 * @brief This is the brief overview of this other file.
 *
 * @note Note annotation to get reader's attention.
 *
 * @see example.h
 *
 * Longer file descriptions like this one 
 * don't always work nicely. Sometimes they will incorrectly
 * append onto another field such as the date. Make sure
 * you build the docs to make sure everything comes out
 * alright.
 */

#ifndef _EXAMPLE2_H
#define _EXAMPLE2_H

#include "example.h"

/**
 * @brief Another class description
 *
 * Longer class description as necessary. You can link to
 * other bits of documentation within comments, for example:
 * my super class is: #foo.
 *
 * You can also reference specific class variables or functions,
 * for instance: #foo::class_function or #foo::my_member
 */
class foo_2: public foo {
    public:
        /**
         * @brief Class function documentation.
         * @param a Parameter 'a' comments.
         * @see foo::class_function
         *
         * Use the "see" annotation to link to something else in the docs
         */
        static void class_function(int a);

        //! function comments go here.
        void instance_function(int b);

        /**
         * @brief An example of overriding a non-static class method in a subclass.
         * @return ret val docs.
         */
        int some_other_class_function();
};

#endif
