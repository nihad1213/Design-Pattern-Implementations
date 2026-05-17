from cache_manager import CacheManager

"""
This code demonstrates the Singleton design pattern in Python using a CacheManager class. 
The CacheManager class ensures that only one instance of itself can exist, and it provides 
methods to set, get, delete, clear, and retrieve all cache entries. 
The main function creates two instances of 
CacheManager, sets some values in one instance, and retrieves them from the other instance to 
confirm that both instances are indeed the same.
"""

cache1 = CacheManager()
cache2 = CacheManager()

cache1.set("user", "Nihad")
cache1.set("role", "admin")

print(cache2.get("user"))
print(cache2.all())

if cache1 is cache2:
    print("Same instance confirmed!")