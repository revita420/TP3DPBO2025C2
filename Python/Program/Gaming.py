from Software import Software

class Gaming(Software):
    def __init__(self, fps=0, genre="", nama="", versi="", developer=""):
        super().__init__(nama, versi, developer)
        self.__fps = fps
        self.__genre = genre
    
    def set_fps(self, fps):
        self.__fps = fps
    
    def set_genre(self, genre):
        self.__genre = genre
    
    def get_fps(self):
        return self.__fps
    
    def get_genre(self):
        return self.__genre