BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS "patient_login" (
	"patient_id"	INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE,
	"first_name"	TEXT NOT NULL,
	"last_name"	TEXT,
	"birth_date"	NUMERIC NOT NULL,
	"blood_group"	TEXT,
	"phone_no"	NUMERIC NOT NULL,
	"password"	TEXT NOT NULL
);
INSERT INTO "patient_login" VALUES (1,'','','',NULL,'','');
COMMIT;
