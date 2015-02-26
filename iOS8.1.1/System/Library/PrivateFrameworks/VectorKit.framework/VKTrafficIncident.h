/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/NSCopying.h>

@class NSString, NSDate;

@interface VKTrafficIncident : NSObject <NSCopying> {

	VKPoint _worldPoint;
	NSString* _title;
	NSString* _subtitle;
	long long _type;
	long long _routeRelevance;
	long long _significance;
	BOOL _isNotForDisplay;
	BOOL _isOnSelectedRoute;
	PolylineCoordinate _routeOffset;
	unsigned _routeOffsetInMeters;
	CGSize _location;
	NSString* _street;
	NSString* _crossStreet;
	NSString* _info;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _lastUpdatedDate;
	float _minZoom;
	float _maxZoom;
	unsigned long long _uniqueID;
	NSString* _uniqueString;

}

@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueID;               //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSString * uniqueString;                   //@synthesize uniqueString=_uniqueString - In the implementation block
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isNotForDisplay;                      //@synthesize isNotForDisplay=_isNotForDisplay - In the implementation block
@property (assign,nonatomic) long long routeRelevance;                    //@synthesize routeRelevance=_routeRelevance - In the implementation block
@property (assign,nonatomic) BOOL isOnSelectedRoute;                      //@synthesize isOnSelectedRoute=_isOnSelectedRoute - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeOffset;              //@synthesize routeOffset=_routeOffset - In the implementation block
@property (assign,nonatomic) unsigned routeOffsetInMeters;                //@synthesize routeOffsetInMeters=_routeOffsetInMeters - In the implementation block
@property (nonatomic,readonly) NSString * street;                         //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) NSString * crossStreet;                    //@synthesize crossStreet=_crossStreet - In the implementation block
@property (nonatomic,readonly) NSString * info;                           //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdatedDate;                  //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,readonly) VKPoint worldPoint;                        //@synthesize worldPoint=_worldPoint - In the implementation block
@property (nonatomic,readonly) float minZoom;                             //@synthesize minZoom=_minZoom - In the implementation block
@property (nonatomic,readonly) float maxZoom;                             //@synthesize maxZoom=_maxZoom - In the implementation block
@property (nonatomic,readonly) long long significance;                    //@synthesize significance=_significance - In the implementation block
-(void)dealloc;
-(long long)type;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtitle;
-(NSString *)info;
-(NSString *)uniqueString;
-(BOOL)isOnSelectedRoute;
-(long long)routeRelevance;
-(BOOL)isNotForDisplay;
-(BOOL)hasSameIdentifier:(id)arg1 ;
-(PolylineCoordinate)routeOffset;
-(void)setRouteRelevance:(long long)arg1 ;
-(VKPoint)worldPoint;
-(id)initWithIncidentData:(const Incident*)arg1 worldPoint:(VKPoint*)arg2 ;
-(long long)significance;
-(NSString *)street;
-(NSString *)crossStreet;
-(id)initWithIncident:(id)arg1 vertices:(SCD_Struct_VK388*)arg2 tileRect:(SCD_Struct_VK11)arg3 tileSize:(double)arg4 ;
-(id)initWithRouteIncident:(id)arg1 routeRelevance:(long long)arg2 ;
-(unsigned long long)uniqueID;
-(void)setIsOnSelectedRoute:(BOOL)arg1 ;
-(void)setRouteOffset:(PolylineCoordinate)arg1 ;
-(unsigned)routeOffsetInMeters;
-(void)setRouteOffsetInMeters:(unsigned)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSDate *)lastUpdatedDate;
-(float)minZoom;
-(float)maxZoom;
@end
