from logger import Logger
from consle_logger import ConsoleLogger
from file_logger import FileLogger

class LoggerFactory:
    @staticmethod
    def create_logger(logger_type: str) -> Logger:
        if logger_type == "console":
            return ConsoleLogger()
        elif logger_type == "file":
            return FileLogger()
        else:
            raise ValueError(f"Unknown logger type: {logger_type}")