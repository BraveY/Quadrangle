#pragma once
#ifndef __LIST__
#define __LIST__
#include "cont.h"

template<typename T>
class List :public Container<T>
{
protected:
	struct Node
	{
		T data;
		Node *next;
	} *head, *tail;
public:
	List() 
	{
		head=NULL;
		tail= NULL;
	};
	List(const List&l) :head(l.head), tail(l.tail) {};
	~List() { clear(); }
	size_t  size() const
	{

		Node*p = head;
		size_t i = 0;
		while (p != NULL)
		{
			p = p->next;
			++i;
		}
		return i;
	}
	operator bool() const
	{
		return head != NULL;
	}
	List& push_back(const T& data)
	{
		Node *p = new Node();
		p->data = data;
		p->next = NULL;
		if (tail == NULL) head = tail = p;
		else
		{
			tail->next = p;
			tail = p;
		}
		return *this;
	}
	T operator[](int index)
	{
		Node *p = head;
		for (int i = 0;i!=index; i++)
		{
			p = p->next;
		}
		return p->data;
	}
	List& operator=(const List&s)
	{
		head = s.head;
		tail = s.tail;
		return *this;
	}
	void  pop_back()
	{
		Node *p = head, *q=p->next;
		while (q->next != tail)
		{
			p = p->next;
			q=p->next;
		}
		p->next = tail;
		delete q;
	}
	void clear()
	{
		Node *p = head, *q;
		while (p != NULL)
		{
			q = p;
			p = p->next;
			delete p;
		}
		head = tail = NULL;
	}
	List& operator +=(const T& data)
	{
		push_back(data);
		return *this;
	}
	void traverse()
	{

		Node*p = head;
		while (p != NULL)
		{
			p->data->draw();
			p = p->next;
			
		}
	} 
	friend class listIterator;
	class listIterator
	{
	private:
		List<T> *plist;
		typename List<T>::Node *p;
	public:
		listIterator(const List<T>&list) :plist(const_cast<List<T>*>(&list)), p(list.head) {}
		listIterator(const listIterator &itr) :plist(itr.plist), p(itr.p) {}
		listIterator() :plist(NULL), p(NULL) {}
		listIterator & begin()
		{
			p = plist->List<T>::head;
			return *this;
		}

		listIterator end()
		{
			return listIterator();
		}
		listIterator & operator=(const listIterator&itr)
		{
			return p != itr.p;
		}
		listIterator &operator++()
		{
			p = p->next;
			return *this;
		}
		listIterator &operator+(int i)
		{
			for (int n = 0;n < i;n++)
			{
				p = p->next;
			}
			return *this;
		}
		T& operator *()
		{
			return p->data;
		}
	};
};

#endif