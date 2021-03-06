/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface PLMomentTemporalSnapshot : NSObject {

	NSMutableSet* __nodes;
	double __range;
	double __distance;

}

@property (nonatomic,readonly) NSMutableSet * nodes;              //@synthesize _nodes=__nodes - In the implementation block
@property (nonatomic,readonly) double range;                      //@synthesize _range=__range - In the implementation block
@property (nonatomic,readonly) double distance;                   //@synthesize _distance=__distance - In the implementation block
-(double)range;
-(id)nodes;
-(id)initWithNodes:(id)arg1 inRange:(double)arg2 ;
-(double)distance;
@end

