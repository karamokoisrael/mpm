class Global:
    def __init__(self):
        self.all = {
            "url": "http://dr-karamoko.site/mpm/database.json",
            "os": "linux",
            "lang": "en",
            "version": "1.0",
            "responses": {
            "des": "test",
            "process_completed": "Completed  ████████████████████████████████ 100%"
            }
        }

    def getFundInfos(self, info):
        return self.all[info]
