//
//  * The Font Awesome font is licensed under the SIL Open Font License
//  http://scripts.sil.org/OFL
//
//
//  * Font Awesome CSS, LESS, and SASS files are licensed under the MIT License
//  http://opensource.org/licenses/mit-license.html
//
//
//  * The Font Awesome pictograms are licensed under the CC BY 3.0 License
//  http://creativecommons.org/licenses/by/3.0
//
//
//  * Attribution is no longer required in Font Awesome 3.0, but much appreciated:
//  "Font Awesome by Dave Gandy - http://fortawesome.github.com/Font-Awesome"
//
//
//  -----------------------------------------
//  Edited and refactored by Jesse Squires on 2 April, 2013.
//
//  http://github.com/jessesquires/BButton
//
//  http://jessesquires.com
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  A string constant for the Font Awesome font family name.
 */
FOUNDATION_EXPORT NSString * const kFontAwesomeFont;

/**
 *  A constant describing the available Font Awesome Icons.
 */
typedef NS_ENUM(unsigned short, FAIcon) {
    FAIconGlass = 0xf000,
    FAIconMusic = 0xf001,
    FAIconSearch = 0xf002,
    FAIconEnvelopeO = 0xf003,
    FAIconHeart = 0xf004,
    FAIconStar = 0xf005,
    FAIconStarO = 0xf006,
    FAIconUser = 0xf007,
    FAIconFilm = 0xf008,
    FAIconThLarge = 0xf009,
    FAIconTh = 0xf00a,
    FAIconThList = 0xf00b,
    FAIconCheck = 0xf00c,
    FAIconRemove = 0xf00d,
    FAIconClose = 0xf00d,
    FAIconTimes = 0xf00d,
    FAIconSearchPlus = 0xf00e,
    FAIconSearchMinus = 0xf010,
    FAIconPowerOff = 0xf011,
    FAIconSignal = 0xf012,
    FAIconGear = 0xf013,
    FAIconCog = 0xf013,
    FAIconTrashO = 0xf014,
    FAIconHome = 0xf015,
    FAIconFileO = 0xf016,
    FAIconClockO = 0xf017,
    FAIconRoad = 0xf018,
    FAIconDownload = 0xf019,
    FAIconArrowCircleODown = 0xf01a,
    FAIconArrowCircleOUp = 0xf01b,
    FAIconInbox = 0xf01c,
    FAIconPlayCircleO = 0xf01d,
    FAIconRotateRight = 0xf01e,
    FAIconRepeat = 0xf01e,
    FAIconRefresh = 0xf021,
    FAIconListAlt = 0xf022,
    FAIconLock = 0xf023,
    FAIconFlag = 0xf024,
    FAIconHeadphones = 0xf025,
    FAIconVolumeOff = 0xf026,
    FAIconVolumeDown = 0xf027,
    FAIconVolumeUp = 0xf028,
    FAIconQrcode = 0xf029,
    FAIconBarcode = 0xf02a,
    FAIconTag = 0xf02b,
    FAIconTags = 0xf02c,
    FAIconBook = 0xf02d,
    FAIconBookmark = 0xf02e,
    FAIconPrint = 0xf02f,
    FAIconCamera = 0xf030,
    FAIconFont = 0xf031,
    FAIconBold = 0xf032,
    FAIconItalic = 0xf033,
    FAIconTextHeight = 0xf034,
    FAIconTextWidth = 0xf035,
    FAIconAlignLeft = 0xf036,
    FAIconAlignCenter = 0xf037,
    FAIconAlignRight = 0xf038,
    FAIconAlignJustify = 0xf039,
    FAIconList = 0xf03a,
    FAIconDedent = 0xf03b,
    FAIconOutdent = 0xf03b,
    FAIconIndent = 0xf03c,
    FAIconVideoCamera = 0xf03d,
    FAIconPhoto = 0xf03e,
    FAIconImage = 0xf03e,
    FAIconPictureO = 0xf03e,
    FAIconPencil = 0xf040,
    FAIconMapMarker = 0xf041,
    FAIconAdjust = 0xf042,
    FAIconTint = 0xf043,
    FAIconEdit = 0xf044,
    FAIconPencilSquareO = 0xf044,
    FAIconShareSquareO = 0xf045,
    FAIconCheckSquareO = 0xf046,
    FAIconArrows = 0xf047,
    FAIconStepBackward = 0xf048,
    FAIconFastBackward = 0xf049,
    FAIconBackward = 0xf04a,
    FAIconPlay = 0xf04b,
    FAIconPause = 0xf04c,
    FAIconStop = 0xf04d,
    FAIconForward = 0xf04e,
    FAIconFastForward = 0xf050,
    FAIconStepForward = 0xf051,
    FAIconEject = 0xf052,
    FAIconChevronLeft = 0xf053,
    FAIconChevronRight = 0xf054,
    FAIconPlusCircle = 0xf055,
    FAIconMinusCircle = 0xf056,
    FAIconTimesCircle = 0xf057,
    FAIconCheckCircle = 0xf058,
    FAIconQuestionCircle = 0xf059,
    FAIconInfoCircle = 0xf05a,
    FAIconCrosshairs = 0xf05b,
    FAIconTimesCircleO = 0xf05c,
    FAIconCheckCircleO = 0xf05d,
    FAIconBan = 0xf05e,
    FAIconArrowLeft = 0xf060,
    FAIconArrowRight = 0xf061,
    FAIconArrowUp = 0xf062,
    FAIconArrowDown = 0xf063,
    FAIconMailForward = 0xf064,
    FAIconShare = 0xf064,
    FAIconExpand = 0xf065,
    FAIconCompress = 0xf066,
    FAIconPlus = 0xf067,
    FAIconMinus = 0xf068,
    FAIconAsterisk = 0xf069,
    FAIconExclamationCircle = 0xf06a,
    FAIconGift = 0xf06b,
    FAIconLeaf = 0xf06c,
    FAIconFire = 0xf06d,
    FAIconEye = 0xf06e,
    FAIconEyeSlash = 0xf070,
    FAIconWarning = 0xf071,
    FAIconExclamationTriangle = 0xf071,
    FAIconPlane = 0xf072,
    FAIconCalendar = 0xf073,
    FAIconRandom = 0xf074,
    FAIconComment = 0xf075,
    FAIconMagnet = 0xf076,
    FAIconChevronUp = 0xf077,
    FAIconChevronDown = 0xf078,
    FAIconRetweet = 0xf079,
    FAIconShoppingCart = 0xf07a,
    FAIconFolder = 0xf07b,
    FAIconFolderOpen = 0xf07c,
    FAIconArrowsV = 0xf07d,
    FAIconArrowsH = 0xf07e,
    FAIconBarChartO = 0xf080,
    FAIconBarChart = 0xf080,
    FAIconTwitterSquare = 0xf081,
    FAIconFacebookSquare = 0xf082,
    FAIconCameraRetro = 0xf083,
    FAIconKey = 0xf084,
    FAIconGears = 0xf085,
    FAIconCogs = 0xf085,
    FAIconComments = 0xf086,
    FAIconThumbsOUp = 0xf087,
    FAIconThumbsODown = 0xf088,
    FAIconStarHalf = 0xf089,
    FAIconHeartO = 0xf08a,
    FAIconSignOut = 0xf08b,
    FAIconLinkedinSquare = 0xf08c,
    FAIconThumbTack = 0xf08d,
    FAIconExternalLink = 0xf08e,
    FAIconSignIn = 0xf090,
    FAIconTrophy = 0xf091,
    FAIconGithubSquare = 0xf092,
    FAIconUpload = 0xf093,
    FAIconLemonO = 0xf094,
    FAIconPhone = 0xf095,
    FAIconSquareO = 0xf096,
    FAIconBookmarkO = 0xf097,
    FAIconPhoneSquare = 0xf098,
    FAIconTwitter = 0xf099,
    FAIconFacebookF = 0xf09a,
    FAIconFacebook = 0xf09a,
    FAIconGithub = 0xf09b,
    FAIconUnlock = 0xf09c,
    FAIconCreditCard = 0xf09d,
    FAIconFeed = 0xf09e,
    FAIconRss = 0xf09e,
    FAIconHddO = 0xf0a0,
    FAIconBullhorn = 0xf0a1,
    FAIconBell = 0xf0f3,
    FAIconCertificate = 0xf0a3,
    FAIconHandORight = 0xf0a4,
    FAIconHandOLeft = 0xf0a5,
    FAIconHandOUp = 0xf0a6,
    FAIconHandODown = 0xf0a7,
    FAIconArrowCircleLeft = 0xf0a8,
    FAIconArrowCircleRight = 0xf0a9,
    FAIconArrowCircleUp = 0xf0aa,
    FAIconArrowCircleDown = 0xf0ab,
    FAIconGlobe = 0xf0ac,
    FAIconWrench = 0xf0ad,
    FAIconTasks = 0xf0ae,
    FAIconFilter = 0xf0b0,
    FAIconBriefcase = 0xf0b1,
    FAIconArrowsAlt = 0xf0b2,
    FAIconGroup = 0xf0c0,
    FAIconUsers = 0xf0c0,
    FAIconChain = 0xf0c1,
    FAIconLink = 0xf0c1,
    FAIconCloud = 0xf0c2,
    FAIconFlask = 0xf0c3,
    FAIconCut = 0xf0c4,
    FAIconScissors = 0xf0c4,
    FAIconCopy = 0xf0c5,
    FAIconFilesO = 0xf0c5,
    FAIconPaperclip = 0xf0c6,
    FAIconSave = 0xf0c7,
    FAIconFloppyO = 0xf0c7,
    FAIconSquare = 0xf0c8,
    FAIconNavicon = 0xf0c9,
    FAIconReorder = 0xf0c9,
    FAIconBars = 0xf0c9,
    FAIconListUl = 0xf0ca,
    FAIconListOl = 0xf0cb,
    FAIconStrikethrough = 0xf0cc,
    FAIconUnderline = 0xf0cd,
    FAIconTable = 0xf0ce,
    FAIconMagic = 0xf0d0,
    FAIconTruck = 0xf0d1,
    FAIconPinterest = 0xf0d2,
    FAIconPinterestSquare = 0xf0d3,
    FAIconGooglePlusSquare = 0xf0d4,
    FAIconGooglePlus = 0xf0d5,
    FAIconMoney = 0xf0d6,
    FAIconCaretDown = 0xf0d7,
    FAIconCaretUp = 0xf0d8,
    FAIconCaretLeft = 0xf0d9,
    FAIconCaretRight = 0xf0da,
    FAIconColumns = 0xf0db,
    FAIconUnsorted = 0xf0dc,
    FAIconSort = 0xf0dc,
    FAIconSortDown = 0xf0dd,
    FAIconSortDesc = 0xf0dd,
    FAIconSortUp = 0xf0de,
    FAIconSortAsc = 0xf0de,
    FAIconEnvelope = 0xf0e0,
    FAIconLinkedin = 0xf0e1,
    FAIconRotateLeft = 0xf0e2,
    FAIconUndo = 0xf0e2,
    FAIconLegal = 0xf0e3,
    FAIconGavel = 0xf0e3,
    FAIconDashboard = 0xf0e4,
    FAIconTachometer = 0xf0e4,
    FAIconCommentO = 0xf0e5,
    FAIconCommentsO = 0xf0e6,
    FAIconFlash = 0xf0e7,
    FAIconBolt = 0xf0e7,
    FAIconSitemap = 0xf0e8,
    FAIconUmbrella = 0xf0e9,
    FAIconPaste = 0xf0ea,
    FAIconClipboard = 0xf0ea,
    FAIconLightbulbO = 0xf0eb,
    FAIconExchange = 0xf0ec,
    FAIconCloudDownload = 0xf0ed,
    FAIconCloudUpload = 0xf0ee,
    FAIconUserMd = 0xf0f0,
    FAIconStethoscope = 0xf0f1,
    FAIconSuitcase = 0xf0f2,
    FAIconBellO = 0xf0a2,
    FAIconCoffee = 0xf0f4,
    FAIconCutlery = 0xf0f5,
    FAIconFileTextO = 0xf0f6,
    FAIconBuildingO = 0xf0f7,
    FAIconHospitalO = 0xf0f8,
    FAIconAmbulance = 0xf0f9,
    FAIconMedkit = 0xf0fa,
    FAIconFighterJet = 0xf0fb,
    FAIconBeer = 0xf0fc,
    FAIconHSquare = 0xf0fd,
    FAIconPlusSquare = 0xf0fe,
    FAIconAngleDoubleLeft = 0xf100,
    FAIconAngleDoubleRight = 0xf101,
    FAIconAngleDoubleUp = 0xf102,
    FAIconAngleDoubleDown = 0xf103,
    FAIconAngleLeft = 0xf104,
    FAIconAngleRight = 0xf105,
    FAIconAngleUp = 0xf106,
    FAIconAngleDown = 0xf107,
    FAIconDesktop = 0xf108,
    FAIconLaptop = 0xf109,
    FAIconTablet = 0xf10a,
    FAIconMobilePhone = 0xf10b,
    FAIconMobile = 0xf10b,
    FAIconCircleO = 0xf10c,
    FAIconQuoteLeft = 0xf10d,
    FAIconQuoteRight = 0xf10e,
    FAIconSpinner = 0xf110,
    FAIconCircle = 0xf111,
    FAIconMailReply = 0xf112,
    FAIconReply = 0xf112,
    FAIconGithubAlt = 0xf113,
    FAIconFolderO = 0xf114,
    FAIconFolderOpenO = 0xf115,
    FAIconSmileO = 0xf118,
    FAIconFrownO = 0xf119,
    FAIconMehO = 0xf11a,
    FAIconGamepad = 0xf11b,
    FAIconKeyboardO = 0xf11c,
    FAIconFlagO = 0xf11d,
    FAIconFlagCheckered = 0xf11e,
    FAIconTerminal = 0xf120,
    FAIconCode = 0xf121,
    FAIconMailReplyAll = 0xf122,
    FAIconReplyAll = 0xf122,
    FAIconStarHalfEmpty = 0xf123,
    FAIconStarHalfFull = 0xf123,
    FAIconStarHalfO = 0xf123,
    FAIconLocationArrow = 0xf124,
    FAIconCrop = 0xf125,
    FAIconCodeFork = 0xf126,
    FAIconUnlink = 0xf127,
    FAIconChainBroken = 0xf127,
    FAIconQuestion = 0xf128,
    FAIconInfo = 0xf129,
    FAIconExclamation = 0xf12a,
    FAIconSuperscript = 0xf12b,
    FAIconSubscript = 0xf12c,
    FAIconEraser = 0xf12d,
    FAIconPuzzlePiece = 0xf12e,
    FAIconMicrophone = 0xf130,
    FAIconMicrophoneSlash = 0xf131,
    FAIconShield = 0xf132,
    FAIconCalendarO = 0xf133,
    FAIconFireExtinguisher = 0xf134,
    FAIconRocket = 0xf135,
    FAIconMaxcdn = 0xf136,
    FAIconChevronCircleLeft = 0xf137,
    FAIconChevronCircleRight = 0xf138,
    FAIconChevronCircleUp = 0xf139,
    FAIconChevronCircleDown = 0xf13a,
    FAIconHtml5 = 0xf13b,
    FAIconCss3 = 0xf13c,
    FAIconAnchor = 0xf13d,
    FAIconUnlockAlt = 0xf13e,
    FAIconBullseye = 0xf140,
    FAIconEllipsisH = 0xf141,
    FAIconEllipsisV = 0xf142,
    FAIconRssSquare = 0xf143,
    FAIconPlayCircle = 0xf144,
    FAIconTicket = 0xf145,
    FAIconMinusSquare = 0xf146,
    FAIconMinusSquareO = 0xf147,
    FAIconLevelUp = 0xf148,
    FAIconLevelDown = 0xf149,
    FAIconCheckSquare = 0xf14a,
    FAIconPencilSquare = 0xf14b,
    FAIconExternalLinkSquare = 0xf14c,
    FAIconShareSquare = 0xf14d,
    FAIconCompass = 0xf14e,
    FAIconToggleDown = 0xf150,
    FAIconCaretSquareODown = 0xf150,
    FAIconToggleUp = 0xf151,
    FAIconCaretSquareOUp = 0xf151,
    FAIconToggleRight = 0xf152,
    FAIconCaretSquareORight = 0xf152,
    FAIconEuro = 0xf153,
    FAIconEur = 0xf153,
    FAIconGbp = 0xf154,
    FAIconDollar = 0xf155,
    FAIconUsd = 0xf155,
    FAIconRupee = 0xf156,
    FAIconInr = 0xf156,
    FAIconCny = 0xf157,
    FAIconRmb = 0xf157,
    FAIconYen = 0xf157,
    FAIconJpy = 0xf157,
    FAIconRuble = 0xf158,
    FAIconRouble = 0xf158,
    FAIconRub = 0xf158,
    FAIconWon = 0xf159,
    FAIconKrw = 0xf159,
    FAIconBitcoin = 0xf15a,
    FAIconBtc = 0xf15a,
    FAIconFile = 0xf15b,
    FAIconFileText = 0xf15c,
    FAIconSortAlphaAsc = 0xf15d,
    FAIconSortAlphaDesc = 0xf15e,
    FAIconSortAmountAsc = 0xf160,
    FAIconSortAmountDesc = 0xf161,
    FAIconSortNumericAsc = 0xf162,
    FAIconSortNumericDesc = 0xf163,
    FAIconThumbsUp = 0xf164,
    FAIconThumbsDown = 0xf165,
    FAIconYoutubeSquare = 0xf166,
    FAIconYoutube = 0xf167,
    FAIconXing = 0xf168,
    FAIconXingSquare = 0xf169,
    FAIconYoutubePlay = 0xf16a,
    FAIconDropbox = 0xf16b,
    FAIconStackOverflow = 0xf16c,
    FAIconInstagram = 0xf16d,
    FAIconFlickr = 0xf16e,
    FAIconAdn = 0xf170,
    FAIconBitbucket = 0xf171,
    FAIconBitbucketSquare = 0xf172,
    FAIconTumblr = 0xf173,
    FAIconTumblrSquare = 0xf174,
    FAIconLongArrowDown = 0xf175,
    FAIconLongArrowUp = 0xf176,
    FAIconLongArrowLeft = 0xf177,
    FAIconLongArrowRight = 0xf178,
    FAIconApple = 0xf179,
    FAIconWindows = 0xf17a,
    FAIconAndroid = 0xf17b,
    FAIconLinux = 0xf17c,
    FAIconDribbble = 0xf17d,
    FAIconSkype = 0xf17e,
    FAIconFoursquare = 0xf180,
    FAIconTrello = 0xf181,
    FAIconFemale = 0xf182,
    FAIconMale = 0xf183,
    FAIconGittip = 0xf184,
    FAIconGratipay = 0xf184,
    FAIconSunO = 0xf185,
    FAIconMoonO = 0xf186,
    FAIconArchive = 0xf187,
    FAIconBug = 0xf188,
    FAIconVk = 0xf189,
    FAIconWeibo = 0xf18a,
    FAIconRenren = 0xf18b,
    FAIconPagelines = 0xf18c,
    FAIconStackExchange = 0xf18d,
    FAIconArrowCircleORight = 0xf18e,
    FAIconArrowCircleOLeft = 0xf190,
    FAIconToggleLeft = 0xf191,
    FAIconCaretSquareOLeft = 0xf191,
    FAIconDotCircleO = 0xf192,
    FAIconWheelchair = 0xf193,
    FAIconVimeoSquare = 0xf194,
    FAIconTurkishLira = 0xf195,
    FAIconTry = 0xf195,
    FAIconPlusSquareO = 0xf196,
    FAIconSpaceShuttle = 0xf197,
    FAIconSlack = 0xf198,
    FAIconEnvelopeSquare = 0xf199,
    FAIconWordpress = 0xf19a,
    FAIconOpenid = 0xf19b,
    FAIconInstitution = 0xf19c,
    FAIconBank = 0xf19c,
    FAIconUniversity = 0xf19c,
    FAIconMortarBoard = 0xf19d,
    FAIconGraduationCap = 0xf19d,
    FAIconYahoo = 0xf19e,
    FAIconGoogle = 0xf1a0,
    FAIconReddit = 0xf1a1,
    FAIconRedditSquare = 0xf1a2,
    FAIconStumbleuponCircle = 0xf1a3,
    FAIconStumbleupon = 0xf1a4,
    FAIconDelicious = 0xf1a5,
    FAIconDigg = 0xf1a6,
    FAIconPiedPiperPp = 0xf1a7,
    FAIconPiedPiperAlt = 0xf1a8,
    FAIconDrupal = 0xf1a9,
    FAIconJoomla = 0xf1aa,
    FAIconLanguage = 0xf1ab,
    FAIconFax = 0xf1ac,
    FAIconBuilding = 0xf1ad,
    FAIconChild = 0xf1ae,
    FAIconPaw = 0xf1b0,
    FAIconSpoon = 0xf1b1,
    FAIconCube = 0xf1b2,
    FAIconCubes = 0xf1b3,
    FAIconBehance = 0xf1b4,
    FAIconBehanceSquare = 0xf1b5,
    FAIconSteam = 0xf1b6,
    FAIconSteamSquare = 0xf1b7,
    FAIconRecycle = 0xf1b8,
    FAIconAutomobile = 0xf1b9,
    FAIconCar = 0xf1b9,
    FAIconCab = 0xf1ba,
    FAIconTaxi = 0xf1ba,
    FAIconTree = 0xf1bb,
    FAIconSpotify = 0xf1bc,
    FAIconDeviantart = 0xf1bd,
    FAIconSoundcloud = 0xf1be,
    FAIconDatabase = 0xf1c0,
    FAIconFilePdfO = 0xf1c1,
    FAIconFileWordO = 0xf1c2,
    FAIconFileExcelO = 0xf1c3,
    FAIconFilePowerpointO = 0xf1c4,
    FAIconFilePhotoO = 0xf1c5,
    FAIconFilePictureO = 0xf1c5,
    FAIconFileImageO = 0xf1c5,
    FAIconFileZipO = 0xf1c6,
    FAIconFileArchiveO = 0xf1c6,
    FAIconFileSoundO = 0xf1c7,
    FAIconFileAudioO = 0xf1c7,
    FAIconFileMovieO = 0xf1c8,
    FAIconFileVideoO = 0xf1c8,
    FAIconFileCodeO = 0xf1c9,
    FAIconVine = 0xf1ca,
    FAIconCodepen = 0xf1cb,
    FAIconJsfiddle = 0xf1cc,
    FAIconLifeBouy = 0xf1cd,
    FAIconLifeBuoy = 0xf1cd,
    FAIconLifeSaver = 0xf1cd,
    FAIconSupport = 0xf1cd,
    FAIconLifeRing = 0xf1cd,
    FAIconCircleONotch = 0xf1ce,
    FAIconRa = 0xf1d0,
    FAIconResistance = 0xf1d0,
    FAIconRebel = 0xf1d0,
    FAIconGe = 0xf1d1,
    FAIconEmpire = 0xf1d1,
    FAIconGitSquare = 0xf1d2,
    FAIconGit = 0xf1d3,
    FAIconYCombinatorSquare = 0xf1d4,
    FAIconYcSquare = 0xf1d4,
    FAIconHackerNews = 0xf1d4,
    FAIconTencentWeibo = 0xf1d5,
    FAIconQq = 0xf1d6,
    FAIconWechat = 0xf1d7,
    FAIconWeixin = 0xf1d7,
    FAIconSend = 0xf1d8,
    FAIconPaperPlane = 0xf1d8,
    FAIconSendO = 0xf1d9,
    FAIconPaperPlaneO = 0xf1d9,
    FAIconHistory = 0xf1da,
    FAIconCircleThin = 0xf1db,
    FAIconHeader = 0xf1dc,
    FAIconParagraph = 0xf1dd,
    FAIconSliders = 0xf1de,
    FAIconShareAlt = 0xf1e0,
    FAIconShareAltSquare = 0xf1e1,
    FAIconBomb = 0xf1e2,
    FAIconSoccerBallO = 0xf1e3,
    FAIconFutbolO = 0xf1e3,
    FAIconTty = 0xf1e4,
    FAIconBinoculars = 0xf1e5,
    FAIconPlug = 0xf1e6,
    FAIconSlideshare = 0xf1e7,
    FAIconTwitch = 0xf1e8,
    FAIconYelp = 0xf1e9,
    FAIconNewspaperO = 0xf1ea,
    FAIconWifi = 0xf1eb,
    FAIconCalculator = 0xf1ec,
    FAIconPaypal = 0xf1ed,
    FAIconGoogleWallet = 0xf1ee,
    FAIconCcVisa = 0xf1f0,
    FAIconCcMastercard = 0xf1f1,
    FAIconCcDiscover = 0xf1f2,
    FAIconCcAmex = 0xf1f3,
    FAIconCcPaypal = 0xf1f4,
    FAIconCcStripe = 0xf1f5,
    FAIconBellSlash = 0xf1f6,
    FAIconBellSlashO = 0xf1f7,
    FAIconTrash = 0xf1f8,
    FAIconCopyright = 0xf1f9,
    FAIconAt = 0xf1fa,
    FAIconEyedropper = 0xf1fb,
    FAIconPaintBrush = 0xf1fc,
    FAIconBirthdayCake = 0xf1fd,
    FAIconAreaChart = 0xf1fe,
    FAIconPieChart = 0xf200,
    FAIconLineChart = 0xf201,
    FAIconLastfm = 0xf202,
    FAIconLastfmSquare = 0xf203,
    FAIconToggleOff = 0xf204,
    FAIconToggleOn = 0xf205,
    FAIconBicycle = 0xf206,
    FAIconBus = 0xf207,
    FAIconIoxhost = 0xf208,
    FAIconAngellist = 0xf209,
    FAIconCc = 0xf20a,
    FAIconShekel = 0xf20b,
    FAIconSheqel = 0xf20b,
    FAIconIls = 0xf20b,
    FAIconMeanpath = 0xf20c,
    FAIconBuysellads = 0xf20d,
    FAIconConnectdevelop = 0xf20e,
    FAIconDashcube = 0xf210,
    FAIconForumbee = 0xf211,
    FAIconLeanpub = 0xf212,
    FAIconSellsy = 0xf213,
    FAIconShirtsinbulk = 0xf214,
    FAIconSimplybuilt = 0xf215,
    FAIconSkyatlas = 0xf216,
    FAIconCartPlus = 0xf217,
    FAIconCartArrowDown = 0xf218,
    FAIconDiamond = 0xf219,
    FAIconShip = 0xf21a,
    FAIconUserSecret = 0xf21b,
    FAIconMotorcycle = 0xf21c,
    FAIconStreetView = 0xf21d,
    FAIconHeartbeat = 0xf21e,
    FAIconVenus = 0xf221,
    FAIconMars = 0xf222,
    FAIconMercury = 0xf223,
    FAIconIntersex = 0xf224,
    FAIconTransgender = 0xf224,
    FAIconTransgenderAlt = 0xf225,
    FAIconVenusDouble = 0xf226,
    FAIconMarsDouble = 0xf227,
    FAIconVenusMars = 0xf228,
    FAIconMarsStroke = 0xf229,
    FAIconMarsStrokeV = 0xf22a,
    FAIconMarsStrokeH = 0xf22b,
    FAIconNeuter = 0xf22c,
    FAIconGenderless = 0xf22d,
    FAIconFacebookOfficial = 0xf230,
    FAIconPinterestP = 0xf231,
    FAIconWhatsapp = 0xf232,
    FAIconServer = 0xf233,
    FAIconUserPlus = 0xf234,
    FAIconUserTimes = 0xf235,
    FAIconHotel = 0xf236,
    FAIconBed = 0xf236,
    FAIconViacoin = 0xf237,
    FAIconTrain = 0xf238,
    FAIconSubway = 0xf239,
    FAIconMedium = 0xf23a,
    FAIconYc = 0xf23b,
    FAIconYCombinator = 0xf23b,
    FAIconOptinMonster = 0xf23c,
    FAIconOpencart = 0xf23d,
    FAIconExpeditedssl = 0xf23e,
    FAIconBattery4 = 0xf240,
    FAIconBatteryFull = 0xf240,
    FAIconBattery3 = 0xf241,
    FAIconBatteryThreeQuarters = 0xf241,
    FAIconBattery2 = 0xf242,
    FAIconBatteryHalf = 0xf242,
    FAIconBattery1 = 0xf243,
    FAIconBatteryQuarter = 0xf243,
    FAIconBattery0 = 0xf244,
    FAIconBatteryEmpty = 0xf244,
    FAIconMousePointer = 0xf245,
    FAIconICursor = 0xf246,
    FAIconObjectGroup = 0xf247,
    FAIconObjectUngroup = 0xf248,
    FAIconStickyNote = 0xf249,
    FAIconStickyNoteO = 0xf24a,
    FAIconCcJcb = 0xf24b,
    FAIconCcDinersClub = 0xf24c,
    FAIconClone = 0xf24d,
    FAIconBalanceScale = 0xf24e,
    FAIconHourglassO = 0xf250,
    FAIconHourglass1 = 0xf251,
    FAIconHourglassStart = 0xf251,
    FAIconHourglass2 = 0xf252,
    FAIconHourglassHalf = 0xf252,
    FAIconHourglass3 = 0xf253,
    FAIconHourglassEnd = 0xf253,
    FAIconHourglass = 0xf254,
    FAIconHandGrabO = 0xf255,
    FAIconHandRockO = 0xf255,
    FAIconHandStopO = 0xf256,
    FAIconHandPaperO = 0xf256,
    FAIconHandScissorsO = 0xf257,
    FAIconHandLizardO = 0xf258,
    FAIconHandSpockO = 0xf259,
    FAIconHandPointerO = 0xf25a,
    FAIconHandPeaceO = 0xf25b,
    FAIconTrademark = 0xf25c,
    FAIconRegistered = 0xf25d,
    FAIconCreativeCommons = 0xf25e,
    FAIconGg = 0xf260,
    FAIconGgCircle = 0xf261,
    FAIconTripadvisor = 0xf262,
    FAIconOdnoklassniki = 0xf263,
    FAIconOdnoklassnikiSquare = 0xf264,
    FAIconGetPocket = 0xf265,
    FAIconWikipediaW = 0xf266,
    FAIconSafari = 0xf267,
    FAIconChrome = 0xf268,
    FAIconFirefox = 0xf269,
    FAIconOpera = 0xf26a,
    FAIconInternetExplorer = 0xf26b,
    FAIconTv = 0xf26c,
    FAIconTelevision = 0xf26c,
    FAIconContao = 0xf26d,
    FAIcon500px = 0xf26e,
    FAIconAmazon = 0xf270,
    FAIconCalendarPlusO = 0xf271,
    FAIconCalendarMinusO = 0xf272,
    FAIconCalendarTimesO = 0xf273,
    FAIconCalendarCheckO = 0xf274,
    FAIconIndustry = 0xf275,
    FAIconMapPin = 0xf276,
    FAIconMapSigns = 0xf277,
    FAIconMapO = 0xf278,
    FAIconMap = 0xf279,
    FAIconCommenting = 0xf27a,
    FAIconCommentingO = 0xf27b,
    FAIconHouzz = 0xf27c,
    FAIconVimeo = 0xf27d,
    FAIconBlackTie = 0xf27e,
    FAIconFonticons = 0xf280,
    FAIconRedditAlien = 0xf281,
    FAIconEdge = 0xf282,
    FAIconCreditCardAlt = 0xf283,
    FAIconCodiepie = 0xf284,
    FAIconModx = 0xf285,
    FAIconFortAwesome = 0xf286,
    FAIconUsb = 0xf287,
    FAIconProductHunt = 0xf288,
    FAIconMixcloud = 0xf289,
    FAIconScribd = 0xf28a,
    FAIconPauseCircle = 0xf28b,
    FAIconPauseCircleO = 0xf28c,
    FAIconStopCircle = 0xf28d,
    FAIconStopCircleO = 0xf28e,
    FAIconShoppingBag = 0xf290,
    FAIconShoppingBasket = 0xf291,
    FAIconHashtag = 0xf292,
    FAIconBluetooth = 0xf293,
    FAIconBluetoothB = 0xf294,
    FAIconPercent = 0xf295,
    FAIconGitlab = 0xf296,
    FAIconWpbeginner = 0xf297,
    FAIconWpforms = 0xf298,
    FAIconEnvira = 0xf299,
    FAIconUniversalAccess = 0xf29a,
    FAIconWheelchairAlt = 0xf29b,
    FAIconQuestionCircleO = 0xf29c,
    FAIconBlind = 0xf29d,
    FAIconAudioDescription = 0xf29e,
    FAIconVolumeControlPhone = 0xf2a0,
    FAIconBraille = 0xf2a1,
    FAIconAssistiveListeningSystems = 0xf2a2,
    FAIconAslInterpreting = 0xf2a3,
    FAIconAmericanSignLanguageInterpreting = 0xf2a3,
    FAIconDeafness = 0xf2a4,
    FAIconHardOfHearing = 0xf2a4,
    FAIconDeaf = 0xf2a4,
    FAIconGlide = 0xf2a5,
    FAIconGlideG = 0xf2a6,
    FAIconSigning = 0xf2a7,
    FAIconSignLanguage = 0xf2a7,
    FAIconLowVision = 0xf2a8,
    FAIconViadeo = 0xf2a9,
    FAIconViadeoSquare = 0xf2aa,
    FAIconSnapchat = 0xf2ab,
    FAIconSnapchatGhost = 0xf2ac,
    FAIconSnapchatSquare = 0xf2ad,
    FAIconPiedPiper = 0xf2ae,
    FAIconFirstOrder = 0xf2b0,
    FAIconYoast = 0xf2b1,
    FAIconThemeisle = 0xf2b2,
    FAIconGooglePlusCircle = 0xf2b3,
    FAIconGooglePlusOfficial = 0xf2b3,
    FAIconFa = 0xf2b4,
    FAIconFontAwesome = 0xf2b4
};

@interface NSString (FontAwesome)

+ (NSString *)fa_stringForFontAwesomeIcon:(FAIcon)icon;

@end

NS_ASSUME_NONNULL_END