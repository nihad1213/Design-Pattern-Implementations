class CacheManager:
    _instance = None

    def __new__(cls):
        if cls._instance is None:
            cls._instance = super(CacheManager, cls).__new__(cls)
            cls._instance._cache = {}
        return cls._instance

    def set(self, key, value):
        self._cache[key] = value

    def get(self, key, default=None):
        return self._cache.get(key, default)

    def delete(self, key):
        if key in self._cache:
            del self._cache[key]

    def clear(self):
        self._cache.clear()

    def all(self):
        return self._cache