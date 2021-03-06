/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class MKMapItem;

@interface MKETAResponse : NSObject {

	MKMapItem* _source;
	MKMapItem* _destination;
	double _expectedTravelTime;

}

@property (nonatomic,readonly) MKMapItem * source;                     //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) MKMapItem * destination;                //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) double expectedTravelTime;              //@synthesize expectedTravelTime=_expectedTravelTime - In the implementation block
-(double)expectedTravelTime;
-(id)initWithSource:(id)arg1 destination:(id)arg2 expectedTravelTime:(double)arg3 ;
-(void)dealloc;
-(id)source;
-(id)destination;
@end

