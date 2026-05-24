from logger_factory import LoggerFactory

logger = LoggerFactory.create_logger("console")
logger.log("Hello Python")

logger = LoggerFactory.create_logger("file")
logger.log("Saved to file")