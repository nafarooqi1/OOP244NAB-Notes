# Coding Feedback
## MR
### Feedback
you have multiple return statements in your functions. A function must have only one point of exit. (i.e one return statement) please make sure in your future coding there is only one return statement in a function.
### Problematic code sample
```C++
	bool CalorieList::add(const char* item_name, int calories, int when)
	{
		if (m_itemsAdded < m_noOfItems)
		{
			m_items[m_itemsAdded].set(item_name, calories, when);
			m_itemsAdded++;
			return true;
		}
		return false;
	}
```
## Code
### Feedback
### Problematic code sample
```C++
```
