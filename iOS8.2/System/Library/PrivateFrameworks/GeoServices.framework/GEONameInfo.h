/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEONameInfo : PBCodable <NSCopying> {

	NSString* _locale;
	NSString* _name;
	NSString* _phoneticName;
	int _phoneticType;
	NSString* _shield;
	int _shieldType;
	int _signType;
	SCD_Struct_GE63 _has;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;              //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) char hasShield; 
@property (nonatomic,retain) NSString * shield;                    //@synthesize shield=_shield - In the implementation block
@property (assign,nonatomic) char hasShieldType; 
@property (assign,nonatomic) int shieldType;                       //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) char hasPhoneticType; 
@property (assign,nonatomic) int phoneticType;                     //@synthesize phoneticType=_phoneticType - In the implementation block
@property (assign,nonatomic) char hasSignType; 
@property (assign,nonatomic) int signType;                         //@synthesize signType=_signType - In the implementation block
@property (nonatomic,readonly) char hasLocale; 
@property (nonatomic,retain) NSString * locale;                    //@synthesize locale=_locale - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setLocale:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)locale;
-(char)hasLocale;
-(void)setPhoneticName:(NSString *)arg1 ;
-(char)hasPhoneticName;
-(NSString *)phoneticName;
-(void)setShield:(NSString *)arg1 ;
-(NSString *)shield;
-(int)signType;
-(void)setPhoneticType:(int)arg1 ;
-(void)setHasPhoneticType:(char)arg1 ;
-(char)hasPhoneticType;
-(void)setSignType:(int)arg1 ;
-(void)setHasSignType:(char)arg1 ;
-(char)hasSignType;
-(int)phoneticType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
-(int)shieldType;
-(char)hasShield;
-(void)setShieldType:(int)arg1 ;
-(void)setHasShieldType:(char)arg1 ;
-(char)hasShieldType;
@end

