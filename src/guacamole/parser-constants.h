/*
 * Copyright (C) 2014 Glyptodon LLC
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _GUAC_PARSER_CONSTANTS_H
#define _GUAC_PARSER_CONSTANTS_H

/**
 * Constants related to Guacamole instructions.
 *
 * @file instruction-constants.h
 */

/**
 * The maximum number of characters per instruction.
 */
#define GUAC_INSTRUCTION_MAX_LENGTH 8192

/**
 * The maximum number of digits to allow per length prefix.
 */
#define GUAC_INSTRUCTION_MAX_DIGITS 5

/**
 * The maximum number of elements per instruction, including the opcode.
 */
#define GUAC_INSTRUCTION_MAX_ELEMENTS 64

#endif

