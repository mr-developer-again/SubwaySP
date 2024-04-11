const char* stations_json = \
R"--(
{
	"Tajrish": {
		"property": {
			"disabled": false,
			"name": "Tajrish",
			"fa": "تجریش",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Gheytariyeh",
				"disabled": false,
				"fa": "قیطریه",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Gheytariyeh": {
		"property": {
			"disabled": false,
			"name": "Gheytariyeh",
			"fa": "قیطریه",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Tajrish",
				"disabled": false,
				"fa": "تجریش",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Shahid Sadr",
				"disabled": false,
				"fa": "شهید صدر",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Shahid Sadr": {
		"property": {
			"disabled": false,
			"name": "Shahid Sadr",
			"fa": "شهید صدر",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Gheytariyeh",
				"disabled": false,
				"fa": "قیطریه",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Qolhak",
				"disabled": false,
				"fa": "قلهک",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Qolhak": {
		"property": {
			"disabled": false,
			"name": "Qolhak",
			"fa": "قلهک",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Shahid Sadr",
				"disabled": false,
				"fa": "شهید صدر",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Doctor Shariati",
				"disabled": false,
				"fa": "دکتر شریعتی",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Doctor Shariati": {
		"property": {
			"disabled": false,
			"name": "Doctor Shariati",
			"fa": "دکتر شریعتی",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Qolhak",
				"disabled": false,
				"fa": "قلهک",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Mirdamad",
				"disabled": false,
				"fa": "میرداماد",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Mirdamad": {
		"property": {
			"disabled": false,
			"name": "Mirdamad",
			"fa": "میرداماد",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Doctor Shariati",
				"disabled": false,
				"fa": "دکتر شریعتی",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Shahid Haghani",
				"disabled": false,
				"fa": "شهید حقانی",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Shahid Haghani": {
		"property": {
			"disabled": false,
			"name": "Shahid Haghani",
			"fa": "شهید حقانی",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Mirdamad",
				"disabled": false,
				"fa": "میرداماد",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Shahid Hemmat",
				"disabled": false,
				"fa": "شهید همت",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Shahid Hemmat": {
		"property": {
			"disabled": false,
			"name": "Shahid Hemmat",
			"fa": "شهید همت",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Shahid Haghani",
				"disabled": false,
				"fa": "شهید حقانی",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Mosalla-ye Imam Khomeini",
				"disabled": false,
				"fa": "مصلی امام خمینی",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Mosalla-ye Imam Khomeini": {
		"property": {
			"disabled": false,
			"name": "Mosalla-ye Imam Khomeini",
			"fa": "مصلی امام خمینی",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Shahid Hemmat",
				"disabled": false,
				"fa": "شهید همت",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Shahid Beheshti",
				"disabled": false,
				"fa": "شهید بهشتی",
				"colors": ["#E0001F", "#67C5F5"],
				"lines": [1, 3]
			}
		]
	},
	"Shahid Beheshti": {
		"property": {
			"disabled": false,
			"name": "Shahid Beheshti",
			"fa": "شهید بهشتی",
			"colors": ["#E0001F", "#67C5F5"],
			"lines": [1, 3]
		},
		"relations": [
			{
				"name": "Mosalla-ye Imam Khomeini",
				"disabled": false,
				"fa": "مصلی امام خمینی",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Sohrevardi",
				"disabled": false,
				"fa": "سهروردی",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Mirza-ye Shirazi",
				"disabled": false,
				"fa": "میرزا شیرازی",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Shahid Mofattah",
				"disabled": false,
				"fa": "شهید مفتح",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Shahid Mofattah": {
		"property": {
			"disabled": false,
			"name": "Shahid Mofattah",
			"fa": "شهید مفتح",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Shahid Beheshti",
				"disabled": false,
				"fa": "شهید بهشتی",
				"colors": ["#E0001F", "#67C5F5"],
				"lines": [1, 3]
			},
			{
				"name": "Shohada-ye Haftom-e Tir",
				"disabled": false,
				"fa": "شهدای هفتم تیر",
				"colors": ["#E0001F", "#EF639F"],
				"lines": [1, 6]
			}
		]
	},
	"Ayatollah Taleghani": {
		"property": {
			"disabled": false,
			"name": "Ayatollah Taleghani",
			"fa": "آیت‌الله طالقانی",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Shohada-ye Haftom-e Tir",
				"disabled": false,
				"fa": "شهدای هفتم تیر",
				"colors": ["#E0001F", "#EF639F"],
				"lines": [1, 6]
			},
			{
				"name": "Darvazeh Dolat",
				"disabled": false,
				"fa": "دروازه دولت",
				"colors": ["#E0001F", "#F8E100"],
				"lines": [1, 4]
			}
		]
	},
	"Darvazeh Dolat": {
		"property": {
			"disabled": false,
			"name": "Darvazeh Dolat",
			"fa": "دروازه دولت",
			"colors": ["#E0001F", "#F8E100"],
			"lines": [1, 4]
		},
		"relations": [
			{
				"name": "Ayatollah Taleghani",
				"disabled": false,
				"fa": "آیت‌الله طالقانی",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Ferdowsi",
				"disabled": false,
				"fa": "فردوسی",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Darvazeh Shemiran",
				"disabled": false,
				"fa": "دروازه شمیران",
				"colors": ["#2F4389", "#F8E100"],
				"lines": [2, 4]
			},
			{
				"name": "Sa'adi",
				"disabled": false,
				"fa": "سعدی",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Sa'adi": {
		"property": {
			"disabled": false,
			"name": "Sa'adi",
			"fa": "سعدی",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Darvazeh Dolat",
				"disabled": false,
				"fa": "دروازه دولت",
				"colors": ["#E0001F", "#F8E100"],
				"lines": [1, 4]
			},
			{
				"name": "Imam Khomeini",
				"disabled": false,
				"fa": "امام خمینی",
				"colors": ["#E0001F", "#2F4389"],
				"lines": [1, 2]
			}
		]
	},
	"Imam Khomeini": {
		"property": {
			"disabled": false,
			"name": "Imam Khomeini",
			"fa": "امام خمینی",
			"colors": ["#E0001F", "#2F4389"],
			"lines": [1, 2]
		},
		"relations": [
			{
				"name": "Sa'adi",
				"disabled": false,
				"fa": "سعدی",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Hasan Abad",
				"disabled": false,
				"fa": "حسن آباد",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Mellat",
				"disabled": false,
				"fa": "ملت",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Panzdah-e Khordad",
				"disabled": false,
				"fa": "پانزده خرداد",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Panzdah-e Khordad": {
		"property": {
			"disabled": false,
			"name": "Panzdah-e Khordad",
			"fa": "پانزده خرداد",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Imam Khomeini",
				"disabled": false,
				"fa": "امام خمینی",
				"colors": ["#E0001F", "#2F4389"],
				"lines": [1, 2]
			},
			{
				"name": "Khayyam",
				"disabled": false,
				"fa": "خیام",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Khayyam": {
		"property": {
			"disabled": false,
			"name": "Khayyam",
			"fa": "خیام",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Panzdah-e Khordad",
				"disabled": false,
				"fa": "پانزده خرداد",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Meydan-e Mohammadiyeh",
				"disabled": false,
				"fa": "میدان محمدیه",
				"colors": ["#E0001F", "#7F0B74"],
				"lines": [1, 7]
			}
		]
	},
	"Meydan-e Mohammadiyeh": {
		"property": {
			"disabled": false,
			"name": "Meydan-e Mohammadiyeh",
			"fa": "میدان محمدیه",
			"colors": ["#E0001F", "#7F0B74"],
			"lines": [1, 7]
		},
		"relations": [
			{
				"name": "Khayyam",
				"disabled": false,
				"fa": "خیام",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Mahdiyeh",
				"disabled": false,
				"fa": "مهدیه",
				"colors": ["#67C5F5", "#7F0B74"],
				"lines": [3, 7]
			},
			{
				"name": "Mowlavi",
				"disabled": false,
				"fa": "مولوی",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Shoush",
				"disabled": false,
				"fa": "شوش",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Shoush": {
		"property": {
			"disabled": false,
			"name": "Shoush",
			"fa": "شوش",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Meydan-e Mohammadiyeh",
				"disabled": false,
				"fa": "میدان محمدیه",
				"colors": ["#E0001F", "#7F0B74"],
				"lines": [1, 7]
			},
			{
				"name": "Payaneh Jonoub(Jonoub Terminal)",
				"disabled": false,
				"fa": "پایانه جنوبی",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Payaneh Jonoub(Jonoub Terminal)": {
		"property": {
			"disabled": false,
			"name": "Payaneh Jonoub(Jonoub Terminal)",
			"fa": "پایانه جنوبی",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Shoush",
				"disabled": false,
				"fa": "شوش",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Shahid Bokharaei",
				"disabled": false,
				"fa": "شهید بخارایی",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Shahid Bokharaei": {
		"property": {
			"disabled": false,
			"name": "Shahid Bokharaei",
			"fa": "شهید بخارایی",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Payaneh Jonoub(Jonoub Terminal)",
				"disabled": false,
				"fa": "پایانه جنوبی",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Aliabad",
				"disabled": false,
				"fa": "علی‌آباد",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Aliabad": {
		"property": {
			"disabled": false,
			"name": "Aliabad",
			"fa": "علی‌آباد",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Shahid Bokharaei",
				"disabled": false,
				"fa": "شهید بخارایی",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Javanmard-e Ghassab",
				"disabled": false,
				"fa": "جوانمرد قصاب",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Javanmard-e Ghassab": {
		"property": {
			"disabled": false,
			"name": "Javanmard-e Ghassab",
			"fa": "جوانمرد قصاب",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Aliabad",
				"disabled": false,
				"fa": "علی‌آباد",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Shahr-e Rey",
				"disabled": false,
				"fa": "شهر ری",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Shahr-e Rey": {
		"property": {
			"disabled": false,
			"name": "Shahr-e Rey",
			"fa": "شهر ری",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Javanmard-e Ghassab",
				"disabled": false,
				"fa": "جوانمرد قصاب",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Palayeshgah",
				"disabled": false,
				"fa": "پالایشگاه",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Palayeshgah": {
		"property": {
			"disabled": false,
			"name": "Palayeshgah",
			"fa": "پالایشگاه",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Shahr-e Rey",
				"disabled": false,
				"fa": "شهر ری",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Shahed - BagherShahr",
				"disabled": false,
				"fa": "شاهد - باغرشهر",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Shahed - BagherShahr": {
		"property": {
			"disabled": false,
			"name": "Shahed - BagherShahr",
			"fa": "شاهد - باغرشهر",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Palayeshgah",
				"disabled": false,
				"fa": "پالایشگاه",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Namayeshgah-e Shahr-e Aftab",
				"disabled": false,
				"fa": "نمایشگاه شهر آفتاب",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Holy Shrine of Imam Khomeini",
				"disabled": false,
				"fa": "حرم مطهر امام خمینی",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Namayeshgah-e Shahr-e Aftab": {
		"property": {
			"disabled": false,
			"name": "Namayeshgah-e Shahr-e Aftab",
			"fa": "نمایشگاه شهر آفتاب",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Shahed - BagherShahr",
				"disabled": false,
				"fa": "شاهد - باغرشهر",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Vavan",
				"disabled": false,
				"fa": "واوان",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Vavan": {
		"property": {
			"disabled": true,
			"name": "Vavan",
			"fa": "واوان",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Namayeshgah-e Shahr-e Aftab",
				"disabled": false,
				"fa": "نمایشگاه شهر آفتاب",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Emam Khomeini Airport",
				"disabled": false,
				"fa": "فرودگاه امام خمینی",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Emam Khomeini Airport": {
		"property": {
			"disabled": false,
			"name": "Emam Khomeini Airport",
			"fa": "فرودگاه امام خمینی",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Vavan",
				"disabled": false,
				"fa": "واوان",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Shahr-e Parand",
				"disabled": true,
				"fa": "شهر پرند",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Shahr-e Parand": {
		"property": {
			"disabled": true,
			"name": "Shahr-e Parand",
			"fa": "شهر پرند",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Emam Khomeini Airport",
				"disabled": true,
				"fa": "فرودگاه امام خمینی",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Holy Shrine of Imam Khomeini": {
		"property": {
			"disabled": false,
			"name": "Holy Shrine of Imam Khomeini",
			"fa": "حرم مطهر امام خمینی",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Shahed - BagherShahr",
				"disabled": false,
				"fa": "شاهد - باغرشهر",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Kahrizak",
				"disabled": false,
				"fa": "کهریزک",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Kahrizak": {
		"property": {
			"disabled": false,
			"name": "Kahrizak",
			"fa": "کهریزک",
			"colors": ["#E0001F"],
			"lines": [1]
		},
		"relations": [
			{
				"name": "Holy Shrine of Imam Khomeini",
				"disabled": false,
				"fa": "حرم مطهر امام خمینی",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Farhangsara": {
		"property": {
			"disabled": false,
			"name": "Farhangsara",
			"fa": "فرهنگسرا",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Tehranpars",
				"disabled": false,
				"fa": "تهرانپارس",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Tehranpars": {
		"property": {
			"disabled": false,
			"name": "Tehranpars",
			"fa": "تهرانپارس",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Farhangsara",
				"disabled": false,
				"fa": "فرهنگسرا",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Shahid Bagheri",
				"disabled": false,
				"fa": "شهید باقری",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Shahid Bagheri": {
		"property": {
			"disabled": false,
			"name": "Shahid Bagheri",
			"fa": "شهید باقری",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Tehranpars",
				"disabled": false,
				"fa": "تهرانپارس",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Daneshgah-e Elm va Sanat",
				"disabled": false,
				"fa": "دانشگاه علم و صنعت",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Daneshgah-e Elm va Sanat": {
		"property": {
			"disabled": false,
			"name": "Daneshgah-e Elm va Sanat",
			"fa": "دانشگاه علم و صنعت",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Shahid Bagheri",
				"disabled": false,
				"fa": "شهید باقری",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Sarsabz",
				"disabled": false,
				"fa": "سرسبز",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Sarsabz": {
		"property": {
			"disabled": false,
			"name": "Sarsabz",
			"fa": "سرسبز",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Daneshgah-e Elm va Sanat",
				"disabled": false,
				"fa": "دانشگاه علم و صنعت",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Janbazan",
				"disabled": false,
				"fa": "جانبازان",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Janbazan": {
		"property": {
			"disabled": false,
			"name": "Janbazan",
			"fa": "جانبازان",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Sarsabz",
				"disabled": false,
				"fa": "سرسبز",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Fadak",
				"disabled": false,
				"fa": "فدک",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Fadak": {
		"property": {
			"disabled": false,
			"name": "Fadak",
			"fa": "فدک",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Janbazan",
				"disabled": false,
				"fa": "جانبازان",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Sabalan",
				"disabled": false,
				"fa": "سبلان",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Sabalan": {
		"property": {
			"disabled": false,
			"name": "Sabalan",
			"fa": "سبلان",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Fadak",
				"disabled": false,
				"fa": "فدک",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Shahid Madani",
				"disabled": false,
				"fa": "شهید مدنی",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Shahid Madani": {
		"property": {
			"disabled": false,
			"name": "Shahid Madani",
			"fa": "شهید مدنی",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Sabalan",
				"disabled": false,
				"fa": "سبلان",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Imam Hussein",
				"disabled": false,
				"fa": "امام حسین",
				"colors": ["#2F4389", "#EF639F"],
				"lines": [2, 6]
			}
		]
	},
	"Imam Hussein": {
		"property": {
			"disabled": false,
			"name": "Imam Hussein",
			"fa": "امام حسین",
			"colors": ["#2F4389", "#EF639F"],
			"lines": [2, 6]
		},
		"relations": [
			{
				"name": "Shahid Madani",
				"disabled": false,
				"fa": "شهید مدنی",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Sarbaz",
				"disabled": false,
				"fa": "سرباز",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Meydan-e Shohada",
				"disabled": false,
				"fa": "میدان شهدا",
				"colors": ["#F8E100", "#EF639F"],
				"lines": [4, 6]
			},
			{
				"name": "Darvazeh Shemiran",
				"disabled": false,
				"fa": "دروازه شمیران",
				"colors": ["#2F4389", "#F8E100"],
				"lines": [2, 4]
			}
		]
	},
	"Darvazeh Shemiran": {
		"property": {
			"disabled": false,
			"name": "Darvazeh Shemiran",
			"fa": "دروازه شمیران",
			"colors": ["#2F4389", "#F8E100"],
			"lines": [2, 4]
		},
		"relations": [
			{
				"name": "Imam Hussein",
				"disabled": false,
				"fa": "امام حسین",
				"colors": ["#2F4389", "#EF639F"],
				"lines": [2, 6]
			},
			{
				"name": "Meydan-e Shohada",
				"disabled": false,
				"fa": "میدان شهدا",
				"colors": ["#F8E100", "#EF639F"],
				"lines": [4, 6]
			},
			{
				"name": "Darvazeh Dolat",
				"disabled": false,
				"fa": "دروازه دولت",
				"colors": ["#E0001F", "#F8E100"],
				"lines": [1, 4]
			},
			{
				"name": "Baharistan",
				"disabled": false,
				"fa": "بهارستان",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Baharistan": {
		"property": {
			"disabled": false,
			"name": "Baharistan",
			"fa": "بهارستان",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Darvazeh Shemiran",
				"disabled": false,
				"fa": "دروازه شمیران",
				"colors": ["#2F4389", "#F8E100"],
				"lines": [2, 4]
			},
			{
				"name": "Mellat",
				"disabled": false,
				"fa": "ملت",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Mellat": {
		"property": {
			"disabled": false,
			"name": "Mellat",
			"fa": "ملت",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Baharistan",
				"disabled": false,
				"fa": "بهارستان",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Imam Khomeini",
				"disabled": false,
				"fa": "امام خمینی",
				"colors": ["#E0001F", "#2F4389"],
				"lines": [1, 2]
			}
		]
	},
	"Hasan Abad": {
		"property": {
			"disabled": false,
			"name": "Hasan Abad",
			"fa": "حسن آباد",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Imam Khomeini",
				"disabled": false,
				"fa": "امام خمینی",
				"colors": ["#E0001F", "#2F4389"],
				"lines": [1, 2]
			},
			{
				"name": "Daneshgah-e Imam Ali",
				"disabled": false,
				"fa": "دانشگاه امام علی",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Daneshgah-e Imam Ali": {
		"property": {
			"disabled": false,
			"name": "Daneshgah-e Imam Ali",
			"fa": "دانشگاه امام علی",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Hasan Abad",
				"disabled": false,
				"fa": "حسن آباد",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Meydan-e Horr",
				"disabled": false,
				"fa": "میدان حر",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Meydan-e Horr": {
		"property": {
			"disabled": false,
			"name": "Meydan-e Horr",
			"fa": "میدان حر",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Daneshgah-e Imam Ali",
				"disabled": false,
				"fa": "دانشگاه امام علی",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Shahid Navab-e Safavi",
				"disabled": false,
				"fa": "شهید نواب صفوی",
				"colors": ["#2F4389", "#7F0B74"],
				"lines": [2, 7]
			}
		]
	},
	"Shahid Navab-e Safavi": {
		"property": {
			"disabled": false,
			"name": "Shahid Navab-e Safavi",
			"fa": "شهید نواب صفوی",
			"colors": ["#2F4389", "#7F0B74"],
			"lines": [2, 7]
		},
		"relations": [
			{
				"name": "Meydan-e Horr",
				"disabled": false,
				"fa": "میدان حر",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Towhid",
				"disabled": false,
				"fa": "توحید",
				"colors": ["#F8E100", "#7F0B74"],
				"lines": [4, 7]
			},
			{
				"name": "Roudaki",
				"disabled": false,
				"fa": "رودکی",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Shademan",
				"disabled": false,
				"fa": "شادمان",
				"colors": ["#2F4389", "#F8E100"],
				"lines": [2, 4]
			}
		]
	},
	"Shademan": {
		"property": {
			"disabled": false,
			"name": "Shademan",
			"fa": "شادمان",
			"colors": ["#2F4389", "#F8E100"],
			"lines": [2, 4]
		},
		"relations": [
			{
				"name": "Shahid Navab-e Safavi",
				"disabled": false,
				"fa": "شهید نواب صفوی",
				"colors": ["#2F4389", "#7F0B74"],
				"lines": [2, 7]
			},
			{
				"name": "Towhid",
				"disabled": false,
				"fa": "توحید",
				"colors": ["#F8E100", "#7F0B74"],
				"lines": [4, 7]
			},
			{
				"name": "Doctor Habibollah",
				"disabled": false,
				"fa": "دکتر حبیب‌الله",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Daneshgah-e Sharif",
				"disabled": false,
				"fa": "دانشگاه شریف",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Daneshgah-e Sharif": {
		"property": {
			"disabled": false,
			"name": "Daneshgah-e Sharif",
			"fa": "دانشگاه شریف",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Shademan",
				"disabled": false,
				"fa": "شادمان",
				"colors": ["#2F4389", "#F8E100"],
				"lines": [2, 4]
			},
			{
				"name": "Tarasht",
				"disabled": false,
				"fa": "طرشت",
				"colors": ["#2F4389"],
				"lines": [2]
			}
		]
	},
	"Tarasht": {
		"property": {
			"disabled": false,
			"name": "Tarasht",
			"fa": "طرشت",
			"colors": ["#2F4389"],
			"lines": [2]
		},
		"relations": [
			{
				"name": "Daneshgah-e Sharif",
				"disabled": false,
				"fa": "دانشگاه شریف",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Tehran (Sadeghiyeh)",
				"disabled": false,
				"fa": "تهران (صادقیه)",
				"colors": ["#2F4389", "#007E46"],
				"lines": [2, 5]
			}
		]
	},
	"Tehran (Sadeghiyeh)": {
		"property": {
			"disabled": false,
			"name": "Tehran (Sadeghiyeh)",
			"fa": "تهران (صادقیه)",
			"colors": ["#2F4389", "#007E46"],
			"lines": [2, 5]
		},
		"relations": [
			{
				"name": "Tarasht",
				"disabled": false,
				"fa": "طرشت",
				"colors": ["#2F4389"],
				"lines": [2]
			},
			{
				"name": "Eram-e Sabz",
				"disabled": false,
				"fa": "ارم سبز",
				"colors": ["#F8E100", "#007E46"],
				"lines": [4, 5]
			}
		]
	},
	"Qa'em": {
		"property": {
			"disabled": false,
			"name": "Qa'em",
			"fa": "قائم",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Shahid Mahallati",
				"disabled": false,
				"fa": "شهید محلاتی",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Shahid Mahallati": {
		"property": {
			"disabled": false,
			"name": "Shahid Mahallati",
			"fa": "شهید محلاتی",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Qa'em",
				"disabled": false,
				"fa": "قائم",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Aghdasiyeh",
				"disabled": false,
				"fa": "اقتصادیه",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Aghdasiyeh": {
		"property": {
			"disabled": false,
			"name": "Aghdasiyeh",
			"fa": "اقتصادیه",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Shahid Mahallati",
				"disabled": false,
				"fa": "شهید محلاتی",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Nobonyad",
				"disabled": false,
				"fa": "نوبنیاد",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Nobonyad": {
		"property": {
			"disabled": false,
			"name": "Nobonyad",
			"fa": "نوبنیاد",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Aghdasiyeh",
				"disabled": false,
				"fa": "اقتصادیه",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Hoseinabad",
				"disabled": false,
				"fa": "حسین‌آباد",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Hoseinabad": {
		"property": {
			"disabled": false,
			"name": "Hoseinabad",
			"fa": "حسین‌آباد",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Nobonyad",
				"disabled": false,
				"fa": "نوبنیاد",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Meydan-e Heravi",
				"disabled": false,
				"fa": "میدان هروی",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Meydan-e Heravi": {
		"property": {
			"disabled": false,
			"name": "Meydan-e Heravi",
			"fa": "میدان هروی",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Hoseinabad",
				"disabled": false,
				"fa": "حسین‌آباد",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Shahid Zeynoddin",
				"disabled": false,
				"fa": "شهید زین‌الدین",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Shahid Zeynoddin": {
		"property": {
			"disabled": false,
			"name": "Shahid Zeynoddin",
			"fa": "شهید زین‌الدین",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Meydan-e Heravi",
				"disabled": false,
				"fa": "میدان هروی",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Khajeh Abdollah-e Ansari",
				"disabled": false,
				"fa": "خواجه عبدالله انصاری",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Khajeh Abdollah-e Ansari": {
		"property": {
			"disabled": false,
			"name": "Khajeh Abdollah-e Ansari",
			"fa": "خواجه عبدالله انصاری",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Shahid Zeynoddin",
				"disabled": false,
				"fa": "شهید زین‌الدین",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Shahid Sayyad Shirazi",
				"disabled": false,
				"fa": "شهید صیاد شیرازی",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Shahid Sayyad Shirazi": {
		"property": {
			"disabled": false,
			"name": "Shahid Sayyad Shirazi",
			"fa": "شهید صیاد شیرازی",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Khajeh Abdollah-e Ansari",
				"disabled": false,
				"fa": "خواجه عبدالله انصاری",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Shahid Ghodousi",
				"disabled": false,
				"fa": "شهید قدوسی",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Shahid Ghodousi": {
		"property": {
			"disabled": false,
			"name": "Shahid Ghodousi",
			"fa": "شهید قدوسی",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Shahid Sayyad Shirazi",
				"disabled": false,
				"fa": "شهید صیاد شیرازی",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Sohrevardi",
				"disabled": false,
				"fa": "سهروردی",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Sohrevardi": {
		"property": {
			"disabled": false,
			"name": "Sohrevardi",
			"fa": "سهروردی",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Shahid Ghodousi",
				"disabled": false,
				"fa": "شهید قدوسی",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Shahid Beheshti",
				"disabled": false,
				"fa": "شهید بهشتی",
				"colors": ["#E0001F", "#67C5F5"],
				"lines": [1, 3]
			}
		]
	},
	"Mirza-ye Shirazi": {
		"property": {
			"disabled": false,
			"name": "Mirza-ye Shirazi",
			"fa": "میرزا شیرازی",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Shahid Beheshti",
				"disabled": false,
				"fa": "شهید بهشتی",
				"colors": ["#E0001F", "#67C5F5"],
				"lines": [1, 3]
			},
			{
				"name": "Meydan-e Jahad",
				"disabled": false,
				"fa": "میدان جهاد",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Meydan-e Jahad": {
		"property": {
			"disabled": false,
			"name": "Meydan-e Jahad",
			"fa": "میدان جهاد",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Mirza-ye Shirazi",
				"disabled": false,
				"fa": "میرزا شیرازی",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Meydan-e Hazrat Vali Asr",
				"disabled": false,
				"fa": "میدان حضرت ولیعصر",
				"colors": ["#67C5F5", "#EF639F"],
				"lines": [3, 6]
			}
		]
	},
	"Teatr-e Shahr": {
		"property": {
			"disabled": false,
			"name": "Teatr-e Shahr",
			"fa": "تئاتر شهر",
			"colors": ["#67C5F5", "#F8E100"],
			"lines": [3, 4]
		},
		"relations": [
			{
				"name": "Meydan-e Hazrat Vali Asr",
				"disabled": false,
				"fa": "میدان حضرت ولیعصر",
				"colors": ["#67C5F5", "#EF639F"],
				"lines": [3, 6]
			},
			{
				"name": "Ferdowsi",
				"disabled": false,
				"fa": "فردوسی",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Meydan-e Enghelab-e Eslami",
				"disabled": false,
				"fa": "میدان انقلاب اسلامی",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Moniriyeh",
				"disabled": false,
				"fa": "منیریه",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Moniriyeh": {
		"property": {
			"disabled": false,
			"name": "Moniriyeh",
			"fa": "منیریه",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Teatr-e Shahr",
				"disabled": false,
				"fa": "تئاتر شهر",
				"colors": ["#67C5F5", "#F8E100"],
				"lines": [3, 4]
			},
			{
				"name": "Mahdiyeh",
				"disabled": false,
				"fa": "مهدیه",
				"colors": ["#67C5F5", "#7F0B74"],
				"lines": [3, 7]
			}
		]
	},
	"Mahdiyeh": {
		"property": {
			"disabled": false,
			"name": "Mahdiyeh",
			"fa": "مهدیه",
			"colors": ["#67C5F5", "#7F0B74"],
			"lines": [3, 7]
		},
		"relations": [
			{
				"name": "Moniriyeh",
				"disabled": false,
				"fa": "منیریه",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Meydan-e Mohammadiyeh",
				"disabled": false,
				"fa": "میدان محمدیه",
				"colors": ["#E0001F", "#7F0B74"],
				"lines": [1, 7]
			},
			{
				"name": "Helal Ahmar",
				"disabled": false,
				"fa": "هلال احمر",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Rahahan",
				"disabled": false,
				"fa": "راه آهن",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Rahahan": {
		"property": {
			"disabled": false,
			"name": "Rahahan",
			"fa": "راه آهن",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Mahdiyeh",
				"disabled": false,
				"fa": "مهدیه",
				"colors": ["#67C5F5", "#7F0B74"],
				"lines": [3, 7]
			},
			{
				"name": "Javadiyeh",
				"disabled": false,
				"fa": "جوادیه",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Javadiyeh": {
		"property": {
			"disabled": false,
			"name": "Javadiyeh",
			"fa": "جوادیه",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Rahahan",
				"disabled": false,
				"fa": "راه آهن",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Zamzam",
				"disabled": false,
				"fa": "زمزم",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Zamzam": {
		"property": {
			"disabled": false,
			"name": "Zamzam",
			"fa": "زمزم",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Javadiyeh",
				"disabled": false,
				"fa": "جوادیه",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Shahrak-e Shariaty",
				"disabled": false,
				"fa": "شهرک شریعتی",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Shahrak-e Shariaty": {
		"property": {
			"disabled": false,
			"name": "Shahrak-e Shariaty",
			"fa": "شهرک شریعتی",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Zamzam",
				"disabled": false,
				"fa": "زمزم",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Abdol Abad",
				"disabled": false,
				"fa": "عبدالآباد",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Abdol Abad": {
		"property": {
			"disabled": false,
			"name": "Abdol Abad",
			"fa": "عبدالآباد",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Shahrak-e Shariaty",
				"disabled": false,
				"fa": "شهرک شریعتی",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Nemat Abad",
				"disabled": false,
				"fa": "نعمت آباد",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Nemat Abad": {
		"property": {
			"disabled": false,
			"name": "Nemat Abad",
			"fa": "نعمت آباد",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Abdol Abad",
				"disabled": false,
				"fa": "عبدالآباد",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Azadegan",
				"disabled": false,
				"fa": "آزادگان",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Azadegan": {
		"property": {
			"disabled": false,
			"name": "Azadegan",
			"fa": "آزادگان",
			"colors": ["#67C5F5"],
			"lines": [3]
		},
		"relations": [
			{
				"name": "Nemat Abad",
				"disabled": false,
				"fa": "نعمت آباد",
				"colors": ["#67C5F5"],
				"lines": [3]
			}
		]
	},
	"Shahid Kolahdooz": {
		"property": {
			"disabled": false,
			"name": "Shahid Kolahdooz",
			"fa": "شهید کلاهدوز",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Niroohavaii",
				"disabled": false,
				"fa": "نیروهوایی",
				"colors": ["#F8E100"],
				"lines": [4]
			}
		]
	},
	"Niroohavaii": {
		"property": {
			"disabled": false,
			"name": "Niroohavaii",
			"fa": "نیروهوایی",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Shahid Kolahdooz",
				"disabled": false,
				"fa": "شهید کلاهدوز",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Nobard",
				"disabled": false,
				"fa": "نوبارد",
				"colors": ["#F8E100"],
				"lines": [4]
			}
		]
	},
	"Nobard": {
		"property": {
			"disabled": false,
			"name": "Nobard",
			"fa": "نوبارد",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Niroohavaii",
				"disabled": false,
				"fa": "نیروهوایی",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Piroozi",
				"disabled": false,
				"fa": "پیروزی",
				"colors": ["#F8E100"],
				"lines": [4]
			}
		]
	},
	"Piroozi": {
		"property": {
			"disabled": false,
			"name": "Piroozi",
			"fa": "پیروزی",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Nobard",
				"disabled": false,
				"fa": "نوبارد",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Ebn-e Sina",
				"disabled": false,
				"fa": "ابن سینا",
				"colors": ["#F8E100"],
				"lines": [4]
			}
		]
	},
	"Ebn-e Sina": {
		"property": {
			"disabled": false,
			"name": "Ebn-e Sina",
			"fa": "ابن سینا",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Piroozi",
				"disabled": false,
				"fa": "پیروزی",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Meydan-e Shohada",
				"disabled": false,
				"fa": "میدان شهدا",
				"colors": ["#F8E100", "#EF639F"],
				"lines": [4, 6]
			}
		]
	},
	"Ferdowsi": {
		"property": {
			"disabled": false,
			"name": "Ferdowsi",
			"fa": "فردوسی",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Darvazeh Dolat",
				"disabled": false,
				"fa": "دروازه دولت",
				"colors": ["#E0001F", "#F8E100"],
				"lines": [1, 4]
			},
			{
				"name": "Teatr-e Shahr",
				"disabled": false,
				"fa": "تئاتر شهر",
				"colors": ["#67C5F5", "#F8E100"],
				"lines": [3, 4]
			}
		]
	},
	"Meydan-e Enghelab-e Eslami": {
		"property": {
			"disabled": false,
			"name": "Meydan-e Enghelab-e Eslami",
			"fa": "میدان انقلاب اسلامی",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Teatr-e Shahr",
				"disabled": false,
				"fa": "تئاتر شهر",
				"colors": ["#67C5F5", "#F8E100"],
				"lines": [3, 4]
			},
			{
				"name": "Towhid",
				"disabled": false,
				"fa": "توحید",
				"colors": ["#F8E100", "#7F0B74"],
				"lines": [4, 7]
			}
		]
	},
	"Towhid": {
		"property": {
			"disabled": false,
			"name": "Towhid",
			"fa": "توحید",
			"colors": ["#F8E100", "#7F0B74"],
			"lines": [4, 7]
		},
		"relations": [
			{
				"name": "Meydan-e Enghelab-e Eslami",
				"disabled": false,
				"fa": "میدان انقلاب اسلامی",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Modafean-e Salamat",
				"disabled": false,
				"fa": "مدافعان سلامت",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Shahid Navab-e Safavi",
				"disabled": false,
				"fa": "شهید نواب صفوی",
				"colors": ["#2F4389", "#7F0B74"],
				"lines": [2, 7]
			},
			{
				"name": "Shademan",
				"disabled": false,
				"fa": "شادمان",
				"colors": ["#2F4389", "#F8E100"],
				"lines": [2, 4]
			}
		]
	},
	"Doctor Habibollah": {
		"property": {
			"disabled": false,
			"name": "Doctor Habibollah",
			"fa": "دکتر حبیب‌الله",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Shademan",
				"disabled": false,
				"fa": "شادمان",
				"colors": ["#2F4389", "#F8E100"],
				"lines": [2, 4]
			},
			{
				"name": "Ostad Mo'in",
				"disabled": false,
				"fa": "استاد معین",
				"colors": ["#F8E100"],
				"lines": [4]
			}
		]
	},
	"Ostad Mo'in": {
		"property": {
			"disabled": false,
			"name": "Ostad Mo'in",
			"fa": "استاد معین",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Doctor Habibollah",
				"disabled": false,
				"fa": "دکتر حبیب‌الله",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Meydan-e Azadi",
				"disabled": false,
				"fa": "میدان آزادی",
				"colors": ["#F8E100"],
				"lines": [4]
			}
		]
	},
	"Meydan-e Azadi": {
		"property": {
			"disabled": false,
			"name": "Meydan-e Azadi",
			"fa": "میدان آزادی",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Ostad Mo'in",
				"disabled": false,
				"fa": "استاد معین",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Bimeh",
				"disabled": false,
				"fa": "بیمه",
				"colors": ["#F8E100"],
				"lines": [4]
			}
		]
	},
	"Bimeh": {
		"property": {
			"disabled": false,
			"name": "Bimeh",
			"fa": "بیمه",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Meydan-e Azadi",
				"disabled": false,
				"fa": "میدان آزادی",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Shahrak-e Ekbatan",
				"disabled": false,
				"fa": "شهرک اکباتان",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Mehrabad Airport Terminal 1&2",
				"disabled": false,
				"fa": "ترمینال ۱ و ۲ فرودگاه مهرآباد",
				"colors": ["#F8E100"],
				"lines": [4]
			}
		]
	},
	"Mehrabad Airport Terminal 1&2": {
		"property": {
			"disabled": false,
			"name": "Mehrabad Airport Terminal 1&2",
			"fa": "ترمینال ۱ و ۲ فرودگاه مهرآباد",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Bimeh",
				"disabled": false,
				"fa": "بیمه",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Mehrabad Airport Terminal 4&6",
				"disabled": false,
				"fa": "ترمینال ۴ و ۶ فرودگاه مهرآباد",
				"colors": ["#F8E100"],
				"lines": [4]
			}
		]
	},
	"Mehrabad Airport Terminal 4&6": {
		"property": {
			"disabled": false,
			"name": "Mehrabad Airport Terminal 4&6",
			"fa": "ترمینال ۴ و ۶ فرودگاه مهرآباد",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Mehrabad Airport Terminal 1&2",
				"disabled": false,
				"fa": "ترمینال ۱ و ۲ فرودگاه مهرآباد",
				"colors": ["#F8E100"],
				"lines": [4]
			}
		]
	},
	"Shahrak-e Ekbatan": {
		"property": {
			"disabled": false,
			"name": "Shahrak-e Ekbatan",
			"fa": "شهرک اکباتان",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Bimeh",
				"disabled": false,
				"fa": "بیمه",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Eram-e Sabz",
				"disabled": false,
				"fa": "ارم سبز",
				"colors": ["#F8E100", "#007E46"],
				"lines": [4, 5]
			}
		]
	},
	"Allameh Jafari": {
		"property": {
			"disabled": false,
			"name": "Allameh Jafari",
			"fa": "علامه جعفری",
			"colors": ["#F8E100"],
			"lines": [4]
		},
		"relations": [
			{
				"name": "Eram-e Sabz",
				"disabled": false,
				"fa": "ارم سبز",
				"colors": ["#F8E100", "#007E46"],
				"lines": [4, 5]
			}
		]
	},
	"Eram-e Sabz": {
		"property": {
			"disabled": false,
			"name": "Eram-e Sabz",
			"fa": "ارم سبز",
			"colors": ["#F8E100", "#007E46"],
			"lines": [4, 5]
		},
		"relations": [
			{
				"name": "Tehran (Sadeghiyeh)",
				"disabled": false,
				"fa": "تهران (صادقیه)",
				"colors": ["#2F4389", "#007E46"],
				"lines": [2, 5]
			},
			{
				"name": "Varzeshgah-e Azadi",
				"disabled": false,
				"fa": "ورزشگاه آزادی",
				"colors": ["#007E46"],
				"lines": [5]
			},
			{
				"name": "Allameh Jafari",
				"disabled": false,
				"fa": "علامه جعفری",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Shahrak-e Ekbatan",
				"disabled": false,
				"fa": "شهرک اکباتان",
				"colors": ["#F8E100"],
				"lines": [4]
			}
		]
	},
	"Varzeshgah-e Azadi": {
		"property": {
			"disabled": false,
			"name": "Varzeshgah-e Azadi",
			"fa": "ورزشگاه آزادی",
			"colors": ["#007E46"],
			"lines": [5]
		},
		"relations": [
			{
				"name": "Eram-e Sabz",
				"disabled": false,
				"fa": "ارم سبز",
				"colors": ["#F8E100", "#007E46"],
				"lines": [4, 5]
			},
			{
				"name": "Chitgar",
				"disabled": false,
				"fa": "چیتگر",
				"colors": ["#007E46"],
				"lines": [5]
			}
		]
	},
	"Chitgar": {
		"property": {
			"disabled": false,
			"name": "Chitgar",
			"fa": "چیتگر",
			"colors": ["#007E46"],
			"lines": [5]
		},
		"relations": [
			{
				"name": "Varzeshgah-e Azadi",
				"disabled": false,
				"fa": "ورزشگاه آزادی",
				"colors": ["#007E46"],
				"lines": [5]
			},
			{
				"name": "Iran Khodro",
				"disabled": false,
				"fa": "ایران‌خودرو",
				"colors": ["#007E46"],
				"lines": [5]
			}
		]
	},
	"Iran Khodro": {
		"property": {
			"disabled": false,
			"name": "Iran Khodro",
			"fa": "ایران‌خودرو",
			"colors": ["#007E46"],
			"lines": [5]
		},
		"relations": [
			{
				"name": "Chitgar",
				"disabled": false,
				"fa": "چیتگر",
				"colors": ["#007E46"],
				"lines": [5]
			},
			{
				"name": "Vardavard",
				"disabled": false,
				"fa": "وردآورد",
				"colors": ["#007E46"],
				"lines": [5]
			}
		]
	},
	"Vardavard": {
		"property": {
			"disabled": false,
			"name": "Vardavard",
			"fa": "وردآورد",
			"colors": ["#007E46"],
			"lines": [5]
		},
		"relations": [
			{
				"name": "Iran Khodro",
				"disabled": false,
				"fa": "ایران‌خودرو",
				"colors": ["#007E46"],
				"lines": [5]
			},
			{
				"name": "Garmdareh",
				"disabled": false,
				"fa": "گرمدره",
				"colors": ["#007E46"],
				"lines": [5]
			}
		]
	},
	"Garmdareh": {
		"property": {
			"disabled": false,
			"name": "Garmdareh",
			"fa": "گرمدره",
			"colors": ["#007E46"],
			"lines": [5]
		},
		"relations": [
			{
				"name": "Vardavard",
				"disabled": false,
				"fa": "وردآورد",
				"colors": ["#007E46"],
				"lines": [5]
			},
			{
				"name": "Atmosphere",
				"disabled": false,
				"fa": "اتمسفر",
				"colors": ["#007E46"],
				"lines": [5]
			}
		]
	},
	"Atmosphere": {
		"property": {
			"disabled": false,
			"name": "Atmosphere",
			"fa": "اتمسفر",
			"colors": ["#007E46"],
			"lines": [5]
		},
		"relations": [
			{
				"name": "Garmdareh",
				"disabled": false,
				"fa": "گرمدره",
				"colors": ["#007E46"],
				"lines": [5]
			},
			{
				"name": "Karaj",
				"disabled": false,
				"fa": "کرج",
				"colors": ["#007E46"],
				"lines": [5]
			}
		]
	},
	"Karaj": {
		"property": {
			"disabled": false,
			"name": "Karaj",
			"fa": "کرج",
			"colors": ["#007E46"],
			"lines": [5]
		},
		"relations": [
			{
				"name": "Atmosphere",
				"disabled": false,
				"fa": "اتمسفر",
				"colors": ["#007E46"],
				"lines": [5]
			},
			{
				"name": "Mohammadshahr",
				"disabled": false,
				"fa": "محمدشهر",
				"colors": ["#007E46"],
				"lines": [5]
			}
		]
	},
	"Mohammadshahr": {
		"property": {
			"disabled": false,
			"name": "Mohammadshahr",
			"fa": "محمدشهر",
			"colors": ["#007E46"],
			"lines": [5]
		},
		"relations": [
			{
				"name": "Karaj",
				"disabled": false,
				"fa": "کرج",
				"colors": ["#007E46"],
				"lines": [5]
			},
			{
				"name": "Golshahr",
				"disabled": false,
				"fa": "گلشهر",
				"colors": ["#007E46"],
				"lines": [5]
			}
		]
	},
	"Golshahr": {
		"property": {
			"disabled": false,
			"name": "Golshahr",
			"fa": "گلشهر",
			"colors": ["#007E46"],
			"lines": [5]
		},
		"relations": [
			{
				"name": "Mohammadshahr",
				"disabled": false,
				"fa": "محمدشهر",
				"colors": ["#007E46"],
				"lines": [5]
			},
			{
				"name": "Shahid Sepahbod Qasem Soleimani",
				"disabled": true,
				"fa": "شهید سپهبد قاسم سلیمانی",
				"colors": ["#007E46"],
				"lines": [5]
			}
		]
	},
	"Shahid Sepahbod Qasem Soleimani": {
		"property": {
			"disabled": true,
			"name": "Shahid Sepahbod Qasem Soleimani",
			"fa": "شهید سپهبد قاسم سلیمانی",
			"colors": ["#007E46"],
			"lines": [5]
		},
		"relations": [
			{
				"name": "Golshahr",
				"disabled": true,
				"fa": "گلشهر",
				"colors": ["#007E46"],
				"lines": [5]
			}
		]
	},
	"Haram-e Hazrat-e Abdol Azim": {
		"property": {
			"disabled": true,
			"name": "Haram-e Hazrat-e Abdol Azim",
			"fa": "حرم حضرت عبدالعظیم",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Meydan-e Hazrat-e Abdol Azim",
				"disabled": true,
				"fa": "میدان حضرت عبدالعظیم",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Meydan-e Hazrat-e Abdol Azim": {
		"property": {
			"disabled": true,
			"name": "Meydan-e Hazrat-e Abdol Azim",
			"fa": "میدان حضرت عبدالعظیم",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Haram-e Hazrat-e Abdol Azim",
				"disabled": true,
				"fa": "حرم حضرت عبدالعظیم",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Ebn-e Babviyeh",
				"disabled": true,
				"fa": "ابن بابویه",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Ebn-e Babviyeh": {
		"property": {
			"disabled": true,
			"name": "Ebn-e Babviyeh",
			"fa": "ابن بابویه",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Meydan-e Hazrat-e Abdol Azim",
				"disabled": true,
				"fa": "میدان حضرت عبدالعظیم",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Cheshmeh Ali",
				"disabled": true,
				"fa": "چشمه علی",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Cheshmeh Ali": {
		"property": {
			"disabled": true,
			"name": "Cheshmeh Ali",
			"fa": "چشمه علی",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Ebn-e Babviyeh",
				"disabled": true,
				"fa": "ابن بابویه",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Shohada-ye Dowlat Abad",
				"disabled": false,
				"fa": "شهدای دولت‌آباد",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Shohada-ye Dowlat Abad": {
		"property": {
			"disabled": false,
			"name": "Shohada-ye Dowlat Abad",
			"fa": "شهدای دولت‌آباد",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Cheshmeh Ali",
				"disabled": false,
				"fa": "چشمه علی",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Kiyan Shahr",
				"disabled": false,
				"fa": "کیان شهر",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Kiyan Shahr": {
		"property": {
			"disabled": false,
			"name": "Kiyan Shahr",
			"fa": "کیان شهر",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Shohada-ye Dowlat Abad",
				"disabled": false,
				"fa": "شهدای دولت‌آباد",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Be'sat",
				"disabled": false,
				"fa": "بعثت",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Be'sat": {
		"property": {
			"disabled": false,
			"name": "Be'sat",
			"fa": "بعثت",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Kiyan Shahr",
				"disabled": false,
				"fa": "کیان شهر",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Shahid Rezaei",
				"disabled": false,
				"fa": "شهید رضایی",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Shahid Rezaei": {
		"property": {
			"disabled": false,
			"name": "Shahid Rezaei",
			"fa": "شهید رضایی",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Be'sat",
				"disabled": false,
				"fa": "بعثت",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Meydan-e Khorasan",
				"disabled": false,
				"fa": "میدان خراسان",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Meydan-e Khorasan": {
		"property": {
			"disabled": true,
			"name": "Meydan-e Khorasan",
			"fa": "میدان خراسان",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Shahid Rezaei",
				"disabled": false,
				"fa": "شهید رضایی",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Shohada-ye Hefdah-e Shahrivar",
				"disabled": false,
				"fa": "شهدای هفده شهریور",
				"colors": ["#EF639F", "#7F0B74"],
				"lines": [6, 7]
			}
		]
	},
	"Shohada-ye Hefdah-e Shahrivar": {
		"property": {
			"disabled": true,
			"name": "Shohada-ye Hefdah-e Shahrivar",
			"fa": "شهدای هفده شهریور",
			"colors": ["#EF639F", "#7F0B74"],
			"lines": [6, 7]
		},
		"relations": [
			{
				"name": "Meydan-e Khorasan",
				"disabled": false,
				"fa": "میدان خراسان",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Amirkabir",
				"disabled": false,
				"fa": "امیرکبیر",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Chehel Tan-e Doulab",
				"disabled": false,
				"fa": "چهل تن دولاب",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Meydan-e Ghiyam",
				"disabled": false,
				"fa": "میدان قیام",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	},
	"Amirkabir": {
		"property": {
			"disabled": false,
			"name": "Amirkabir",
			"fa": "امیرکبیر",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Shohada-ye Hefdah-e Shahrivar",
				"disabled": false,
				"fa": "شهدای هفده شهریور",
				"colors": ["#EF639F", "#7F0B74"],
				"lines": [6, 7]
			},
			{
				"name": "Meydan-e Shohada",
				"disabled": false,
				"fa": "میدان شهدا",
				"colors": ["#F8E100", "#EF639F"],
				"lines": [4, 6]
			}
		]
	},
	"Meydan-e Shohada": {
		"property": {
			"disabled": false,
			"name": "Meydan-e Shohada",
			"fa": "میدان شهدا",
			"colors": ["#F8E100", "#EF639F"],
			"lines": [4, 6]
		},
		"relations": [
			{
				"name": "Amirkabir",
				"disabled": false,
				"fa": "امیرکبیر",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Ebn-e Sina",
				"disabled": false,
				"fa": "ابن سینا",
				"colors": ["#F8E100"],
				"lines": [4]
			},
			{
				"name": "Darvazeh Shemiran",
				"disabled": false,
				"fa": "دروازه شمیران",
				"colors": ["#2F4389", "#F8E100"],
				"lines": [2, 4]
			},
			{
				"name": "Imam Hussein",
				"disabled": false,
				"fa": "امام حسین",
				"colors": ["#2F4389", "#EF639F"],
				"lines": [2, 6]
			}
		]
	},
	"Sarbaz": {
		"property": {
			"disabled": true,
			"name": "Sarbaz",
			"fa": "سرباز",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Imam Hussein",
				"disabled": false,
				"fa": "امام حسین",
				"colors": ["#2F4389", "#EF639F"],
				"lines": [2, 6]
			},
			{
				"name": "Bahar Shiraz (Khanevadeh Hospital)",
				"disabled": false,
				"fa": "بهار شیراز (بیمارستان خانواده)",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Bahar Shiraz (Khanevadeh Hospital)": {
		"property": {
			"disabled": true,
			"name": "Bahar Shiraz (Khanevadeh Hospital)",
			"fa": "بهار شیراز (بیمارستان خانواده)",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Sarbaz",
				"disabled": false,
				"fa": "سرباز",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Shohada-ye Haftom-e Tir",
				"disabled": false,
				"fa": "شهدای هفتم تیر",
				"colors": ["#E0001F", "#EF639F"],
				"lines": [1, 6]
			}
		]
	},
	"Shohada-ye Haftom-e Tir": {
		"property": {
			"disabled": false,
			"name": "Shohada-ye Haftom-e Tir",
			"fa": "شهدای هفتم تیر",
			"colors": ["#E0001F", "#EF639F"],
			"lines": [1, 6]
		},
		"relations": [
			{
				"name": "Bahar Shiraz (Khanevadeh Hospital)",
				"disabled": false,
				"fa": "بهار شیراز (بیمارستان خانواده)",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Shahid Nejatollahi",
				"disabled": false,
				"fa": "شهید نجات اللهی",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Shahid Mofattah",
				"disabled": false,
				"fa": "شهید مفتح",
				"colors": ["#E0001F"],
				"lines": [1]
			},
			{
				"name": "Ayatollah Taleghani",
				"disabled": false,
				"fa": "آیت‌الله طالقانی",
				"colors": ["#E0001F"],
				"lines": [1]
			}
		]
	},
	"Shahid Nejatollahi": {
		"property": {
			"disabled": true,
			"name": "Shahid Nejatollahi",
			"fa": "شهید نجات اللهی",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Shohada-ye Haftom-e Tir",
				"disabled": false,
				"fa": "شهدای هفتم تیر",
				"colors": ["#E0001F", "#EF639F"],
				"lines": [1, 6]
			},
			{
				"name": "Meydan-e Hazrat Vali Asr",
				"disabled": false,
				"fa": "میدان حضرت ولیعصر",
				"colors": ["#67C5F5", "#EF639F"],
				"lines": [3, 6]
			}
		]
	},
	"Meydan-e Hazrat Vali Asr": {
		"property": {
			"disabled": false,
			"name": "Meydan-e Hazrat Vali Asr",
			"fa": "میدان حضرت ولیعصر",
			"colors": ["#67C5F5", "#EF639F"],
			"lines": [3, 6]
		},
		"relations": [
			{
				"name": "Shahid Nejatollahi",
				"disabled": false,
				"fa": "شهید نجات اللهی",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Meydan-e Jahad",
				"disabled": false,
				"fa": "میدان جهاد",
				"colors": ["#67C5F5"],
				"lines": [3]
			},
			{
				"name": "Teatr-e Shahr",
				"disabled": false,
				"fa": "تئاتر شهر",
				"colors": ["#67C5F5", "#F8E100"],
				"lines": [3, 4]
			},
			{
				"name": "Bustan-e Laleh",
				"disabled": false,
				"fa": "بوستان لاله",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Bustan-e Laleh": {
		"property": {
			"disabled": false,
			"name": "Bustan-e Laleh",
			"fa": "بوستان لاله",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Meydan-e Hazrat Vali Asr",
				"disabled": false,
				"fa": "میدان حضرت ولیعصر",
				"colors": ["#67C5F5", "#EF639F"],
				"lines": [3, 6]
			},
			{
				"name": "Karagar",
				"disabled": false,
				"fa": "کارگر",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Karagar": {
		"property": {
			"disabled": false,
			"name": "Karagar",
			"fa": "کارگر",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Bustan-e Laleh",
				"disabled": false,
				"fa": "بوستان لاله",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Daneshgah-e Tarbiat Modarres",
				"disabled": false,
				"fa": "دانشگاه تربیت مدرس",
				"colors": ["#EF639F", "#7F0B74"],
				"lines": [6, 7]
			}
		]
	},
	"Daneshgah-e Tarbiat Modarres": {
		"property": {
			"disabled": false,
			"name": "Daneshgah-e Tarbiat Modarres",
			"fa": "دانشگاه تربیت مدرس",
			"colors": ["#EF639F", "#7F0B74"],
			"lines": [6, 7]
		},
		"relations": [
			{
				"name": "Karagar",
				"disabled": false,
				"fa": "کارگر",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Boostan-e Goftegou",
				"disabled": false,
				"fa": "بوستان گفتگو",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Modafean-e Salamat",
				"disabled": false,
				"fa": "مدافعان سلامت",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Shahrak-e Azmayesh",
				"disabled": false,
				"fa": "شهرک آزمایش",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Shahrak-e Azmayesh": {
		"property": {
			"disabled": false,
			"name": "Shahrak-e Azmayesh",
			"fa": "شهرک آزمایش",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Daneshgah-e Tarbiat Modarres",
				"disabled": false,
				"fa": "دانشگاه تربیت مدرس",
				"colors": ["#EF639F", "#7F0B74"],
				"lines": [6, 7]
			},
			{
				"name": "Marzdaran",
				"disabled": false,
				"fa": "مرزداران",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Marzdaran": {
		"property": {
			"disabled": false,
			"name": "Marzdaran",
			"fa": "مرزداران",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Shahrak-e Azmayesh",
				"disabled": false,
				"fa": "شهرک آزمایش",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Yadegar-e Imam",
				"disabled": false,
				"fa": "یادگار امام",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Yadegar-e Imam": {
		"property": {
			"disabled": false,
			"name": "Yadegar-e Imam",
			"fa": "یادگار امام",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Marzdaran",
				"disabled": false,
				"fa": "مرزداران",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Shahid Ashrafi Esfahani",
				"disabled": false,
				"fa": "شهید اشرفی اصفهانی",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Shahid Ashrafi Esfahani": {
		"property": {
			"disabled": false,
			"name": "Shahid Ashrafi Esfahani",
			"fa": "شهید اشرفی اصفهانی",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Yadegar-e Imam",
				"disabled": false,
				"fa": "یادگار امام",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Shahid Sattari",
				"disabled": false,
				"fa": "شهید ستاری",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Shahid Sattari": {
		"property": {
			"disabled": false,
			"name": "Shahid Sattari",
			"fa": "شهید ستاری",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Shahid Ashrafi Esfahani",
				"disabled": false,
				"fa": "شهید اشرفی اصفهانی",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Ayatollah Kashani",
				"disabled": false,
				"fa": "آیت‌الله کاشانی",
				"colors": ["#F8E100", "#EF639F"],
				"lines": [4, 6]
			}
		]
	},
	"Ayatollah Kashani": {
		"property": {
			"disabled": true,
			"name": "Ayatollah Kashani",
			"fa": "آیت‌الله کاشانی",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Shahid Sattari",
				"disabled": false,
				"fa": "شهید ستاری",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Shahr-e Ziba",
				"disabled": true,
				"fa": "شهر زیبا",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Shahr-e Ziba": {
		"property": {
			"disabled": true,
			"name": "Shahr-e Ziba",
			"fa": "شهر زیبا",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Ayatollah Kashani",
				"disabled": true,
				"fa": "آیت‌الله کاشانی",
				"colors": ["#F8E100", "#EF639F"],
				"lines": [4, 6]
			},
			{
				"name": "Shahran",
				"disabled": true,
				"fa": "شهران",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Shahran": {
		"property": {
			"disabled": true,
			"name": "Shahran",
			"fa": "شهران",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Shahr-e Ziba",
				"disabled": true,
				"fa": "شهر زیبا",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Shohada-ye Kan",
				"disabled": true,
				"fa": "شهدای کن",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Shohada-ye Kan": {
		"property": {
			"disabled": true,
			"name": "Shohada-ye Kan",
			"fa": "شهدای کن",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Shahran",
				"disabled": true,
				"fa": "شهران",
				"colors": ["#EF639F"],
				"lines": [6]
			},
			{
				"name": "Kouhsar",
				"disabled": true,
				"fa": "کوهسار",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Kouhsar": {
		"property": {
			"disabled": true,
			"name": "Kouhsar",
			"fa": "کوهسار",
			"colors": ["#EF639F"],
			"lines": [6]
		},
		"relations": [
			{
				"name": "Shohada-ye Kan",
				"disabled": true,
				"fa": "شهدای کن",
				"colors": ["#EF639F"],
				"lines": [6]
			}
		]
	},
	"Varzeshgah-e Takhti": {
		"property": {
			"disabled": true,
			"name": "Varzeshgah-e Takhti",
			"fa": "ورزشگاه تختی",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Basij",
				"disabled": false,
				"fa": "بسیج",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	},
	"Basij": {
		"property": {
			"disabled": false,
			"name": "Basij",
			"fa": "بسیج",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Varzeshgah-e Takhti",
				"disabled": false,
				"fa": "ورزشگاه تختی",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Ahang",
				"disabled": false,
				"fa": "آهنگ",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	},
	"Ahang": {
		"property": {
			"disabled": false,
			"name": "Ahang",
			"fa": "آهنگ",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Basij",
				"disabled": false,
				"fa": "بسیج",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Chehel Tan-e Doulab",
				"disabled": false,
				"fa": "چهل تن دولاب",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	},
	"Chehel Tan-e Doulab": {
		"property": {
			"disabled": false,
			"name": "Chehel Tan-e Doulab",
			"fa": "چهل تن دولاب",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Ahang",
				"disabled": false,
				"fa": "آهنگ",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Shohada-ye Hefdah-e Shahrivar",
				"disabled": false,
				"fa": "شهدای هفده شهریور",
				"colors": ["#EF639F", "#7F0B74"],
				"lines": [6, 7]
			}
		]
	},
	"Meydan-e Ghiyam": {
		"property": {
			"disabled": false,
			"name": "Meydan-e Ghiyam",
			"fa": "میدان قیام",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Shohada-ye Hefdah-e Shahrivar",
				"disabled": false,
				"fa": "شهدای هفده شهریور",
				"colors": ["#EF639F", "#7F0B74"],
				"lines": [6, 7]
			},
			{
				"name": "Mowlavi",
				"disabled": false,
				"fa": "مولوی",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	},
	"Mowlavi": {
		"property": {
			"disabled": false,
			"name": "Mowlavi",
			"fa": "مولوی",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Meydan-e Ghiyam",
				"disabled": false,
				"fa": "میدان قیام",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Meydan-e Mohammadiyeh",
				"disabled": false,
				"fa": "میدان محمدیه",
				"colors": ["#E0001F", "#7F0B74"],
				"lines": [1, 7]
			}
		]
	},
	"Helal Ahmar": {
		"property": {
			"disabled": false,
			"name": "Helal Ahmar",
			"fa": "هلال احمر",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Mahdiyeh",
				"disabled": false,
				"fa": "مهدیه",
				"colors": ["#67C5F5", "#7F0B74"],
				"lines": [3, 7]
			},
			{
				"name": "Beryanak",
				"disabled": false,
				"fa": "بریانک",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	},
	"Beryanak": {
		"property": {
			"disabled": false,
			"name": "Beryanak",
			"fa": "بریانک",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Helal Ahmar",
				"disabled": false,
				"fa": "هلال احمر",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Kamil",
				"disabled": false,
				"fa": "کامیل",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	},
	"Kamil": {
		"property": {
			"disabled": false,
			"name": "Kamil",
			"fa": "کامیل",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Beryanak",
				"disabled": false,
				"fa": "بریانک",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Roudaki",
				"disabled": false,
				"fa": "رودکی",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	},
	"Roudaki": {
		"property": {
			"disabled": false,
			"name": "Roudaki",
			"fa": "رودکی",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Kamil",
				"disabled": false,
				"fa": "کامیل",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Shahid Navab-e Safavi",
				"disabled": false,
				"fa": "شهید نواب صفوی",
				"colors": ["#2F4389", "#7F0B74"],
				"lines": [2, 7]
			}
		]
	},
	"Modafean-e Salamat": {
		"property": {
			"disabled": false,
			"name": "Modafean-e Salamat",
			"fa": "مدافعان سلامت",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Towhid",
				"disabled": false,
				"fa": "توحید",
				"colors": ["#F8E100", "#7F0B74"],
				"lines": [4, 7]
			},
			{
				"name": "Daneshgah-e Tarbiat Modarres",
				"disabled": false,
				"fa": "دانشگاه تربیت مدرس",
				"colors": ["#EF639F", "#7F0B74"],
				"lines": [6, 7]
			}
		]
	},
	"Boostan-e Goftegou": {
		"property": {
			"disabled": false,
			"name": "Boostan-e Goftegou",
			"fa": "بوستان گفتگو",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Daneshgah-e Tarbiat Modarres",
				"disabled": false,
				"fa": "دانشگاه تربیت مدرس",
				"colors": ["#EF639F", "#7F0B74"],
				"lines": [6, 7]
			},
			{
				"name": "Milad Tower",
				"disabled": false,
				"fa": "برج میلاد",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	},
	"Milad Tower": {
		"property": {
			"disabled": false,
			"name": "Milad Tower",
			"fa": "برج میلاد",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Boostan-e Goftegou",
				"disabled": false,
				"fa": "بوستان گفتگو",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Meydan-e San'at",
				"disabled": false,
				"fa": "میدان صنعت",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	},
	"Meydan-e San'at": {
		"property": {
			"disabled": false,
			"name": "Meydan-e San'at",
			"fa": "میدان صنعت",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Milad Tower",
				"disabled": false,
				"fa": "برج میلاد",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Shahid Dadman",
				"disabled": false,
				"fa": "شهید دادمان",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	},
	"Shahid Dadman": {
		"property": {
			"disabled": false,
			"name": "Shahid Dadman",
			"fa": "شهید دادمان",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Meydan-e San'at",
				"disabled": false,
				"fa": "میدان صنعت",
				"colors": ["#7F0B74"],
				"lines": [7]
			},
			{
				"name": "Meydan-e Ketab",
				"disabled": false,
				"fa": "میدان کتاب",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	},
	"Meydan-e Ketab": {
		"property": {
			"disabled": false,
			"name": "Meydan-e Ketab",
			"fa": "میدان کتاب",
			"colors": ["#7F0B74"],
			"lines": [7]
		},
		"relations": [
			{
				"name": "Shahid Dadman",
				"disabled": false,
				"fa": "شهید دادمان",
				"colors": ["#7F0B74"],
				"lines": [7]
			}
		]
	}
}
)--";