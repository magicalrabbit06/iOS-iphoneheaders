/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface _UICollectionViewTrackedValue : NSObject {

	double _trackedValue;
	NSArray* _values;
	long long _valuesCount;
	long long _currentIndex;
	BOOL _isAccumulating;

}

@property (assign,nonatomic) double trackedValue;              //@synthesize trackedValue=_trackedValue - In the implementation block
@property (assign,nonatomic) BOOL isAccumulating;              //@synthesize isAccumulating=_isAccumulating - In the implementation block
-(id)init;
-(double)speed;
-(void)addValue:(double)arg1 ;
-(double)trackedValue;
-(BOOL)isAccumulating;
-(void)setIsAccumulating:(BOOL)arg1 ;
-(void)setTrackedValue:(double)arg1 ;
@end

