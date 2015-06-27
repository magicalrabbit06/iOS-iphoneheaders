/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CompanionSync/NSCopying.h>

@class NSString, NSData;

@interface SYErrorInfo : PBCodable <NSCopying> {

	unsigned _code;
	NSString* _domain;
	NSData* _userInfo;

}

@property (nonatomic,retain) NSString * domain;               //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) unsigned code;                   //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) char hasUserInfo; 
@property (nonatomic,retain) NSData * userInfo;               //@synthesize userInfo=_userInfo - In the implementation block
+(void)initialize;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setUserInfo:(NSData *)arg1 ;
-(NSString *)domain;
-(unsigned)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)userInfo;
-(id)dictionaryRepresentation;
-(char)hasUserInfo;
-(id)_usefulDescription;
-(void)setDomain:(NSString *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCode:(unsigned)arg1 ;
@end
