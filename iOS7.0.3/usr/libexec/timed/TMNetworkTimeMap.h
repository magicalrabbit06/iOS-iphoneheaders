/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/timed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface TMNetworkTimeMap : NSObject {

	NSDictionary* networkMap;

}

@property (nonatomic,retain) NSDictionary * networkMap; 
-(id)timeZoneFromOffset:(int)arg1 dst:(BOOL)arg2 mcc:(int)arg3 time:(double)arg4 ;
-(BOOL)timeZone:(id)arg1 matchesMcc:(int)arg2 ;
-(BOOL)timeZone:(id)arg1 matchesOffset:(int)arg2 dst:(BOOL)arg3 mcc:(int)arg4 time:(double)arg5 ;
-(id)initWithUrl:(id)arg1 ;
-(void)setNetworkMap:(id)arg1 ;
-(id)timeZonesWithMcc:(int)arg1 ;
-(BOOL)timeZone:(id)arg1 matchesOffset:(int)arg2 dst:(BOOL)arg3 date:(id)arg4 ;
-(id)networkMap;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
@end
