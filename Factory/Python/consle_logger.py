from logger import Logger

class ConsoleLogger(Logger):
    def log(self, message: str) -> None:
        print(f"Console Logger: {message}")