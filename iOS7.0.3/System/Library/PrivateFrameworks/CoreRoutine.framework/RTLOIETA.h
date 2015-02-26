/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class RTLocationOfInterest, GEOLocation, GEOPlaceResult, RTLOIDisplayInfo;

@interface RTLOIETA : NSObject {

	RTLocationOfInterest* _loi;
	GEOLocation* _destinationLocation;
	GEOPlaceResult* _origin;
	unsigned _liveETASeconds;
	unsigned _historicalETASeconds;
	RTLOIDisplayInfo* _displayInfo;

}

@property (nonatomic,readonly) RTLocationOfInterest * loi;              //@synthesize loi=_loi - In the implementation block
-(id)description;
-(id)localizedDescription;
-(id)_preferredName;
-(id)_displayInfoForDate:(id)arg1 ;
-(id)displayInfo;
-(id)initWithLOI:(id)arg1 destinationLocation:(id)arg2 origin:(id)arg3 liveETASeconds:(unsigned)arg4 historicalETASeconds:(unsigned)arg5 ;
-(id)_urlName;
-(BOOL)etaExceedsMinimumETA:(unsigned)arg1 ;
-(BOOL)hasEquivalentDisplayTo:(id)arg1 ;
-(id)loi;
-(id)mapsURL;
-(void).cxx_destruct;
@end
