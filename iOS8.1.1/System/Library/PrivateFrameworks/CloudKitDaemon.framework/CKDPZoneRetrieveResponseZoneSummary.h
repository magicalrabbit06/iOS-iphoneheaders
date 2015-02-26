/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData, CKDPZone;

@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying> {

	long long _assetQuotaUsage;
	long long _metadataQuotaUsage;
	NSData* _clientChangeToken;
	NSData* _currentServerContinuationToken;
	int _deviceCount;
	CKDPZone* _targetZone;
	SCD_Struct_CK8 _has;

}

@property (nonatomic,readonly) BOOL hasTargetZone; 
@property (nonatomic,retain) CKDPZone * targetZone;                                 //@synthesize targetZone=_targetZone - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentServerContinuationToken; 
@property (nonatomic,retain) NSData * currentServerContinuationToken;               //@synthesize currentServerContinuationToken=_currentServerContinuationToken - In the implementation block
@property (nonatomic,readonly) BOOL hasClientChangeToken; 
@property (nonatomic,retain) NSData * clientChangeToken;                            //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceCount; 
@property (assign,nonatomic) int deviceCount;                                       //@synthesize deviceCount=_deviceCount - In the implementation block
@property (assign,nonatomic) BOOL hasAssetQuotaUsage; 
@property (assign,nonatomic) long long assetQuotaUsage;                             //@synthesize assetQuotaUsage=_assetQuotaUsage - In the implementation block
@property (assign,nonatomic) BOOL hasMetadataQuotaUsage; 
@property (assign,nonatomic) long long metadataQuotaUsage;                          //@synthesize metadataQuotaUsage=_metadataQuotaUsage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTargetZone:(CKDPZone *)arg1 ;
-(void)setCurrentServerContinuationToken:(NSData *)arg1 ;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(BOOL)hasTargetZone;
-(BOOL)hasCurrentServerContinuationToken;
-(BOOL)hasClientChangeToken;
-(void)setDeviceCount:(int)arg1 ;
-(void)setHasDeviceCount:(BOOL)arg1 ;
-(BOOL)hasDeviceCount;
-(void)setAssetQuotaUsage:(long long)arg1 ;
-(void)setHasAssetQuotaUsage:(BOOL)arg1 ;
-(BOOL)hasAssetQuotaUsage;
-(void)setMetadataQuotaUsage:(long long)arg1 ;
-(void)setHasMetadataQuotaUsage:(BOOL)arg1 ;
-(BOOL)hasMetadataQuotaUsage;
-(CKDPZone *)targetZone;
-(NSData *)currentServerContinuationToken;
-(NSData *)clientChangeToken;
-(int)deviceCount;
-(long long)assetQuotaUsage;
-(long long)metadataQuotaUsage;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
