#include <stdint.h>

static uint32_t glb_encry_table[1280] = {
    0X55C636E2,
    0X02BE0170,
    0X584B71D4,
    0X2984F00E,
    0XB682C809,
    0X91CF876B,
    0X775A9C24,
    0X597D5CA5,
    0X5A1AFEB2,
    0XD3E9CE0D,
    0X32CDCDF8,
    0XB18201CD,
    0X3CCE05CE,
    0XA55D13BE,
    0XBB0AFE71,
    0X9376AB33,
    0X848F645E,
    0X87E45A45,
    0X45B86017,
    0X5E656CA8,
    0X1B851A95,
    0X2542DBD7,
    0XAB4DF9E4,
    0X5976AE9B,
    0X6C317E7D,
    0XCDDD2F94,
    0X3C3C13E5,
    0X335B1371,
    0X31A592CA,
    0X51E4FC4C,
    0XF7DB5B2F,
    0X8ABDBE41,
    0X8BEAA674,
    0X20D6B319,
    0XDE6C9A9D,
    0XC5AC84E5,
    0X445A5FEB,
    0X94958CB0,
    0X1E7D3847,
    0XF35D29B0,
    0XCA5CCEDA,
    0XB732C8B5,
    0XFDCC41DD,
    0X0EDCEC16,
    0X9D01FEAE,
    0X1165D38E,
    0X9EE193C8,
    0XBF33B13C,
    0X61BC0DFC,
    0XEF3E7BE9,
    0XF8D4D4C5,
    0XC79B7694,
    0X5A255943,
    0X0B3DD20A,
    0X9D1AB5A3,
    0XCFA8BA57,
    0X5E6D7069,
    0XCB89B731,
    0X3DC0D15B,
    0X0D4D7E7E,
    0X97E37F2B,
    0XFEFC2BB1,
    0XF95B16B5,
    0X27A55B93,
    0X45F22729,
    0X4C986630,
    0X7C666862,
    0X5FA40847,
    0XA3F16205,
    0X791B7764,
    0X386B36D6,
    0X6E6C3FEF,
    0XC75855DB,
    0X4ABC7DC7,
    0X4A328F9B,
    0XCEF20C0F,
    0X60B88F07,
    0XF7BB4B8F,
    0X830B5192,
    0X94F711EC,
    0X20250752,
    0X399D21A3,
    0XE5C0840D,
    0XE76CFFA5,
    0X624FAB29,
    0X5DF133E6,
    0X83E0B9B8,
    0XC5796BFB,
    0X4A7AB2D0,
    0XBA59A821,
    0X03A81E4C,
    0XCD3ADFDB,
    0X32B26B8C,
    0X8E35C533,
    0X9E6300E9,
    0X8CF92AC5,
    0X880D18EB,
    0X131A53B3,
    0X2ED2DC64,
    0XB23257C1,
    0XA06450C1,
    0X1B92CB8E,
    0X72ED730E,
    0X19A685F0,
    0X82836483,
    0X42D94E8A,
    0XEE9BD6F6,
    0X556D0B6A,
    0XBA65589A,
    0XDE24CCE4,
    0X53329F6C,
    0XC754FE8B,
    0X503D2DC7,
    0X10027BA4,
    0XD3B60A8B,
    0X68E68D83,
    0X0A9128A9,
    0X595FA35F,
    0X0B03B5BE,
    0X150A45C4,
    0XB1629CCE,
    0XE5F7497B,
    0X8A7098A4,
    0XB8233E69,
    0X8EA0F978,
    0X5B579970,
    0XEAB14318,
    0X4B28B263,
    0XB6766CEF,
    0X06782877,
    0X155C6DD0,
    0XC711333C,
    0XF819CEDF,
    0X00EB1D68,
    0XD6FFFA6E,
    0X439E5962,
    0XD765D6DB,
    0XCB0BCEE9,
    0X6D3C5647,
    0X965466F3,
    0X0CA983C9,
    0X74ECC1CE,
    0XFC0563B6,
    0X42B08FEE,
    0XC5B38853,
    0XFE502CEB,
    0X7B432FAF,
    0XC309E610,
    0X2C3997D8,
    0X43774654,
    0X15BD9D2C,
    0XED6A420D,
    0XC7FF520C,
    0XB8A97FD1,
    0X5E4D60CC,
    0XB9738D11,
    0XDA2181FF,
    0X73AC2597,
    0X3A8EEC8D,
    0XAC85E779,
    0XF3F975D6,
    0XB9FE7B91,
    0X0F155D1E,
    0X2860B6DD,
    0X835977CB,
    0XB0607436,
    0X9CAB7F6B,
    0X8AB91186,
    0XC12B51E9,
    0X20084E8B,
    0X44BA8EAD,
    0XA542B130,
    0X82BCD5C4,
    0XCC747F4E,
    0X0F1909D8,
    0XDA242E1C,
    0X6F7D1AA0,
    0XD2626486,
    0X88D0781E,
    0XAB695CCD,
    0XFA569145,
    0XB4FEB55C,
    0XBE47E896,
    0XE70A7A88,
    0XD56185A2,
    0XACF4C871,
    0X09282332,
    0X1DDEEAA8,
    0X590C7ADB,
    0XF4A97667,
    0XBFD85705,
    0X0EA77CCC,
    0XA9F85364,
    0X83195869,
    0X8BFB041A,
    0XDB842F5C,
    0XD6F0F315,
    0XA7756EA7,
    0X0A51B439,
    0XA9EDF8A3,
    0XD9084E2F,
    0X827407F8,
    0XD4AC8284,
    0X09739D0D,
    0XB3BB6CFC,
    0XD539C77D,
    0X6BBC9AC0,
    0X35C641AA,
    0X934C96B0,
    0XD17AF317,
    0X29C6BAEF,
    0XB275CDAC,
    0XD72662DE,
    0X9F5C2544,
    0XC1A98F75,
    0XD98E8F9A,
    0X47BD5C86,
    0X70C610A6,
    0XB5482ED4,
    0X23B9C68C,
    0X3C1BAE66,
    0X69556E7F,
    0XD902F5E0,
    0X653D195B,
    0XDE6541FB,
    0X07BCC6AC,
    0XC6EE7788,
    0X801534D4,
    0X2C1F35C0,
    0XD9DE614D,
    0XBDCCAC85,
    0XB4D4A0DA,
    0X242D549B,
    0X9D964796,
    0XB9CEB982,
    0X59FA99A9,
    0XD8986CC1,
    0X9E90C1A1,
    0X01BBD82F,
    0XD7F1C5FD,
    0XDD847EBA,
    0X883D305D,
    0X25F13152,
    0X4A92694D,
    0X77F1E601,
    0X8024E6E7,
    0X02A5F53D,
    0X9C3EF4D9,
    0XAF403CCC,
    0XE2AD03C0,
    0X46EDF6EC,
    0X6F9BD3E6,
    0XCC24AD7A,
    0X47AFAB12,
    0X82298DF7,
    0X708C9EEC,
    0X76F8C1B1,
    0XB39459D2,
    0X3F1E26D9,
    0XE1811BE7,
    0X56ED1C4D,
    0XC9D18AF8,
    0XE828060E,
    0X91CADA2E,
    0X5CCBF9B7,
    0XF1A552D4,
    0X3C9D4343,
    0XE1008785,
    0X2ADFEEBF,
    0XF90240A0,
    0X3D08CCE7,
    0X426E6FB0,
    0X573C984F,
    0X13A843AE,
    0X406B7439,
    0X636085D9,
    0X5000BA9A,
    0XAD4A47AB,
    0XAF001D8D,
    0X419907AE,
    0X185C8F96,
    0XE5E9ED4D,
    0X61764133,
    0XD3703D97,
    0XAC98F0C6,
    0XDBC3A37C,
    0X85F010C4,
    0X90491E32,
    0XF12E18BF,
    0XC88C96E1,
    0XD3FBD6D9,
    0XE3C28B08,
    0XD5BF08CC,
    0XB1E78859,
    0X2546DDCF,
    0XB030B200,
    0XAAFD2811,
    0X55B22D21,
    0XD38BF567,
    0X469C7A2B,
    0X5AD05792,
    0XA1A5981E,
    0X7DFB8384,
    0X34D1CA0A,
    0X7EB0DBE0,
    0XD61CE0F6,
    0X398068B7,
    0XE6406D1F,
    0X95AE6B47,
    0XE4281230,
    0XB0843061,
    0XA70A3A68,
    0XE340F625,
    0X72DCBFFD,
    0X8EB8AFCD,
    0X18B6661F,
    0X17EF5A5C,
    0X000C5B22,
    0X6BA13836,
    0X6165E383,
    0X74481C5B,
    0XE56F0711,
    0XA26F5024,
    0X5FF22E60,
    0X31A5E829,
    0XA1094BF0,
    0XC680EC6C,
    0X8CF327D7,
    0XEBF1348A,
    0X6A227D2F,
    0X74065184,
    0X8DF65112,
    0X2BBD05EE,
    0XE4D00ED6,
    0X2980EE1A,
    0X6AE1DA73,
    0XE84614DA,
    0X6C9906AB,
    0XCF8E02DB,
    0XD3723E97,
    0X92F66CAF,
    0XAC8491C7,
    0XAEC65696,
    0XB98997CF,
    0XFA16C762,
    0X6D73C65F,
    0X205D22A6,
    0X4DD3AAA5,
    0X2DEB6BC0,
    0X9F37686C,
    0X71A5282B,
    0X376BB9E0,
    0X7FFF2A1B,
    0XDE67982F,
    0X9CBF33CE,
    0X2E6DAB37,
    0X6E3424B9,
    0X0EE143BC,
    0X832A60D9,
    0XBB6329E1,
    0X13F6BEFD,
    0X5965FB84,
    0XF60B233C,
    0X3D695183,
    0X433224A1,
    0XB5D9CAE5,
    0X82459BAB,
    0X9F21B311,
    0XAF6C5247,
    0XB447B13A,
    0X7B2676C3,
    0XC38979CD,
    0X8526AE25,
    0XC550AD5B,
    0X685099A7,
    0X65E9C2BD,
    0XE5C6DC36,
    0XE10B37A9,
    0X88016878,
    0XCE81D4E4,
    0X24D6FC80,
    0X4106152D,
    0X6D4F5F90,
    0XC4DC74BE,
    0XDB48676C,
    0X6CB569B7,
    0XF3BF598F,
    0X042B08D9,
    0X02CCB2DE,
    0XB1056F65,
    0X47994AF4,
    0XFA141BA4,
    0X9376AB2E,
    0X07A76737,
    0X75E7E6FC,
    0X449D80A1,
    0X03B7259D,
    0XF6DF358A,
    0X5A75D5B9,
    0X47286923,
    0X3B1A30EF,
    0XEEBE3D6A,
    0X9DB1AA00,
    0X007A90D9,
    0X24667071,
    0X019C73CF,
    0X69039BCD,
    0X95900744,
    0X6518B1EB,
    0X6905F202,
    0XEE3951B2,
    0XE141FCA9,
    0X797FA832,
    0X5A95E55B,
    0XD6263B15,
    0X5B61F394,
    0X897ACB1C,
    0X005F83A9,
    0X22420F71,
    0XF495176E,
    0X7E138F3D,
    0X1392E384,
    0X373BF7AA,
    0X8E512816,
    0XA960B3CA,
    0X0474D74C,
    0XFFACD6D7,
    0X2EF5ED9E,
    0X60992AAA,
    0X7E690E99,
    0X23C0749D,
    0XD8E29105,
    0X555D5909,
    0X15631BFE,
    0XA69C5A1C,
    0X501017CA,
    0X99438048,
    0X38733AC7,
    0XE682E2C8,
    0XD4655FD6,
    0X956E4C04,
    0X347DF643,
    0X2F4B177B,
    0X93ED3AA4,
    0XA77E1DD5,
    0X7AE55702,
    0XD2A52FD9,
    0XEF8BA18C,
    0XB7D3C1EE,
    0X8078BA8D,
    0XAB5AAADB,
    0X752BE08F,
    0X068B31C1,
    0X078AAE3C,
    0XAA5A8343,
    0X123D9268,
    0X2CEAEE43,
    0X8EBDB239,
    0X650251F3,
    0X04883648,
    0X8C62E12E,
    0X12B32167,
    0XE5112E9A,
    0X10002548,
    0X3E7A818D,
    0X077E5327,
    0XF140CC21,
    0X6CE7D75D,
    0X9B99F9A5,
    0X3215741C,
    0XB6AADBAE,
    0X738768DC,
    0X82A3742F,
    0X76517020,
    0XDD872AD8,
    0X9D0902B2,
    0X7D1A6B04,
    0X49381592,
    0X63A652A5,
    0X0C15E626,
    0XE22F70D6,
    0X01E84385,
    0XB29DE134,
    0X20C5000E,
    0XE961F443,
    0X2D31662E,
    0X3CE6BC28,
    0X34F9DD94,
    0XFA45DE53,
    0X497588BD,
    0X9468215B,
    0X0777FA5C,
    0X6F7114C0,
    0XE0E82694,
    0XE4371986,
    0X57112DE2,
    0XE0CAC289,
    0XF2A3CEE0,
    0X6A41E1B9,
    0XBFCEA77D,
    0XF927FD52,
    0X69747D98,
    0XBEA76CDB,
    0X8DD39557,
    0X04DB5ECE,
    0X2A0885C8,
    0X3BE4E8EE,
    0X21D785DC,
    0X09DE7C0E,
    0X3258EA33,
    0X51922982,
    0XEE8DD024,
    0X3DF6965D,
    0X30C1237B,
    0XF7F6686A,
    0X9FACA186,
    0X7C400076,
    0X85ACEF8A,
    0XF4B6D220,
    0XDDC3481C,
    0X439EAEC4,
    0X717BBE63,
    0X8259FAA7,
    0XD682BD68,
    0X932A8610,
    0X38BF0A7F,
    0X6212E2C7,
    0X88EE3168,
    0XB3C27047,
    0X6133CB1E,
    0X15295506,
    0X5AE66246,
    0X1D208DDD,
    0XA91D3DBA,
    0XC315968D,
    0X6AA2664B,
    0X716D0CCA,
    0X891F4956,
    0X80866BFF,
    0XBD56C847,
    0X9093425A,
    0X28DD9E87,
    0X84EF3E08,
    0X690A49D6,
    0X6A7EFF82,
    0XABCFE400,
    0X3D3BE5CA,
    0X381B650C,
    0X4B7C8622,
    0X3E0246F3,
    0XA3561654,
    0X9488865C,
    0X3AEF1BF2,
    0X5E5D68A2,
    0XD32F1DDC,
    0X51972BF0,
    0X177A213B,
    0X469375C2,
    0X37640BD0,
    0XFC3324C8,
    0X07091A09,
    0X2D63D3FB,
    0X2153F023,
    0X48223875,
    0X61A55826,
    0X8C136538,
    0X49F71D98,
    0X84C7D51E,
    0X85551A73,
    0X13D604C5,
    0XD701A626,
    0X87B844CA,
    0X741EB29D,
    0X2A2C977C,
    0XC797CA03,
    0X6C4085D7,
    0X2DACF79B,
    0X734FA2EB,
    0XCC290557,
    0XFA1E75E4,
    0X06B29A27,
    0XBECE2A7A,
    0X70A4554B,
    0XC935942E,
    0XA764BBC1,
    0X1FE391D6,
    0X7807F0C2,
    0X40606ED9,
    0XE5153086,
    0XE91D7DD2,
    0XED5D3BA9,
    0XAA14B64A,
    0X83B24DD9,
    0XEC1FF5CD,
    0XBA33EAD3,
    0XE4EF735C,
    0XBC062438,
    0XD8BFD523,
    0X473D1E04,
    0X2007F8A7,
    0XB02903ED,
    0X86EA8ADA,
    0X95AB69CF,
    0XFD1F9809,
    0X9CB3D8BB,
    0X51F45958,
    0X9CDD4276,
    0XC245865E,
    0X8F0C836B,
    0X4EE7DC07,
    0XF6368D9D,
    0XEF2C1DC1,
    0XEE56B54B,
    0XBD62CE2F,
    0XF4916AAD,
    0XC81CB594,
    0X41729F49,
    0X24BEF0A4,
    0XDEF487A9,
    0X222E05B8,
    0X8D3BF5C6,
    0X11B55009,
    0XAD09D2B3,
    0X19DB9FD1,
    0XD7427085,
    0X33DBFC8B,
    0X526B9378,
    0X790E1BC8,
    0XB2998A00,
    0XA5641703,
    0X0676D249,
    0X6B9185CC,
    0X30E4348F,
    0X82C52F65,
    0X57C7DC24,
    0X489C1ECD,
    0X9FCAB02A,
    0X56D61117,
    0XFE869CAC,
    0X55FC5140,
    0X7FBBB382,
    0X9E5AFC79,
    0X10047C99,
    0XFC9F5984,
    0X56587E2D,
    0XB98193F0,
    0X98FE5E8E,
    0X29B15B6B,
    0X9561F055,
    0XBB0CAA25,
    0X1E4ECC15,
    0X23F5393B,
    0X0845B458,
    0XCEFF67CA,
    0XB099900C,
    0X00B1564F,
    0X39EEF3D1,
    0XFCC1BF84,
    0XAC8893B5,
    0X6484BF0E,
    0X91C02AB3,
    0X8C0C0C70,
    0X686FA8C6,
    0XE171BED6,
    0XDFAE37DF,
    0XD5A1A4E7,
    0XE3EB49A1,
    0X5E6014E0,
    0X205B21AC,
    0XFD58B3DA,
    0X2E7C07CD,
    0XEF2CC85A,
    0XD7587B46,
    0XF417847D,
    0X8A30CEC1,
    0X70984F6C,
    0XF0B63388,
    0XC220C98D,
    0XEDE62936,
    0X92C0A7B3,
    0X1EF371E8,
    0X2005F7AF,
    0X91A47265,
    0XB0CF5504,
    0XD500ABA8,
    0XCB5C4BD3,
    0X9B3BCBC3,
    0XCF6644B5,
    0XCE9488EF,
    0X003FC96E,
    0XAA42222F,
    0X4844F3D0,
    0X4DB89D77,
    0X08681AAE,
    0X662F3A28,
    0X761552DB,
    0X1DF7A17A,
    0X93FEED9A,
    0XCC496A4F,
    0XA217CFCD,
    0X3BA3C930,
    0X268F7E77,
    0X0797B4A1,
    0X8BEBFC51,
    0X068930C4,
    0X16C874E2,
    0XC242DA24,
    0XFB229F76,
    0XA0795B02,
    0X689FC036,
    0X17A73732,
    0XD21AEC00,
    0XAC00A692,
    0X5B217F18,
    0XAE421624,
    0X2BC05CC0,
    0X48C1DB7A,
    0X4F4E63B4,
    0X1667F04E,
    0X34020F94,
    0X972B2555,
    0X9A07355B,
    0X01665970,
    0X7DB60C6F,
    0X3AD7103B,
    0X5C3D09C0,
    0XEEA3DADA,
    0X88C21C10,
    0X102436D7,
    0X6A3B3400,
    0XEB523C4C,
    0XFB97D896,
    0X964CB86B,
    0XDD878038,
    0X0529DA4D,
    0X0B1468A5,
    0X18739AC8,
    0XF7F26668,
    0XF64F4471,
    0X5C14F5C3,
    0X44A081FB,
    0X39AC7E37,
    0X8A17C26B,
    0X868F5E67,
    0X3931978D,
    0X6EDF7817,
    0X4951CC67,
    0X943407F3,
    0XCC5E748F,
    0X2B7EE729,
    0XCBB320F0,
    0X11FEC8E7,
    0XFCCFC658,
    0X03454354,
    0X373AA1EC,
    0X1D58FE9A,
    0X064710AE,
    0XA88AA0BA,
    0XD183A23E,
    0X40D150A3,
    0XF531B8D1,
    0XA7D99F85,
    0X11838CD5,
    0XB19E64B3,
    0X3D67A5E9,
    0XB02C5AC6,
    0X99B9B9E8,
    0X4C202B7A,
    0X15F261D3,
    0XA84C2D0D,
    0X50F185A6,
    0X33BA41D5,
    0X39791013,
    0X4BAFF44E,
    0XEEEEAA1C,
    0XE0488314,
    0X559CCD2B,
    0XA104F445,
    0X636F37C4,
    0X264D5E3B,
    0X75C17F35,
    0X75424131,
    0XBB115739,
    0X74FE755A,
    0X7D3A7AA6,
    0X2D8BE784,
    0X83ED154A,
    0XFC2673D8,
    0X44DD4A7F,
    0X79056CC8,
    0X82CC8831,
    0X9D3C1B7C,
    0XE9453BFA,
    0X24315694,
    0X661F3253,
    0X75549F5C,
    0XBB2B63ED,
    0X67E00D96,
    0XF48966C7,
    0X0D7BEA56,
    0XC25F92EF,
    0XA947A79D,
    0XDE4ADF6F,
    0XAC0F0342,
    0XD3EB246B,
    0XA4AA118E,
    0X3C3E6A46,
    0X457F4441,
    0XA50A406F,
    0X6C508D9F,
    0XE9AC18E7,
    0X1ECDB4BA,
    0X39AC7E3A,
    0X7FB304FA,
    0X6F38F8E8,
    0X4AECEA6D,
    0X61035E73,
    0X81708907,
    0XEBC07205,
    0X90FD7614,
    0XB52D217F,
    0X6C4DE195,
    0X1DD49084,
    0X64EE482C,
    0X94C7A521,
    0X540C09D8,
    0X75DF8DD5,
    0X414131F7,
    0X3698FD76,
    0XF784DB4F,
    0XF8C97A03,
    0X048F39B9,
    0X3BF4F0BD,
    0X8CB50992,
    0X9B58D9EE,
    0XE5AB79CC,
    0X9A5F6052,
    0XBD9591B0,
    0XFAD2232B,
    0X5A632254,
    0X0286E618,
    0X8AD3C8F7,
    0XE4060176,
    0X754C4617,
    0X5C10490B,
    0X6F7D6FFF,
    0X2187B42A,
    0X5775095B,
    0X02F4C663,
    0X5A5DCA06,
    0XFE4AD4C7,
    0X53E19F7D,
    0X59FF46B5,
    0XBCC42BA5,
    0XFD2F4A97,
    0XBED6D905,
    0X95629B6B,
    0X21A1C0DB,
    0XAA10B45D,
    0XE6EF6D58,
    0X2892CF4D,
    0X9FED6C10,
    0X1E386BF7,
    0X9BE0C6E8,
    0X2B2F15EF,
    0X19F5AC7B,
    0X7AFF0E72,
    0X31DA576F,
    0X30252CB4,
    0X577960AC,
    0X166E9E5A,
    0XA9374A61,
    0X71369C96,
    0X7FF826AE,
    0XE8175326,
    0XCABBFD33,
    0X0191190E,
    0X699D3C3E,
    0X36B40B22,
    0XB3950513,
    0X9B889BFA,
    0XA52A5007,
    0XAC290FED,
    0X3B4E4A4F,
    0XB753D8D6,
    0X3C531F22,
    0X582F6427,
    0XA9CD93A9,
    0X546E39AE,
    0X242FAAD2,
    0XD2E0F747,
    0X09F6325D,
    0X59D48719,
    0XAD7EB66E,
    0XD5512878,
    0X56DEBF9D,
    0X5107E5A5,
    0XF1C00AA4,
    0X814CCCA8,
    0X600D90F0,
    0X9BE97619,
    0X915FA5F2,
    0X2B5628DD,
    0XA33D5F5A,
    0X595DF7C1,
    0X6966215D,
    0X50EC8337,
    0XF1D21372,
    0X0EE2EEFB,
    0XAD9E70B7,
    0XAB0D2FE4,
    0XCF277B5D,
    0X62585A2C,
    0X835A7844,
    0X74B1FA6B,
    0X49BAFFD5,
    0X2EA9C864,
    0X129311A8,
    0XBDFA1867,
    0X83CA5997,
    0X9D1DB719,
    0X84BB79E6,
    0X9E3F99F2,
    0X313F6101,
    0X1B99245B,
    0XD15D8FB2,
    0XCEF90F81,
    0X2945268D,
    0XDBBCF573,
    0XB1021886,
    0X9EE7EC1D,
    0X1CF824F7,
    0X7EAA2E32,
    0X69C0A2B5,
    0X7494419C,
    0XE253D7D3,
    0X48DA3D12,
    0X45B8B571,
    0XDB4D147A,
    0XD82D8DDE,
    0X265D10A2,
    0XB0A6EB9A,
    0X7E1C93A6,
    0X36FE2F46,
    0XDCAD6B00,
    0X05439191,
    0XB0CE5484,
    0X61D1C309,
    0X8DA62A03,
    0X06D0FE2F,
    0XBAC6DD3C,
    0XCA2006F3,
    0X8321B1AF,
    0X0411A6F3,
    0XE8918EAC,
    0X21A2C152,
    0X91C0D54F,
    0X6AAA14FA,
    0XDD22A440,
    0X88CB2075,
    0X7A4EB813,
    0X67AFA071,
    0XD8D98C9C,
    0X31F10D47,
    0X6FF1A8A8,
    0X2FAAF0A1,
    0X48A221BB,
    0X3BE6948B,
    0XAA79E79B,
    0X0EA7278C,
    0X7A3857EF,
    0X49B7FE55,
    0XD51CB931,
    0X041C018D,
    0X00B90501,
    0X45EA7881,
    0X8FC1DBCF,
    0XB80B32A9,
    0XABACD2E9,
    0X677BDC40,
    0XECACE542,
    0X6D6514EB,
    0X31C09FF7,
    0X5E6C1ABD,
    0X1C391D0F,
    0X0E9D77F1,
    0X7119392D,
    0X6BE9B0BA,
    0X6194FA77,
    0X45E62148,
    0X42234AF2,
    0XC3239D66,
    0X939CBDBC,
    0X56200D9C,
    0X6B275208,
    0X001A61F3,
    0XCCC2A546,
    0X4B722BE0,
    0XEE25F2B7,
    0X6D86CF9E,
    0XAA6BE0CD,
    0X4DCDA7B6,
    0X78D4AA13,
    0X36EA7AD9,
    0X3F29D700,
    0XDEEA2D84,
    0X6A6AF5BD,
    0X18AFB81C,
    0XD8E4E73C,
    0X8AA708BA,
    0X658B94D9,
    0XA676478C,
    0XCFA10C22,
    0X25593C74,
    0X8D962235,
    0X5F980270,
    0X3DF6EBC0,
    0X8E7D92FA,
    0XC3EE55E1,
    0XD5F72447,
    0X02B0FA95,
    0X52B0B520,
    0X70D2C11F,
    0X3A6FDD6C,
    0X193AA698,
    0X5496F7D5,
    0X4208931B,
    0X7A4106EC,
    0X83E86840,
    0XF49B6F8C,
    0XBA3D9A51,
    0X55F54DDD,
    0X2DE51372,
    0X9AFB571B,
    0X3AB35406,
    0XAD64FF1F,
    0XC77764FE,
    0X7F864466,
    0X416D9CD4,
    0XA2489278,
    0XE30B86E4,
    0X0B5231B6,
    0XBA67AED6,
    0XE5AB2467,
    0X60028B90,
    0X1D9E20C6,
    0X2A7C692A,
    0X6B691CDB,
    0X9E51F817,
    0X9B763DEC,
    0X3D29323F,
    0XCFE12B68,
    0X754B459B,
    0XA2238047,
    0XD9C55514,
    0X6BDCFFC1,
    0X693E6340,
    0X82383FE7,
    0X1916EA5F,
    0XEC7BCD59,
    0X72DE165A,
    0XE79A1617,
    0X8EC86234,
    0XA8F0D284,
    0X20C90226,
    0X7BF98884,
    0X28A58331,
    0X3EC3FA6E,
    0X4CE0895B,
    0XC353B4D0,
    0X33EF064F,
    0X21E5E210,
    0XC8BB589D,
    0XE85DCAB2,
    0XAC65829F,
    0XA7BF92D0,
    0X05A6174D,
    0X25A50C2E,
    0XE5C78777,
    0X3D75021F,
    0X4BAA9C98,
    0X23BDC884,
    0X9653BBD7,
    0XBADCE7F5,
    0XC283A484,
    0XC040DF2E,
    0X9370A841,
    0X2F316022,
    0X36EED231,
    0XAC2CBC0C,
    0X13C0A49B,
    0XCDD12997,
    0X07FE91B2,
    0XCD7EABCD,
    0X2C01271D,
    0X18432DF8,
    0X599C6BC7,
    0X75E93D5A,
    0XB67A6EE2,
    0X8E738E16,
    0XFF9073FD,
    0XAF77026A,
    0XF86EA2FC,
    0X91509EA3,
    0X33A78DC6,
    0X4F79234A,
    0X3A7535BC,
    0X3539FCB1,
    0X3103EE52,
    0X4F6F1E69,
    0X6BB3EBBC,
    0X4CB77555,
    0X8DD1E999,
    0X2ADE439D,
    0X11521FAE,
    0XB94D2545,
    0X8DDE9ABD,
    0X1909393F,
    0XB792A23D,
    0X749C455B,
    0XB5B60F2C,
    0X380459CE,
    0X0DAD5820,
    0XB130845B,
    0X291CBD52,
    0XDE9A5BB7,
    0X51DEF961,
    0X515B6408,
    0XCA6E823E,
    0X382E6E74,
    0XEEBE3D71,
    0X4C8F0C6A,
    0XE676DCEA,
    0X14E1DC7C,
    0X6F7FC634,
    0XCF85A943,
    0XD39EA96E,
    0X136E7C93,
    0X7164B304,
    0XF32F1333,
    0X35C34034,
    0XDE39D721,
    0X91A87439,
    0XC410111F,
    0X29F17AAC,
    0X1316A6FF,
    0X12F194EE,
    0X420B9499,
    0XF72DB0DC,
    0X690B9F93,
    0X17D14BB2,
    0X8F931AB8,
    0X217500BC,
    0X875413F8,
    0X98B2E43D,
    0XC51F9571,
    0X54CEBDCA,
    0X0719CC79,
    0XF3C7080D,
    0XE4286771,
    0XA3EAB3CD,
    0X4A6B00E0,
    0X11CF0759,
    0X7E897379,
    0X5B32876C,
    0X5E8CD4F6,
    0X0CEDFA64,
    0X919AC2C7,
    0XB214F3B3,
    0X0E89C38C,
    0XF0C43A39,
    0XEAE10522,
    0X835BCE06,
    0X9EEC43C2,
    0XEA26A9D6,
    0X69531821,
    0X6725B24A,
    0XDA81B0E2,
    0XD5B4AE33,
    0X080F99FB,
    0X15A83DAF,
    0X29DFC720,
    0X91E1900F,
    0X28163D58,
    0X83D107A2,
    0X4EAC149A,
    0X9F71DA18,
    0X61D5C4FA,
    0XE3AB2A5F,
    0XC7B0D63F,
    0XB3CC752A,
    0X61EBCFB6,
    0X26FFB52A,
    0XED789E3F,
    0XAA3BC958,
    0X455A8788,
    0XC9C082A9,
    0X0A1BEF0E,
    0XC29A5A7E,
    0X150D4735,
    0X943809E0,
    0X69215510,
    0XEF0B0DA9,
    0X3B4E9FB3,
    0XD8B5D04C,
    0XC7A023A8,
    0XB0D50288,
    0X64821375,
    0XC260E8CF,
    0X8496BD2C,
    0XFF4F5435,
    0X0FB5560C,
    0X7CD74A52,
    0X93589C80,
    0X88975C47,
    0X83BDA89D,
    0X8BCC4296,
    0X01B82C21,
    0XFD821DBF,
    0X26520B47,
    0X04983E19,
    0XD3E1CA27,
    0X782C580F,
    0X326FF573,
    0XC157BCC7,
    0X4F5E6B84,
    0X44EBFBFB,
    0XDA26D9D8,
    0X6CD9D08E,
    0X1719F1D8,
    0X715C0487,
    0X2C2D3C92,
    0X53FAABA9,
    0XBC836146,
    0X510C92D6,
    0XE089F82A,
    0X4680171F,
    0X369F00DE,
    0X70EC2331,
    0X0E253D55,
    0XDAFB9717,
    0XE5DD922D,
    0X95915D21,
    0XA0202F96,
    0XA161CC47,
    0XEACFA6F1,
    0XED5E9189,
    0XDAB87684,
    0XA4B76D4A,
    0XFA704897,
    0X631F10BA,
    0XD39DA8F9,
    0X5DB4C0E4,
    0X16FDE42A,
    0X2DFF7580,
    0XB56FEC7E,
    0XC3FFB370,
    0X8E6F36BC,
    0X6097D459,
    0X514D5D36,
    0XA5A737E2,
    0X3977B9B3,
    0XFD31A0CA,
    0X903368DB,
    0XE8370D61,
    0X98109520,
    0XADE23CAC,
    0X99F82E04,
    0X41DE7EA3,
    0X84A1C295,
    0X09191BE0,
    0X30930D02,
    0X1C9FA44A,
    0XC406B6D7,
    0XEEDCA152,
    0X6149809C,
    0XB0099EF4,
    0XC5F653A5,
    0X4C10790D,
    0X7303286C,
};


void str2hash1( const char *str, uint32_t *seed )
{
    char b;
    uint32_t    seed1, seed2, offset;

    seed1 = 0X7FED7FED;
    seed2 = 0XEEEEEEEE;
    b     = *str;
    offset= *seed;

    while(b){
        seed1 = glb_encry_table[((offset<<8)+b)%1280]^(seed1+seed2);
        seed2 = seed1+seed2+(seed2<<5)+b+3;
        b = *(str++);
    }
    *seed = seed1;
}

void str2hash2( const char *str, uint32_t *seed )
{
    str2hash1(str, seed);
    str2hash1(str, seed+1);
}

void str2hash3( const char *str, uint32_t *seed )
{
    str2hash1(str, seed);
    str2hash1(str, seed+1);
    str2hash1(str, seed+2);
}









