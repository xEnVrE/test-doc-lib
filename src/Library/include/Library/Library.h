/*
 * Copyright (C) 2023
 *
 * This software may be modified and distributed under the terms of the
 * MIT license. See the accompanying LICENSE file for details.
 */

/**
 * Test class named 'Library'.
 */
class Library
{
public:

    /**
     * Constructor.
     * @param parameter A description of the parameter.
     */
    Library(const int& parameter);

    /**
     * Destructor.
     */
    ~Library();

    /**
     * This method does something.
     * @param parameter A description of the parameter.
     * @return True on success, false otherwise.
     * @warning Some warning.
     */
    bool foo(const int& parameter);

private:
    const int parameter_;
};
