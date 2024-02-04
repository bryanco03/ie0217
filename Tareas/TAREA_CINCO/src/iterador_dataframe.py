import pandas as pd

class DataFrameIterator:
    def __init__(self, dataframe):
        self.dataframe = dataframe
        self.index = 0

    def __iter__(self):
        return self

    def __next__(self):
        if self.index >= len(self.dataframe):
            raise StopIteration
        row = self.dataframe.iloc[self.index]
        self.index += 1
        return row
