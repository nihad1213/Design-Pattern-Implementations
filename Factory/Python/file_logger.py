from logger import Logger

class FileLogger(Logger):
    def log(self, message: str) -> None:
        with open("log.txt", "a") as file:
            file.write(f"File Logger: {message}\n")