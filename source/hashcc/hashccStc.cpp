/** 
 * @file hashccStc.cpp
 * @author Christian Scheiblich
 *
 * HASHCC is distributed under the MIT License (MIT); this file is part of.
 *
 * Copyright (c) 2009-2018 Christian Scheiblich (cscheiblich@gmail.com)
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

#include "./hashccStc.h" // header

/******************************************************************************/

namespace HASHCC {

namespace STC {

/******************************************************************************/

/// Binary Char set
cChar Bin::val[ 2 ] = {
  '0', '1' 
};
cuChar Bin::size( 2 );

/******************************************************************************/

/// Quad Char set
cChar Qud::val[ 4 ] = {
  '0', '1', '2', '3'
};
cuChar Qud::size( 4 );

/******************************************************************************/

/// Octal Char set
cChar Oct::val[ 8 ] = {
  '0', '1', '2', '3', '4', '5', '6', '7'
};
cuChar Oct::size( 8 );

/******************************************************************************/

/// Decimal Char set
cChar Dec::val[ 10 ] = {
  '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
};
cuChar Dec::size( 10 );

/******************************************************************************/

/// Hexal char set
cChar Hex::val[ 16 ] = {
  '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'
};
cuChar Hex::size( 16 );

/******************************************************************************/

/// Alphabet char set
cChar Abc::val[ 26 ] = { 
  'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
};
cuChar Abc::size( 26 );

/******************************************************************************/

/// Alphabet numerical char set
cChar Aph::val[ 36 ] = {
  '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
  'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
};
cuChar Aph::size( 36 );

/******************************************************************************/

} // namespace STC

} // namespace HASHCC

/******************************************************************************/
