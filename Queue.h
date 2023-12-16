/**
 * ARDUINO QUEUE
 * 
 * This file is part of the Arduino Queue project. You can always find the latest
 * version of this class and project at: https://github.com/ionux/Arduino-Queue
 * 
 * MIT License
 * 
 * Copyright (c) 2023 Rich Morgan <rich.l.morgan@gmail.com>
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef ARDUINO_QUEUE_H
#define ARDUINO_QUEUE_H

#include <cstdlib>
#include <cstring>

#include "QueueElement.h"

/// @brief Arduino Queue class
class Queue
{
  public:
    /// @brief Class constructor
    Queue();

    /// @brief Class destructor
    ~Queue();

    /// @brief 
    /// @param data 
    /// @return 
    bool enqueue (void* data);

    /// @brief 
    /// @return 
    QueueElement* dequeue();

    /// @brief 
    /// @return 
    QueueElement* peek();

    /// @brief 
    /// @return 
    unsigned int count();

  private:
    /// @brief 
    void initialize();

    /// @brief 
    void destroy();

    /// @brief 
    /// @param element 
    /// @param data 
    /// @return 
    bool insert_next(const void *data);

    /// @brief 
    /// @param element 
    /// @param data 
    /// @return 
    QueueElement* remove_next();

    /// @brief 
    /// @return 
    QueueElement* get_head();

    /// @brief 
    /// @return 
    QueueElement* get_tail();

    bool element_is_head(QueueElement* e); //((element) == (list)->head ? 1 : 0)
    bool element_is_tail(QueueElement* e); //((element) == (list)->head ? 1 : 0)

    /// @brief 
    QueueElement* head;

    /// @brief 
    QueueElement* tail;

    /// @brief 
    unsigned int size;

    QueueElement elements[256];
};



// Structure for linked lists.
// typedef struct List_
// {
//   int                size;

//   int                (*match)(const void *key1, const void *key2);
//   void               (*destroy)(void *data);

//   QueueElement           *head;
//   QueueElement           *tail;
// } List;


#endif // ARDUINO_QUEUE_H
